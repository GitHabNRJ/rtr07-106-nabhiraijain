READ-ME FILE CONTAINING STEP-BY-STEP SETTING UP OF "FREEGLUT" AND EXECUTING THE FIRST OPENGL TRIANGLE USING FREEGLUT
*********************************************************************************************************************************************************
PLEASE READ THESE STEPS ALONG SIDE WATCHING THE SCREEN RECORDING VIDEO PROVIDED TO YOU.
*********************************************************************************************************************************************************

01) Boot into your Operating System - "Windows 10 update 22H2 ".



02) Open any Web Browser e.g : Microsoft Edge. Double-click on its icon if it is on Desktop.



03) In the upper-most search box, type in the website as follows :- http://freeglut.sourceforge.net/
    This is the website from where freeglut must be downloaded. 


04) 
a. Scroll down to "Prepackaged Releases". 

b. Here, click on the the link "Martin Payne's Windows binaries (MSVC and MinGW)".

c. On the next page, look under "freeglut 3.0.0 MSVC Package".

d. Click on "Download freeglut 3.0.0 for MSVC".

e. Considering that you are using "Microsoft Edge", a small box will appear at the bottom of the window asking :
   "What do you want to do with freeglut-MSVC-3.0.0-2.mp.zip ?"
   Click on "Save" button.

f. After some time, the same box will show the message "freeglut-MSVC-3.0.0-2.mp.zip finished downloading".

g. After this message appears, close the "Microsoft Edge" window by clicking on "Close" button in the right-upper corner of the window.



05) 
a. Right-click on the "Windows" icon at the left-bottom corner of the screen, in the left-most region of taskbar.

b. From the menu, click on "File Explorer". The "File Explorer" window will open.

c. In the left pane of the "File Explorer", click on "Downloads".

d. In the right pane, you will see the recently downloaded directory "freeglut-MSVC-3.0.0-2.mp.zip".

e. Keep this instance of "File Explorer" aside.



06) 
a. Following step (05 - a & b) given above, open another instance of "File Explorer".

b. In the left pane of THIS "File Explorer", click on "Local Disk (C:)".

c. In the "File Explorer" we kept aside in step (05), right-click on the "freeglut-MSVC-3.0.0-2.mp.zip" directory and from the menu, select "Cut".

d. In the "File Explorer" opened in this step (in "Local Disk (C:)"), right-click in the blank white space in the right pane and from the menu,
   select "Paste".

e. The "Destination Folder Access Denied" box will appear which will state that "You'll need to provide administrator permission to move to this folder".

f. Click on the "Continue" button.

g. Wait for a few seconds as "freeglut-MSVC-3.0.0-2.mp.zip" is transferred from "Downloads" to "Local Disk (C:)".



07)
a. Now, the "freeglut-MSVC-3.0.0-2.mp.zip" directory will be inside "Local Disk (C:)".

b. Close the instance of "File Explorer" (showing "Downloads", opened in step (05)), by clicking on "Close" button in the right-upper corner of the
   window.

c. In the "File Explorer" still on screen, right-click on "freeglut-MSVC-3.0.0-2.mp.zip" and from the menu select "Extract All ...".

d. The "Extract Compressed (Zipped) Folders" dialog box appears. It shows the folder destination to where the files from above mentioned ".zip"
   will be extracted. Click on "Extract" button.

e. Wait till the extraction completes, then, another instance of "File Explorer" will appear on its own, showing the "freeglut" directory.

f. Close it by clicking on "Close" button in the right-upper corner of the window.



08)
a. The "File Explorer" will show zip file "freeglut-MSVC-3.0.0-2.mp.zip" and its extracted directory "freeglut-MSVC-3.0.0-2.mp" under "Local Disk (C:)".

b. Double-click on the extracted directory "freeglut-MSVC-3.0.0-2.mp".

c. Inside it, there will be a single directory named "freeglut". Right-click on it and from the menu, select "Cut".

d. Click on the back arrow button (<-) in the left-top region of the "File Explorer". It will take you back to "Local Disk (C:)".

e. Here, right-click in the blank white space in the right pane and from the menu, click "Paste".

f. The "freeglut" directory will now appear under "Local Disk (C:)".

g. Under "Local Disk (C:)", select the extracted directory "freeglut-MSVC-3.0.0-2.mp" and press keys "Shift + Delete".

