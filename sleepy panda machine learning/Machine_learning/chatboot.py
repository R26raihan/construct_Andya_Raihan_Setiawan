import requests
import json

# URL endpoint dan API key
url = "https://api.openai.com/v1/engines/davinci-codex/completions"
api_key = "sk-proj-xgmA9abfaagupAK5mw6ET3BlbkFJef6nFZoq5qQ7WAUSKqfA"

# Headers dengan kunci API
headers = {
    "Authorization": f"Bearer {api_key}",
    "Content-Type": "application/json"
}

# Data yang ingin dikirim sebagai permintaan
data = {
    "prompt": "Translate this text into French: Hello, how are you?"
}

# Mengirim permintaan POST ke API
response = requests.post(url, headers=headers, json=data)

# Memeriksa hasil balasan dari API
if response.status_code == 200:
    print("Response:")
    print(json.dumps(response.json(), indent=4))
else:
    print("Request failed:", response.status_code, response.text)
