# First taste of Python

Python can run interactively or non-interactively. Interactive means you type and Python responds immediately. Non-interactive mode runs programs which have already been written and stored on disk.

On the Mac (from a terminal) here is what launching interactive Python might look like:

```
Python 3.7.3 (default, Mar 27 2019, 09:23:15) 
[Clang 10.0.1 (clang-1001.0.46.3)] on darwin
Type "help", "copyright", "credits" or "license" for more information.
>>> 
```

On Windows, launching Python from the Start Menu or from the command prompt will produce something like this:

```
Python 3.7.3 (v3.7.3:ef4ec6ed12, Mar 25 2019, 21:26:53) [MSC v.1916 32 bit (Intel)] on win32
Type "help", "copyright", "credits" or "license" for more information.
>>>
```

As you can see, these are similar but not quite the same.

The Python prompt ">>>" awaits your input. In the following examples, never type the prompt ">>>".

## 1 + 1

Simply type 1 + 1 and hit enter or return.

```
>>> 1+1
2
>>>
```

This immediate reaction is what interactive mode is like. "1 + 1" was *evaluated* as an *expression*. The expression's value is 2.

## A literal string

Enter 'Carthage' including the single quotes and hit enter or return.

```
>>> 'Carthage'
'Carthage'
>>>
```

'Carthage' was evaluated as an expression. The expression's value is the same.

## Addition with strings

Using the addition operator "+" with strings just concatenates the strings.

```
>>> 'Carthage' + ' ' + 'is pretty'
'Carthage is pretty'
>>>
```

Here the three string expressions were put together and one string was returned.

## Assigning into a variable

Variables are named storage locations. Enter the following and hit return.

```
>>> s = 'Carthage' + ' ' + 'is pretty'
>>>
```

Notice nothing was printed (except the next prompt). Where did the resulting string go? Into "s". Type "s" and hit return.

```
>>> s
'Carthage is pretty'
>>>
```

## Calling a function

Let's let the computer calculate how many characters are in variable s. Python has a function named "len". Functions are bundles of reusable code. len returns the length of what you give it as a parameter.

```
>>> len(s)
18
>>> 
```

## Variables are objects

All variables in Python are *objects*. Objects have various functions associated with them. For example:

```
>>> s.upper()
'CARTHAGE IS PRETTY'
>>> s
'Carthage is pretty'
>>>
```

## Exiting interactive Python

On Windows or the Mac type ```exit()``` and hit return.

## Future lessons

The approach we're taking early on in this course is that you'll be given code rather than forcing you to come up with the code on your own. This is a good thing. It means that we can start with more interesting examples than in other programming courses.

An important part of each lesson is that you will discuss the code at your desks. You'll research what you are given so that you understand it and will demonstrate that understanding by documenting the code (writing explanatory comments).

Early on, you will be given explanations along with the code - you shouldn't use this text as an excuse not to do research on your own. Sure, you could simply copy the explanation you're given into the code as your own documentation. What would you learn?

Soon though, we will lessen the amount of explanation we give you requiring that you do more research to write proper documentation.

Finally, we'll stop giving you the code. At that time, you will have matured to the point of being able to fly the nest - you'll be able to solve problems by creating your own simple programs. Excellent!


