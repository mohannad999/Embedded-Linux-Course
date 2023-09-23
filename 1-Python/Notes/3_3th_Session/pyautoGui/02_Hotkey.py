import pyautogui
import time


# keep in your mind the delay time depend on your pc performance
pyautogui.hotkey('win')
time.sleep(1)
pyautogui.write('Terminal')  
time.sleep(1)
pyautogui.hotkey('enter')
time.sleep(1)
pyautogui.write('I love python')  