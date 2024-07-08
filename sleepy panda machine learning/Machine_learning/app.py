from flask import Flask, render_template, request
import joblib
import numpy as np

app = Flask(__name__)

# Load model and preprocessors
model = joblib.load('xgb_model_Test.pkl')
gender_encoder = joblib.load('Gender_label_encoder.pkl')
occupation_encoder = joblib.load('Occupation_label_encoder.pkl')
bmi_encoder = joblib.load('BMI Category_label_encoder.pkl')
scaler = joblib.load('minmax_scaler_split.pkl')

# Function to predict sleep disorder
def predict_sleep_disorder(features):
    try:
        prediction = model.predict(features.reshape(1, -1))
        return prediction[0]
    except ValueError as e:
        return str(e)

@app.route('/', methods=['GET', 'POST'])
def index():
    prediction = None
    if request.method == 'POST':
        # Get form data
        age = int(request.form['age'])
        gender = request.form['gender']
        occupation = request.form['occupation']
        bmi_category = request.form['bmi_category']
        sleep_duration = float(request.form['sleep_duration'])
        quality_of_sleep = int(request.form['quality_of_sleep'])
        physical_activity_level = int(request.form['physical_activity_level'])
        stress_level = int(request.form['stress_level'])
        heart_rate = int(request.form['heart_rate'])
        daily_steps = int(request.form['daily_steps'])
        systolic = int(request.form['systolic'])
        diastolic = int(request.form['diastolic'])

        # Encode categorical variables
        gender_num = gender_encoder.transform([gender])[0]
        occupation_num = occupation_encoder.transform([occupation])[0]
        bmi_category_num = bmi_encoder.transform([bmi_category])[0]

        # List of features for scaling
        numerical_features = [
            age, sleep_duration, quality_of_sleep, physical_activity_level,
            stress_level, heart_rate, daily_steps, systolic, diastolic
        ]

        # Scale numerical features using MinMaxScaler
        complete_features = np.zeros((1, 12))
        complete_features[0, :9] = numerical_features

        scaled_features = scaler.transform(complete_features).flatten()

        # Features list
        features = np.array([
            gender_num,
            scaled_features[0],  # age_scaled
            occupation_num,
            scaled_features[1],  # sleep_duration_scaled
            scaled_features[2],  # quality_of_sleep_scaled
            scaled_features[3],  # physical_activity_level_scaled
            scaled_features[4],  # stress_level_scaled
            bmi_category_num,
            scaled_features[5],  # heart_rate_scaled
            scaled_features[6],  # daily_steps_scaled
            scaled_features[7],  # systolic_scaled
            scaled_features[8]   # diastolic_scaled
        ])

        # Make prediction
        prediction = predict_sleep_disorder(features)
        if prediction == 0:
            prediction = 'Normal'
        elif prediction == 2:
            prediction = 'Sleep Apnea'
        elif prediction == 1:
            prediction = 'Insomnia'

    return render_template('index.html', prediction=prediction)

if __name__ == '__main__':
    app.run(debug=True)
