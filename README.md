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

To open ```powershell``` in adminstrator mode, use "option 1" from [this](https://www.tenforums.com/tutorials/25721-open-elevated-windows-powershell-windows-10-a.html) page.

Once Powershell completes its changes, you will be asked to restart your Windows machine. Do that.

Various Linux distros are found in the Windows App Store. Direct links to the distros are found on the Microsoft instructions given above. You may be asked to "sign up" for something, you don't have to. You may be asked to open the same page directly in the Windows App Store, do so.

Once in the App Store, on the Ubuntu 18.04 page, click "get". You will have to choice of using Ubuntu "across your devices". It isn't necessary that you do so - click "No Thanks".

Ubuntu will begin installation

If you have already downloaded a different distro, you can try to use it but may at some point you *might* need to switch. If you already have a Linux virtual machine, you may try to use it but *might* need to switch.

Once installation is complete, search your Start Menu for Ubuntu and upon finding, you can pin to Start or Taskbar. Or both. Doing this will allow you to get to work quicker in the future.

To open the WSL terminal, simply click on the Ubuntu tile in your Start Menu or on the icon in the taskbar.

The first time, it will take a few minutes. It will ask ```Enter new UNIX username```. Simpler the better here as you're the only one using this system. Same is true for choice of password. 

**PLEASE CHOOSE A WSL PASSWORD THAAT YOU WILL NOT FORGET**.

You'll be asked to confirm the password by retyping it. Again, the password does not have to be your usual strong password. Rather, it can be something simple and memorable.

Then do the following steps:

```bash
sudo apt-get update
sudo apt-get upgrade
```

The above commands can be used from time to time to ensure your WSL environment is up to date.

The second command above, which actually performs the upgrade operation, will ask you to confirm your intent to upgrade ending with ```[Y/n]```. This pattern is common in Linux - notice that the ```Y``` is capitalized. This means it is the default if you simply hit the return key.

Now wait.

You may be presented with a scary looking text box talking about ```Restart for Library Upgrades```. Select ```Yes```.

When this program completes, you're ready to move on.

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

Enter Ubuntu (i.e. you're running the Ubuntu command prompt).

Perform the following - if you are continuing from the previous step performing the ```apt-get update``` is not needed:

```text
sudo apt-get update
sudo apt-get install wget
```

It is likely, that ```wget``` is already installed. If you get a message about something that can be ```autoremoved```, you can do so using

```text
sudo apt autoremove
```

Notice, this time you're executing ```apt``` and not ```apt-get```. The reasons for this are known only to your hairdresser.

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
sudo apt update
sudo apt install build-essential
```

With regard to the ```update```, if you are continuing from the beginning of these instruction, this command is not necessary.

Confirm that the tools have been installed by typing:

```bash
g++ --version
```

You are likely to get version 7.4.0 or later.

## Continue setting things up

Continue set up [here](./setup_2.md).
