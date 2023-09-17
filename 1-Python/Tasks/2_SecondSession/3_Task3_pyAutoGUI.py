# Using pyAutoGUI
# 1- To open vscode
# 2- install c++ testmate from extention
# 3- install clangd from extention
# 4- install c++ helper from extention
# 5- install cmake from extention
# 6- install cmake tools from extention


# this solution hava some issues ! 
import pyautogui
import time
import os


# keep in your mind the delay time d+ teepend on your pc performance
pyautogui.hotkey('win')
time.sleep(1)
pyautogui.write('vscode')  
time.sleep(1)
pyautogui.hotkey('enter')
time.sleep(1)
pyautogui.hotkey('ctrl','shift', 'X')
time.sleep(3)
with pyautogui.hold('ctrl'):
    pyautogui.press(['A'])
#pyautogui.hotkey('ctrl','A')
time.sleep(2)
pyautogui.hotkey('backspace', interval=0.25)
time.sleep(4)
pyautogui.write('c++ testmate', interval=0.25)  
time.sleep(1)
myPath =  os.path.dirname(os.path.realpath(__file__))+'/c++ testmate.png'

isfind = None
while isfind ==None : #isfind is None
    isfind =pyautogui.locateOnScreen(myPath,confidence=0.7)
print("I got the image")
while True: 
    x,y =pyautogui.position()
    print(x,y)