h. The "Delete Folder" dialog box will appear showing message "Are you sure you want to permanently delete this folder ?". Click the "Yes" button.



09)
a. Under "Local Disk (C:)", double-click on "freeglut" directory. Inside it, double-click on "bin" directory.

b. The "bin" directory will contain another directory named "x64" and a file named "freeglut.dll". We need the file INSIDE x64 folder for the next step.

c. Keep this instance of "File Explorer" aside.



10)
a. Following step (05 - a & b) given above, open another instance of "File Explorer".

b. In the left pane of THIS "File Explorer", click on "Local Disk (C:)".

c. In the right pane, double-click on "Windows" directory.

d. In the right pane, scroll down till you find "System32" directory, then double-click it.

e. In the "File Explorer" we kept aside in step (09), right-click on the file "freeglut.dll" and from the menu, select "Copy".

f. In the "File Explorer" we opened in this step (in "System32" directory), right-click in the blank white space in the right pane and from the menu,
   select "Paste".

g. The "Destination Folder Access Denied" box will appear which will state that "You'll need to provide administrator permission to move to this folder".

h. Click on the "Continue" button.

i. Wait for a few seconds as "freeglut.dll" is copied from "Local Disk (C:)" -> "freeglut -> "bin" -> "x64" to "Local Disk (C:)" -> "Windows" -> "System32"

j. You will now see "freeglut.dll" is also under "Local Disk (C:)" -> "Windows" -> "System32" 

k. Close this instance of "File Explorer" (which is showing "System32") by clicking on "Close" button in the right-upper corner of the window.



11)
a. In the "File Explorer" still on screen (from step (09)), click on "Local Disk (C:)" from the top list box or from left pane.

b. In the blank white space in the right pane, under "Local Disk (C:)", right-click and from the menu select "New" -> "Folder".

c. A "New Folder" will be created. Name it by typing in the name "MyProjects".

d. Double-click on the newly created "MyProjects" directory.

e. In the blank white space in the right pane, under "Local Disk (C:)" -> "MyProjects", right-click and from the menu select "New" -> "Folder".

f. A "New Folder" will be created. Name it by typing in the name "GLUT".

g. Double-click on the newly created "GLUT" directory.

i. Minimize the "File Explorer" by clicking the "Minimize" button in the right-upper corner of the window.



12)
a. Left-click on the "Windows" icon at the left-bottom corner of the screen, in the left-most region of taskbar.

b. Scroll down till you find "Visual Studio 2022" and click on it (NOTE : Click on "Visual Studio 2022" with the PURPLE Visual Studio Icon).

c. Wait till the opening of the Visual Studio IDE completes.

d. In the top menu bar, click on "File" menu. In the menu, Go to "New" and from the submenu, select "File ...".

e. The "New File" dialog box appears.

f. From the left pane, select "Visual C++". From the middle pane, select "C++ File (.cpp)". Click on the "Open" button.

g. After some time, a file named "Source1.cpp" will be opened inside the Visual Studio IDE.

h. In the top menu bar, click on "File" menu. In the menu, select "Save Source1.cpp As ...".

i. The "Save File As" dialog box appears.

j. From the left pane select "Local Disk (C:)". In the right pane, double-click on "MyProjects". Inside it, double-click on "GLUT".

k. In the bottom portion of the "Save File As" dialog box, there is a box labelled "File name", which is currently "Source1.cpp". Click inside the box.

l. Remove "Source1.cpp" from the box by pressing "Backspace" or "Delete" key from the keyboard and give the name "OGL.cpp".

m. Click on the "Save" button. You will now find that the file "OGL.cpp" is opened inside the Visual Studio IDE.

n. The file "OGL.cpp" will be created inside "Local Disk (C:)" -> "MyProjects" -> "GLUT".



13)
a. Type in your code in the file "OGL.cpp" which is already opened in the Visual Studio IDE and saved at the above mentioned location.

b. In the Visual Studio IDE, the long vertical yellow line in the left-most part of the window indicates "unsaved" part of code.
   Once you are done typing in the code, save the program by clicking on "File" menu from the top menu bar and selecting "Save OGL.cpp" or by using Key
   combination "Control + S".

c. When you perform step (13-b) given above, the vertical yellow line will turn green which indicates "saved" code.

d. Once you have saved your program, minimize the "Visual Studio" by clicking the "Minimize" button in the right-upper corner of the window.

