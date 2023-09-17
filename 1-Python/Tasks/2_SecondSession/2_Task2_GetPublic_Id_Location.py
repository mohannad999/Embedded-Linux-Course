# Get your public Id from this link http://api.ipify.org/?format=json

# Get Your Location from this link  http://ip-api.com/json/<YOUR IP>

import requests

response = requests.get("http://api.ipify.org/?format=json")
if response.status_code == 200:
    data = response.json()
   # print(data)
    myIP = data['ip']
   # print(myIP)

response = requests.get(f"http://ip-api.com/json/{myIP}")
if response.status_code == 200:
    data = response.json()
    #print(data)
    city = data.get("city")
    region = data.get("regionName")
    country = data.get("country")
    timezone= data.get("Asia/Amman")
    print(f"Your public IP address: {myIP}")
    print(f"Location:\nCity : {city}\nRegion: {region}\nCountry: {country}\nTimeZone:{timezone}\n")
