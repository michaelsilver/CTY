C++/CLI Windows Forms Projects for Visual Studio 2012
-----------------------------------------------------

1. INSTALLATION

Copy the files contained in this archive to the following folder:

C:\Program Files (x86)\Microsoft Visual Studio 11.0\VC\vcprojects\vcNET\

(...or wherever you have installed Visual Studio 2012).

This action will overwrite the file "vcNET.vsdir", so make sure to make
a backup of this file in case you want to uninstall.


2. USAGE

- Start Visual Studio 2012
- Click FILE -> New -> Project...   (or press Ctrl+Shift+N)
- Go to Templates -> Visual C++ -> CLR
- Select a "Windows Forms Application" or "Windows Forms Control Library".
- ...
- PROFIT!


3. REMARKS

This will not work for Visual Studio Express 2012, because Microsoft removed
the template files from this version of Visual Studio 2012. To make it work
on Visual Studio Express, you will need to have access to a full version of
Visual Studio 2012 and copy the folders "WinForm" and "ControlLibrary"
from the \VC\VCWizards\AppWiz\.NET folder, to the corresponding folder of
Visual Studio Express.
