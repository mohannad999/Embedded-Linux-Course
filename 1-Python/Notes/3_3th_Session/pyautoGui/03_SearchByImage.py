import pyautogui
import os
import time

pyautogui.hotkey('win')
time.sleep(1)
pyautogui.write('Terminal')  

# pyautogui.hotkey('enter')
# time.sleep(1)

#print(__file__) #to print file path
#print(os.path.realpath(__file__)) #another way to to print file path
# print(os.getcwd()) # 3th way to print file path  this line give the path where you running the code ,
#  so if you are n't in the same path that could couse a problem
# myTerminalPath = os.getcwd()+'/termenal.png' # it's not the best way 

myPath =  os.path.dirname(os.path.realpath(__file__))+'/termenal.png'

isfind = None
while isfind ==None : #isfind is None
    isfind =pyautogui.locateOnScreen(myPath,confidence=0.7)

print("I got the image")