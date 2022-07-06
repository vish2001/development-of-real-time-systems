# Development of real time systems

Course link: https://www.coursera.org/learn/real-time-systems

## SimSO installation:

Pre-requisite: Python 3.7(latest)

From command line, run these commands to install it from pip:

    python -m pip install simso

    python -m pip install simsogui

    python -m pip install pyqtwebengine

Create a python script "simsorun.py" like:
    
    from simsogui import run_gui
    run_gui()
    
Then run the application using the following command:
    
    python.exe simsorun.py

## FreeRTOS project installation:

Download the following zip file to install the project:

Link: https://tinyurl.com/freeRTOSlink

OS: Windows 10

Software used to setup the project: Visual studio Community : https://www.visualstudio.com/downloads/

Steps:

1)Start VS 

2)Choose “File” and then “Open Project” 

3)Navigate to the path of the project 

4)Go to the folder “FreeRTOS”

5)Go to the folder “Demo” 

6)Go to the folder “WIN32-MSVC”

7)Choose the file “WIN32.vcxproj” 

8)Click “Open” 

9)Edit the main.c file to build each assignment

10)To build your project select “Build” from the menu and then select “Build Solution”
