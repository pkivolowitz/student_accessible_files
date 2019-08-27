# Additional settings for the command line environment

By now you should have your software environment set up.

Enter your command line environment. On the Mac, this means run ```terminal```. On Windows, this means enter Ubuntu.

## First make things a little safer

You must type in the following **exactly** as specified. Any deviation at all will cause trouble. We only have to do this once.

### Enter ```vi```

Immediately after entering the command line environment do:

On the Mac: ```vi .bash_profile```

On Windows: ```vi .bashrc```

If what you see next is unreadable because of stupid color choices by the czars of color, type this exactly: ```:syntax off``` and hit return.

### Go to the end of the file

Type ```G```

### Enter append mode

Type ```A```

You will see ```-- INSERT --``` at the bottom of the window.

Hit the return / enter key. A new line will open up.

### Create some aliases to make things *safer*

Below, characters such as the single quote ```'``` must be correct. Spacing must be correct. Type exactly:

```alias rm='rm -i'``` and hit the return / enter key

```alias mv='mv -i'``` and hit the return / enter key

```alias cp='cp -i'``` and hit the return / enter key

### WINDOWS ONLY: Defeat some stupidity to make things *livable*

If you are using the Mac, skip this section.

Hit the escape key (typically marked ```esc``` and located at the top left of your keyboard).

The ```-- INSERT --``` should disappear.

Type exactly:

```text
42G
```

You should land on a blank line after this:

```text
case "$TERM" in
    xterm-color|*-256color) color_prompt=yes;;
esac
```

Type exactly:

```i```

```-- INSERT --``` reappears.

Type:

```text
color_prompt=no
```

and hit the return / enter key, followed by the ESC key.

Type:

```79G```

You should land on the first column of a line that says:

```text
   alias ls='ls --color=auto'
```

Type exactly:

```i#``` then hit the ESC.

### Save the file and exit ```vi```

Hit the escape key (typically marked ```esc``` and located at the top left of your keyboard).

The ```-- INSERT --``` should disappear.

Type exactly: ```:wq``` and hit the return / enter key. ```vi``` should exit.

The command program should be present, again.

By the way, [here](https://twitter.com/iamdevloper/status/435555976687923200?ref_src=twsrc%5Etfw%7Ctwcamp%5Etweetembed%7Ctwterm%5E435555976687923200&ref_url=https%3A%2F%2Fcmdlinetips.com%2F2014%2F03%2Fvim-and-emacs-jokes-on-twitter%2F) is an old joke about exiting ```vi```.

### What did we just do?

First, once this is done correctly, you will not have to do it again. 

The files you just edited contain commands that are executed each time you enter the command line environment. You added three additional commands.
These commands added the ```-i``` *command line option* to three commands that we will use extensively that each can destroy files.

**This is super important: There is NO UNDO in this command line environment. Once a file is blown away, it's gone. There is no do over. Your only recourse is if you have a backup copy of the file. There is no safety net. NOTHING!**

Adding the ```-i``` option to ```mv```, ```cp```, and ```rm``` causes these commands to ask for confirmation if you will be overwriting or deleting a file.

Additionally, we turned off absolutely mind numbingly stupid coloring in the Ubuntu WSL terminal.

### On Windows - turn off the !@#(*$^&! bell!

On Windows Ubuntu type the following exactly and carefully: ```sudo vi /etc/inputrc``` And hit return. You will likely have to enter your easy-to-remember password.

Enter ```GA``` then hit return. You will be transported to the last line of the file and will enter ```-- INSERT --``` mode.

Enter ```set bell-style none``` and hit return.

Enter ```:wq``` and hit return.

You should be back to the prompt.

The *next* time you enter the command line environment, it won't freakin' make *doink* noises constantly.

