import requests
response = requests.get(
    'http://api.aladhan.com/v1/calendarByAddress/2023/8?address=Sultanahmet%20Mosque,%20giza,%20Turkey&method=2')

# Check if the request was successful
if response.status_code == 200:
    data = response.json()
    #print(data["data"][0]["timings"])
    #print(data)


# dic2 = {
#    "code":200,
#    "status":"OK",
#    "data":[
#       {
#          "timings":{
#             "Fajr":"04:30 (+03)",
#             "Sunrise":"06:00 (+03)",
#             "Dhuhr":"13:10 (+03)",
#             "Asr":"17:05 (+03)",
#             "Sunset":"20:21 (+03)",
#             "Maghrib":"20:21 (+03)",
#             "Isha":"21:50 (+03)",
#             "Imsak":"04:20 (+03)",
#             "Midnight":"01:10 (+03)",
#             "Firstthird":"23:34 (+03)",
#             "Lastthird":"02:47 (+03)"
#          },

#       }
#    ]
# }
#print(dic2["data"][0]["timings"]["Fajr"])


print(data["data"][0]["timings"]["Fajr"])