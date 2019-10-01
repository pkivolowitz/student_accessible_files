# P2 - Redacto-Matic

In this project you will create the Redacto-Matic, a tool your favorite government or other entity can use to automatically redact sensitive phrases. How topical for these modern times!

The goals of this project are to provide practice using:

* `for` and `while` loops.
* `string` and certain `string` operations
* `getline()`

References for new things used:

| New Thing | Reference |
| ----- | --------- |
| `getline()` | zybooks 2.14 |
| `string.push_back()` | zybooks 5.12 |
| `string.find()` | zybooks 5.12 |
| `string.replace()` | zybooks 5.12 |
| `string.length()` | zybooks 5.11 |
| `string.npos` | zybooks 5.12 |

So that you may test with a larger body of text, a file is supplied containing what your program will think is your user input. This slight-of-hand will be accomplished using command line *redirection*.

## Sample run

```text
Phrase to redact: and

I went to the store and bought a sour pickle sandwhich.
I went to the store *** bought a sour pickle s***which.
```

First, prompt the user for a phrase to redact.

Then keep reading lines of text (using `getline()`) until an "end-of-file" is reached. For each line read, all (case sensitive) matches of the phrase are replaced with the same number of asterisks as there are letters in the phrase.

## Scaling expectations

To set your expectations at a reasonable level, my reference implementation uses:

* `cin` in two places (one is with `getline()`)
* `cout` in two places
* One `for` loop
* One nested `while` loop (i.e. a `while` loop inside a `while` loop)

Including some extra lines, my implementation was about 30 lines.

**NOTE** the above are not requirements nor are they provided as a challenge. Rather, this information is provided so that you may avoid writing hundreds of lines thinking that that amount of work was necessary. If you find yourself with more than 50 lines of code, please rethink your approach.

## Building the string of asterisks

When you `find()` instances of the target phrase, you must replace them with a string of asterisks of the same `length()`. You'll need to create a string with the correct number of asterisks. One straightforward way to do this is by beginning with an empty string and using `push_back()` to add one asterisk at a time.

## Finding the target string

Use the `string` method `find()` to locate instances of the target. Note that there may be more than one instance in the same line. You need to pay close attention to the value returned by `find()`. Emphasising that there may be more than one instance in the same line is a strong hint a loop is involved. Another strong hint, is the words *strong hint* in the previous sentence.

## Reading the input

Use `getline()` to read from `cin`, placing each read line into a `string` variable. Since there can be any number of lines to be read, `getline()` should be part of some loop.

## Running your program from the command line

For robust testing, we'll use command line redirection. To do this, we must run from the command line.

On the Mac, where everything is "easy," this is not easy.

* Right click on the source code file's name in the folder view.
* Click `Show in Finder`.
* A `Finder` window opens with the file selected. Click in the empty space below the file name - yes, the empty space.
* Up at the top of the screen where `Finder` has its menus, click on the word `Finder`.
* Click on `Services`.
* Select `New Terminal at Folder`.
* In the `terminal` type the following: `c++ -g -Wall -std=c++11` and add the name of your cpp file. For example, if the name of your cpp file was `source.cpp` you would type `c++ -g -Wall -std=c++11 source.cpp`
* If any errors or warning display, you should fix them and repeat.
* Enter `./a.out` to run the program normally. Repeat as desired.

```text
hyde tmp $> c++ -g -Wall -std=c++11 source.cpp
hyde tmp $> ./a.out
Hello, world
hyde tmp $>
```

With VS on Windows, where everything is "hard", this is relatively easy.

* Tools->Command Line->Developer Command Prompt
* Type `cl /EHsc` and add the name of your cpp file. For example, if the name of your cpp file was `main.cpp` you would type `cl /EHsc main.cpp`
* If any errors or warnings display, uou should fix them and repeat.
* Enter the root name of your cpp file to run the program normally. Repeat as desired.

```text
C:\Users\perrykivolowitz\source\repos\debugging_lesson>cl /EHsc main.cpp
Microsoft (R) C/C++ Optimizing Compiler Version 19.22.27905 for x86
Copyright (C) Microsoft Corporation.  All rights reserved.

main.cpp
Microsoft (R) Incremental Linker Version 14.22.27905.0
Copyright (C) Microsoft Corporation.  All rights reserved.

/out:main.exe
main.obj

C:\Users\perrykivolowitz\source\repos\debugging_lesson>main
Hello, world

C:\Users\perrykivolowitz\source\repos\debugging_lesson>
```

## Testing your program with large amounts of text

To test in a more robust manner, use command line redirection. The template for this looks like:

```text
prompt> [name or path to program] < [name or path to data file]
```

For example (Mac):

```text
hyde tmp $> ./a.out < data.txt
```

For example (Windows):

```text
C:\Users\perrykivolowitz\source\repos\debugging_lesson>main < data.txt
```

## Grading

As per usual, this project is scored out of 100 points.

Your code *must* list your name and your partner's name (if you have a partner). Failure to do this results in a 10 point reduction.

Five points will be deducted if your code produces any warnings. In the future this amount rises to ten.

## Partnership rules

You may use one partner. I suggest you use a different partner than in the last project so that you get to know more people in the class.

## Turning in code

One partner turns in their code into Schoology. The other partner (if any) turns in a text file into Schoology listing the names of the partners.

## Due date

The project is due at 11:59 PM October 8th.
