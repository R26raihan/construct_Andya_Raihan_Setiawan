import joblib
import numpy as np

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

# Main function to handle user input and prediction
def main():
    # Prompt user for input
    age = int(input("Enter age: "))
    gender = input("Enter gender (Male/Female): ")
    occupation = input("Enter occupation (Doctor/Teacher/Nurse/Engineer/Accountant/Lawyer/Salesperson/Others): ")
    bmi_category = input("Enter BMI category (Normal/Overweight/Obese): ")
    sleep_duration = float(input("Enter sleep duration in hours per night: "))
    quality_of_sleep = int(input("Enter quality of sleep (0-10): "))
    physical_activity_level = int(input("Enter physical activity level (0-100): "))
    stress_level = int(input("Enter stress level (0-10): "))
    heart_rate = int(input("Enter heart rate in bpm: "))
    daily_steps = int(input("Enter daily steps count: "))
    systolic = int(input("Enter systolic blood pressure in mmHg: "))
    diastolic = int(input("Enter diastolic blood pressure in mmHg: "))

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
        print("Predicted Sleep Disorder: Normal")
        print("""
        Tips for Maintaining Good Sleep:
        - Stick to a sleep schedule, even on weekends.
        - Practice a relaxing bedtime ritual.
        - Avoid naps, especially in the afternoon.
        - Exercise daily.
        - Ensure your room has an ideal temperature, sound, and light.
        """)
    elif prediction == 2:
        print("Predicted Sleep Disorder: Sleep Apnea")
        print("""
        Tips for Managing Sleep Apnea:
        - Maintain a healthy weight.
        - Try sleeping on your side.
        - Avoid alcohol and smoking.
        - Use a CPAP device as prescribed.
        - Practice good sleep hygiene.
        """)
    elif prediction == 1:
        print("Predicted Sleep Disorder: Insomnia")
        print("""
        Tips for Managing Insomnia:
        - Stick to a consistent sleep schedule.
        - Avoid caffeine and nicotine close to bedtime.
        - Create a comfortable sleep environment.
        - Manage stress and practice relaxation techniques.
        - Limit screen time before bed.
        """)

if __name__ == "__main__":
    main()
