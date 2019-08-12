# Fall 2019 - Student Accessible Files

This repository houses course content made available throughout the semester. Bookmark the subpage that refers to the course(s) in which you are enrolled.

**Note: When this semester is concluded, this repository will be taken down.**

This step is necessary since the classes contained here will be repeated.

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

```brew install wget``

[Here](https://www.maketecheasier.com/install-wget-mac/) is a page providing this same information, and more.

### Windows

To use wget (and just about everything else in my courses) you must install WSL (Windows Subsystem for Linux).

[Here](https://docs.microsoft.com/en-us/windows/wsl/install-win10) is Microsoft's instructions for installing WSL.

Ensure that you download Ubuntu 18.04 LTS so that all students are using the same version of WSL. If you have already downloaded a different distro, you can try to use it but may at some point need to switch.

To open ```powershell``` in adminstrator mode, use "option 1" from [this](https://www.tenforums.com/tutorials/25721-open-elevated-windows-powershell-windows-10-a.html) page.

When you have completed the installation of WSL, open the WSL terminal. Then do the following steps:

```bash
sudo -i
apt-get update
apt-get install wget
```

### Finally, downloading individual files from this repository.

Here is a sample of downloading one file from this repo. Where it says ```1100``` put in the course number (this term, either 1100 or 1810). Where it says ```syllabus.md``` put in the name of the file you want.

```text
wget https://raw.githubusercontent.com/pkivolowitz/student_accessible_files/master/1100/syllabus.md
```

To download something in the repo's top level directory (such as this README.md), leave out the course number. Example:

```bash
wget https://raw.githubusercontent.com/pkivolowitz/student_accessible_files/master/README.md
```

## Installing Visual Studio Code

Microsoft ```Visual Studio Code``` is the development editor we will be using. You are not required to use ```VS Code``` if you are already familiar with another IDE such as ```xcode``` or ```Visual Studio```. 

Go [here](https://code.visualstudio.com/download) and download (and install) the one for your operating system.

## Installing language tools

### 1100

#### Mac

Instructions are found [here](https://docs.python-guide.org/starting/install3/osx/).

#### Windows

Ubuntu should come with Python 3 preinstalled.

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


