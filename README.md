# Fall 2019 - Student Accessible Files

This repository houses course content made available throughout the semester. Bookmark the subpage that refers to the course(s) in which you are enrolled.

**Note: When this semester is concluded, this repository will be taken down.**

## Installing Visual Studio Code

Microsoft ```Visual Studio Code``` is the development editor we will be using. You are not required to use ```VS Code``` if you are already familiar with another IDE such as ```xcode``` or ```Visual Studio```. 

Go [here](https://code.visualstudio.com/download) and download (and install) the one for your operating system.

## Installing the command line environment

### Mac

You already have "terminal". If it is not already pinned to your Dock, do that now.

[Here](https://vimeo.com/354865351) is a video showing this.

### Windows

The Linux command line environment is found within WSL (Windows Subsystem for Linux).

To access this, you must have Windows 10. Ensure that you are fully updated to the latest Windows 10 - if you need to do this, do it outside of class since it may take hours.

[Here](https://docs.microsoft.com/en-us/windows/wsl/install-win10) is Microsoft's instructions for installing WSL.

Ensure that you download Ubuntu 18.04 LTS so that all students are using the same version of WSL. If you have already downloaded a different distro, you can try to use it but may at some point you *might* need to switch.

To open ```powershell``` in adminstrator mode, use "option 1" from [this](https://www.tenforums.com/tutorials/25721-open-elevated-windows-powershell-windows-10-a.html) page.

When you have completed the installation of WSL, pin Ubuntu to your Start Menu.

To open the WSL terminal, simply click on the Ubuntu tile in your Start Menu.

Then do the following steps:

```bash
sudo apt-get update
sudo apt-get upgrade
```

The above commands can be used from time to time to ensure your WSL environment is up to date.

## Downloading individual files

On both the Mac and on Windows, to download a single file without using ```git```, you can use ```wget```.

### Macintosh

```wget``` does not come installed on the Mac.

To get it, you must use ```brew```.

```brew``` does not come installed on the Mac.

To get it, you must do this:

```text
/usr/bin/ruby -e "$(curl -fsSL https://raw.githubusercontent.com/Homebrew/install/master/install)"
```

Copy this entire line above and paste it into the Mac ```Terminal```. Then execute it.

Next, to install ```wget``` copy and paste this next line into the Mac ```Terminal```. Then execute it.

```brew install wget```

[Here](https://www.maketecheasier.com/install-wget-mac/) is a page providing this same information, and more.

### Windows

Enter Ubuntu.

Perform the following:

```text
sudo apt-get update
sudo apt-get install wget
```

### Finally, downloading individual files from this repository

First, decide where you want the downloaded file to go. 

On the Mac, when you enter ```terminal``` you are in your own *home directory*. You will learn how to navigate the directory structure in class.

On Windows, when you enter ```Ubuntu``` you are in your own *home directory*. You will learn how to navigate the directory structure in class.

Once you are "in" the directory you wish the file to be downloaded to, you may use ```wget```.

Here is a sample of downloading one file from this repo. Where it says ```1100``` put in the course number (this term, either 1100 or 1810). Where it says ```syllabus.md``` put in the name of the file you want.

```text
wget https://raw.githubusercontent.com/pkivolowitz/student_accessible_files/master/1100/syllabus.md
```

To download something in the repo's top level directory (such as this README.md), leave out the course number. Example:

```bash
wget https://raw.githubusercontent.com/pkivolowitz/student_accessible_files/master/README.md
```

You can quickly get the URL of the file to download by navigating to it in a Web browser, then copy the URL and paste it in the terminal after ```wget```.

## Installing language tools

### 1100

#### Mac Python3

Instructions are found [here](https://docs.python-guide.org/starting/install3/osx/).

Next install ```pip3```. ```pip3``` is the package manager for Python3

```bash
brew install pip3
```

Install some Python packages:

```bash
pip3 install opencv-python scikit-image scipy mutagen
```

#### Windows Python3

Ubuntu should come with Python 3 preinstalled. Check by executing (in terminal):

```bash
python3
```

This is called interactive Python. Exit this program by pressing the ```d``` key and the ```ctrl``` or ```control``` key at the same time.

Ensure that ```pip3``` is installed by executing:

```bash
pip3
```

If it is not installed, execute:

```bash
sudo apt-get install python3-pip
```

Install some Python packages:

```bash
pip3 install opencv-python scikit-image scipy mutagen
```

### 1810

#### Mac

Open a terminal and enter (and execute):

```bash
g++
```

This will fail but should pop up a dialog that offers you the chance to install ```g++```. Do not select ```Get Xcode```. Rather select ```Install```.

Verify that you have ```g++``` by typing (and executing):

```bash
g++ --version
```

#### Windows

From a WSL terminal enter (and execute):

```bash
sudo -i
apt update
apt install build-essential
```