e. Restore the "File Explorer" which was minimized in step (11-i) by clicking on the "File Explorer" icon on the task bar.

f. It will show that file "OGL.cpp" resides within "Local Disk (C:)" -> "MyProjects" -> "GLUT".

g. Keep this instance of "File Explorer" on screen.



14) 
a. Left-click on the "Windows" icon at the left-bottom corner of the screen, in the left-most region of taskbar.

b. Scroll down till you find "Visual Studio 2022" FOLDER and click on it (NOTE : Click on "Visual Studio 2022" with the YELLOW FOLDER Icon).
   Under the "Visual Studio 2022" folder, select "x64 Native Tools Command Prompt For VS 2022".

c. The black colored "x64 Native Tools Command Prompt For VS 2022" window will open.

d. Do not minimize/close "File Explorer".



15) Now give the following commands in the "x64 Native Tools Command Prompt For VS 2022" by typing in from the keyboard in an orderly manner :
a. Give command "cls" and press "Enter" key from the keyboard to clear the screen.

b. From the background "File Explorer", in its top list box, select the path "Local Disk (C:)" -> "MyProjects" -> "GLUT" by using left-mouse click and 
   drag. Right-click then and there on the selected text and from the menu, select "Copy".

c. Come back to the "x64 Native Tools Command Prompt For VS 2022" and type in command "cd" give a space by pressing "Spacebar" from the keyboard and just
   right-click the mouse to paste the path copied above or right-click and from the menu select "Paste" to paste the path. Press "Enter" key.

d. The path at the left side in the Command Prompt window will now be changed to "C:\MyProjects\GLUT".

e. Type in "C:" and press "Enter" key.

f. Give command "cls" and press "Enter" key from the keyboard to clear the screen.

g. Give the following command to compile the program :
   
   cl.exe /c /EHsc /I C:\freeglut\include OGL.cpp

h. The compilation error that will be seen in the screen recording video HAS BEEN KEPT DELIBERATELY. The compilation error is seen at line number 53.

   - In the video :

   - The "Visual Studio IDE" that was minimized in step (13-d) is maximized by clicking its icon in the task bar.

   - We go to the line at which the error has occured, that is line number 53, by examining the line numbers along the left most vertical margin of the
     window. Once we reach line 53, we correct the error on line 5, save the program again by following step (13-b)

   - The compilation command is given again after error correction to re-compile the code.

   - The compilation command must be given after every change made to the source code (OGL.cpp) and until the code is free of all errors AND warnings.

i. Once the source code (OGL.cpp) is successfully compiled, give command "dir" in the command prompt window.
   Command "dir" shows contents of the directory where we are currently at, in our case, "C:\MyProjects\GLUT".
   It will now show a newly created file, "OGL.obj" which is created by the compiler upon successful compilation.
   The same file also appears in the background "File Explorer".

j. Give command "cls" and press "Enter" key from the keyboard to clear the screen.

k. After successful compilation of the source code, give the following command to link the object code (OGL.obj) :

   link.exe OGL.obj /LIBPATH:C:\freeglut\lib\x64 /SUBSYSTEM:CONSOLE

l. No errors or warnings, means linking of the .obj file has been successful.

m. Once the object code (OGL.obj) is successfully linked, give command "dir" in the command prompt window.
   Command "dir" shows contents of the directory where we are currently at, in our case, "C:\MyProjects\GLUT".
   It will now show a newly created file, "OGL.exe" which is created by the linker upon successful linking.
   The same file also appears in the background "File Explorer".



16) EXECUTE THE PROGRAM !!!
a. You can execute the program by simply typing in the executable file's name in the "x64 Native Tools Command Prompt For VS 2022" window as 

   OGL.exe 

   or simply

   OGL 

   (with/without .exe extension), assuming that the Command Prompt is still in the directory "C:\MyProjects\GLUT".

b. You can also execute the program by double-clicking on the executable file "OGL.exe" in the "File Explorer" window.
   Your multi-colored OpenGL FreeGLUT Triangle on a black background will now appear in a window !!! 

c. According to the program that has been taught in class, pressing 'F' key will toggle 'Fullscreen' and 'Non-Fullscreen' modes of the application.

d. Pressing 'Escape' key will quit the application.

e. Left-click on title bar of the executing application and dragging will move the window around the screen.

f. The application can also be closed by clicking on "Close" button in the right-upper corner of the window.

*************************************************************************************************************************************************************************

