import pyautogui
import os

pyautogui.click(x=1783, y=22)
pyautogui.PAUSE = 0.5
# pyautogui.click(x=109, y=67) 

# pyautogui.PAUSE = 3
pyautogui.click(x=1000, y=700) 
# pyautogui.scroll(-2000)
# pyautogui.scroll(300)

folder_path = "D:\COURSEWORK\Sem 9\Design_Lab\Algo2/3/4\Scripts/"
cnt=1
for root, _, files in os.walk(folder_path):
    for cnt in range(12, len(files)+1):  
        filename = str(cnt)+".txt"
        
        pyautogui.moveTo(330, 293, duration=0.75)
        pyautogui.click()
        pyautogui.PAUSE = 0.2
        # pyautogui.click(x=525, y=748, interval=1)
        # pyautogui.PAUSE = 0.5

        for i in range(4):
            pyautogui.press('tab')
        pyautogui.PAUSE = 0.5
        pyautogui.press('enter')

        pyautogui.PAUSE = 1
        pyautogui.typewrite(filename)
        pyautogui.PAUSE = 0.2
        pyautogui.press('enter')
        for i in range(0, 2):
            pyautogui.press('tab')
        pyautogui.PAUSE = 0.3
        pyautogui.press('enter')
        # pyautogui.PAUSE = 0.3
        # pyautogui.click(x=771, y=979, interval=1)
        # pyautogui.scroll(-800)
        # pyautogui.click(x=588, y=700, interval=1)

        # move the cursor to (316, 158) and click after 2 seconds
        pyautogui.moveTo(316, 158, duration=1.5)
        pyautogui.click()
        pyautogui.PAUSE = 1

        # click "Enter"  using pyautogui