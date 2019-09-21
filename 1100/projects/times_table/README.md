# Nested Loop Exercise - Times Table

## Goal

You are to write a program that prints the times table in the range of 1 to 10. For example:

```text
       1   2   3   4   5   6   7   8   9  10
   1   1   2   3   4   5   6   7   8   9  10
   2   2   4   6   8  10  12  14  16  18  20
   3   3   6   9  12  15  18  21  24  27  30
   4   4   8  12  16  20  24  28  32  36  40
   5   5  10  15  20  25  30  35  40  45  50
   6   6  12  18  24  30  36  42  48  54  60
   7   7  14  21  28  35  42  49  56  63  70
   8   8  16  24  32  40  48  56  64  72  80
   9   9  18  27  36  45  54  63  72  81  90
  10  10  20  30  40  50  60  70  80  90 100
```

Notice that:

* the first printed line is the column heading.
* the first printed column is the row heading.
* every number including the headings are printed within a space four units wide no matter how many digits are in the printed number
* there is a four blank space header printed in the top left corner

## Formatted print statements

Causing each number to be printed within a four space cell is done with formatted print statements.

For example (from interactive python):

```python
>>> i = 3
>>> j = 30
>>> k = 300
>>> print(i, j, k)
3 30 300
>>> print("%4d%4d%4d" % (i, j, k))
   3  30 300
>>> for counter in range(1,5):
...     print("%4d" % counter, end='')
... 
   1   2   3   4>>> 
```

Notice that ```print(i, j, k)``` puts a single space between each value.

But, ```print("%4d%4d%4d" % (i, j, k))``` places each value within a cell four spaces wide. ```%4d``` contains three pieces instructions to python. The ```%``` says "Here is something to print". The ```4``` says print the thing within a cell 4 spaces wide. The ```d``` says the thing is an integer.

In this example: ```print("%4d" % counter, end='')``` you can begin to see how a row of products can be printed, one after the other.

## Due date

This project is due Friday September 27th by the time that class starts.

## Work rules

This project is intended to be done solo.

## Broad hint

This program can be done with exactly one nested loop (two for loops). However, this complicates things a tad. Instead use a for loop for the top heading, **then** a nested for loop for the main body.
