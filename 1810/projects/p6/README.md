# Frankenmap

All the words from Mary Shelley's *Frankstein or The Modern Prometheus* have been munched down to one word per line with all punctuation removed. You are going to use a giant ```map``` to record the number of times each word appears as well as keep track of every line number in which each word appears. Once your data structure is made, you will allow a user to interactively query your database.

A ```shell script``` is also provided to allow you to double check that you have at least found every word a correct number of times. Mac users can make use of the shell script. Alas, Windows users cannot. Windows makes me sad. Instead, Windows users can at least check their results by matching the searches found in this document. Your results should be the same.

## Sample output

### Failure to supply a file name

```text
$> ./a.out
Must provide word file name.
```

### Providing a bad file name

```text
$> ./a.out BADFILE
Could not open: BADFILE
```

### Providing Frankstein's data

```text
$> ./a.out words.txt
Enter a word (case sensititive): date
date found 5 times on lines:
9771, 19637, 20065, 76921, 78077
Enter a word (case sensititive): Date
Date found 1 times on lines:
69
Enter a word (case sensititive): bananas
Could not locate: bananas
Enter a word (case sensititive):
$>
```

What you see above shows the "date" with lowercase "d" is found 5 times in the whole of the book. It is found on the indicated lines (numbering from 1). "Date" with an uppercase "d" is found but once on the indicated line. Yes! We have no "bananas".

[Yes! We have no bananas](https://www.youtube.com/watch?v=PDd8shcLvHI)

The program is ended when an "end of file" is found in the standard input. On Unix-like systems this is can be entered on the keyboard using CNTRL-d. On Windows systems the equivalent key is CNTRL-z.

## Providing the command line argument

In *xcode*, edit the scheme. In *Visual Studio*, edit the project properties. In *Visual Studio Code*, edit the launch configuration. In cognito, do as the Cognitians do. In real environments, provide the file name as a command line argument.

## Checking results

If you are running on a Unix-like system, I have supplied a small shell script to help you check your results.

```text
$> ./check.bash Date
       1
$> ./check.bash date
       5
$> ./check.bash bananas
       0
```

## How to end the program

This program is to run a loop asking for user input of words to search for. If your program does one and done, you will instantly earn -10 points. To end the program, enter the `EOF` characters on your system. On Mac it is `ctrl-d`. On Windows it is `ctrl-z`.

## Maps

Maps are a powerful type of data structure which allow very fast searching for keys to find their associated values (a *key / value pair*). The idea is "this *key* maps to that *value*."

Maps are described in chapter 14.4 of your book.

## Features of maps used in this project

### Defining a map

Assuming:

```c++
#include <map>
```

A map is declared with something like:

```c++
map<key_type, value_type> map_name;
```

## Our map

```c++
map<string, vector<int>> words;
```

Or, perhaps you'd like to provide a more expressive synonym for `vector<int>`...

```c++
typedef vector<int> LineNumbers;

map<string, LineNumbers> words;
```

## Adding to our map

Maps do not have a `front` or `back` so there is no notion of a `push_back()`. Instead, we use `emplace()`.

## Finding an entry in a map

Here is some illustrative code:

```c++
auto it = words.find(word);
if (it == words.end()) {
       // Could not be found
} else {
       // key was found
}
```

The ```find``` method will return an iterator to a *pair* if the key is present. Otherwise it returns an iterator to the *end* iterator of the map.

Pairs are discussed in chapter 14.3 of your book. The iterator returned by ```find``` provides two members: ```first``` and ```second```. Recall:

```c++
map<string, LineNumbers> words;
```

This says in our case, ```first``` will be a string and contains the key. ```second``` is a ```vector<int>``` and contains the value.

## Deallocating our map

There isn't any *dynamic memory allocation* in this project so deallocation takes place automatically. If the preceding sentence means nothing to you right now, relax. It will someday.

## Work rules

All work is to be done solo.

## Suggestion

Make your own test data files for initial testing. A first file might have only one word. A second file might have the same word twice.

----

<i>
	You're building a tall building.
	<br/>
	Don't move on to the next floor until you are sure of the current floor.
</i>

----

## Grading

Out of 100 points, as usual. Also as usual, a single warning incurs a ten point penalty. Commenting will be part of your grade.
