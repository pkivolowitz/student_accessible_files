# Looping 2 plus lists

In lesson 003 we saw our first loop. In this lesson, as in the next few, we will learn more about looping. We will also learn about lists and tuples.

## A second for loop example

Here is the code statements from [p2.py](./p2.py) (with comments removed for brevity). You can get this code with:

```
wget https://raw.githubusercontent.com/pkivolowitz/student_accessible_files/master/1100/lessons/003/p2.py
```

```python
 0 # Your job is, at your table:
 1 # - research the various Python 3 features found in this program
 2 # - discuss the program
 3 # - write documentation (comments, like this text) describing your understanding
 4 #   of how this program works.
 5 
 6 lyrics = [
 7 	"And a partridge in a pear tree.",
 8 	"2 turtle doves,",
 9 	"3 French hens,",
10 	"4 calling birds",
11 	"5 golden rings",
12 	"6 geese a-laying",
13 	"7 swans a-swimming",
14 	"8 maids a-milking",
15 	"9 ladies dancing",
16 	"10 lords a-leaping",
17 	"11 pipers piping",
18 	"12 drummers drumming"
19 ]
20 
21 print ("On the 12th day of Christmas my true love sent to me")
22 
23 for line in lyrics:
24 	print (line)
```

This program shows an example of a Python ```list```. Lists are super important in Python. The list is one of several basic data structures that allow a number of pieces of data to be collected together under one variable name. Another closely related data structure is the ```tuple```. Let's go to interactive Python to explore some of the similarities between lists and tuples.

```python
>>> lst = ['a', 10, True]
>>> tup = ('a', 10, True)
>>> lst
['a', 10, True]
>>> tup
('a', 10, True)
>>>
```

This demonstrates initializing a list and a tuple. Notice how members of a list or tuple can represent different types of data. In this case, the first item is a string, the second is a number, and the last is a boolean value.

Python distinguishes lists from tuples using '[' and ']' to surround lists but '(' and ')' to surround tuples.

### Some similarities between list and tuple

In both, a comma separates the values when initializing.

```python
>>> len(lst)
3
>>> len(tup)
3
>>>
```

Determining how many elements are contained within a list or tuple is the same, using ```len()```.

```python
>>> lst[1]
10
>>> tup[1]
10
>>>
```

Accessing a single member is a list or tuple is the same. Use the bracket syntax to identify which member to single out. Remember, Python starts counting from 0 so ```lst[1]``` is the *second* element in ```lst```.

### A big difference between lists and tuples

```python
>>> lst[1] = "Bert and Ernie"
>>> lst
['a', 'Bert and Ernie', True]
>>> tup[1] = "Bert and Ernie"
Traceback (most recent call last):
  File "<stdin>", line 1, in <module>
TypeError: 'tuple' object does not support item assignment
>>> 
```

Wow. Here's a big difference between lists and tuples. You can modify a list but you cannot modify a tuple!

### Lines 6 through 19

These lines (not repeated here) define a list containing descriptions of gifts given on the various "days of Christmas" according to a traditional song from the late 1700's. Note that the list is initialized in ascending order while they are sung in descending order.

### Line 23

```python
for line in lyrics:
```

Like our previous for loop example, a variable (in this case named ```line```) will be assigned the various things in a collection (in this case the members of the list ```lyrics```) one at a time.

In the previous lesson's for loop, we specified the number of times to loop using an explicit range using, you recall, ```range()```. This time, the number of loops will be controlled by the length of the container being iterated over. The container in this case is list ```lyrics```. ```line``` will be assigned each member of ```lyrics``` one at a time until all have been used.

### Slicing

Lists and tuples are fundamental data structures in Python. So much so, they provide a cool idea called "slicing". Back to interactive Python:

```python
>>> lst = [ 'a', 10, True ]
>>> lst[1]
10
>>> lst[1:2]
[10]
>>> lst[1:]
[10, True]
>>>
```

We saw the identifying a single member of a list (or tuple) can be done with the bracket syntax. 

```python
>>> lst[1]
10
```

Gives just the *second* element in ```lst```. This is a *slice* of ```lst``` containing one element.

The next line:

```python
>>> lst[1:2]
[10]
```

This is different. This says, give us a slice of ```lst``` that starts at index 1 and ends before index 2. Notice that the result is also a list containing 10, not 10 itself.

```python
>>> lst[1:]
[10, True]
```

This says, give us a list of all the elements in ```lst``` starting from index 1 and extending through the end of ```lst```.

Next:

```python
>>> mst = lst[:]
>>> mst
['a', 10, True]
>>> mst[1] = 'hey'
>>> mst
['a', 'hey', True]
>>> lst
['a', 10, True]
>>> 
```

This time we use a slice that refers to all the members of ```lst```. This is how one would make a *copy* of an entire list or tuple. ```mst``` is a copy of ```lst``` as evidenced by the change of ```mst[1]``` which does **not** change the corresponding element in ```lst```.

## Exercises

### zybook assignment

Read and do chapter 3.2 of your zybook. Stop when you get to named tuples.

### Discuss, Research and Document

Your first job is to learn the ins and outs of this code. You'll discuss what you think the code does and how it does it. You'll need to research parts of the Python 3 language. 

[Here](https://www.learnpython.org) is a good resource.

[Here](https://www.techbeamers.com/python-tutorial-step-by-step/#tutorial-list) is another good resource.

And of course, your zybook.

Write complete, thoughtful comments to fully document this code. Demonstrate your understanding of its purpose and operation.

### Reverse the list

Remember our lyrics are defined in the wrong order? We need them to go backwards - in descending order. We can add a second colon to the slicing syntax to define how to step from one element in the slice to the next.

   Here:

   ```python
   >>> mst = [ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 ]
   >>> mst[::2]
   [1, 3, 5, 7, 9]
   >>> mst[::3]
   [1, 4, 7, 10]
   >>> mst[::4]
   [1, 5, 9]
   >>> mst[::5]
   [1, 6]
   >>> mst[::15]
   [1]
   >>>
   ```

   The first example of stepping says, starting at element 0 (because the number before the first colon is missing) and extended to the very end (because the number between the colons is missing) return a new list which skips by 2 elements.

   The next few examples skip by the corresponding amounts. 

   The last example makes sense since the skip value is longer than the list itself, it returns only the first (zeroeth) element.

   Modify the program to reverse the order of the lyrics. What number would you step by?

### "Permanently" reversing the list

Now that you have reverse the order of the lyrics using a stepped slice, what if you wanted to "permanently" reverse the list? Meaning:

   ```python
   >>> mst
   [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
   >>> mst[::-1]
   [10, 9, 8, 7, 6, 5, 4, 3, 2, 1]
   >>> mst
   [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
   >>> 
   ```

   You can see that ```mst``` itself remained unchanged by slicing in reverse. This is because slicing returns a *new* list (or tuple).

   But what if we want: 

   ```
   >>> # some kind of magic happens here
   >>> mst
   [10, 9, 8, 7, 6, 5, 4, 3, 2, 1]
   >>>
   ```

   Read up [here](https://www.tutorialspoint.com/python3/list_reverse.htm) for this information.

   Now, modify the program so that the lyrics come out in the right order using the original for loop:

   ```python
   for line in lyrics:
   ```

## Homework

Read and do chapters 2.2, 3.1 and 3.7. These are due at the next class meeting.
