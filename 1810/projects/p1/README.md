# Project - Making change

## Overview

This project will use:

* `cin` and `cout` for input and output from `<iostream>`
* strings from `<string>` - zybooks 2.14
* `round` from `<cmath>` - [cplusplus](http://www.cplusplus.com/reference/cmath/round/)
* a function that takes parameters and returns a value - zybooks chapter 6
* `double` and `int`
* an `if` statement - zybooks chapter 3
* a `while` loop - zybooks 4.2

It will prompt for an amount of money. It will break down this amount of money into the minimum number of twenty, ten, five and one dollar bills necessary to match the amount. Further, it will break down into the minimum number of quarters, dimes, nickles and pennies.

Here is an example of the program being run:

```text
Enter amount to change: 6.24
Five Dollar Bills
 pfft
 Count: 1 value: $5

One Dollar Bills
 pfft
 Count: 1 value: $1

Dimes
 clink
 clink
 Count: 2 value: $0.2

Pennies
 clink
 clink
 clink
 clink
 Count: 4 value: $0.04
```

Notice that only denominations that were needed were printed (due to the `if` statement).

Notice a "sound" is made for each unit of money spit out (in the `while` loop).

## Doubles

There are two types of commonly used floating point intrinsic types in C++.

* `float` - a single precision floating point value
* `double` - a double precision floating point value

|   | float | double |
| - | ----- | ------ |
| minimum | 1.17549e-38 | 2.22507e-308 |
| maximum | 3.40282e+38 | 1.79769e+308 |

Floating point types are **approximations**. Not all values are representable exactly - even with double precision.

For example, `1.0 / 49.0 * 49.0` yields `0.99999999999999989` not `1.0`. This can be a little maddening because the preceeding value would be printed as `1.0` unless forced to be more "precise". Hint for a healthier happier life: Remember this observation.

As a consequence, when doing calculations where results must be exact to a specific number of decimal places (money for example), doubles and floats are sometimes converted into integers.

In the case of this program, money can be processed as an integer number of pennies.

Once your program is "complete", test it with various values, 19.99 for example. Does the number of pennies work out? If not:

```c++
#include <cmath>
```

and the use of `round()` might be warrented.

## `<string>`

A handy user defined data type is the `string`. `string` is not built into C++. Instead, it is code accessed via:

```c++
#include <string>
```

## A *required* reusuable function to make change

```c++
int MakeChange(string unit, string sound, int incoming_amount, int unit_amount)
```

This is the *signature* of a reusable function to make change (you have to write it). It can make change with twenties or pennies, it doesn't matter. The denomination is controlled by what values the parameters have.

For example:

```c++
change_amount = MakeChange("Twenty Dollar Bills", "pfft", change_amount, 2000);
```

makes `unit_amount` equal to `20 * 100` pennies and sets the strings `unit` and `sound` to "Twenty Dollar Bills" and "pfft" respectibvely.

```c++
change_amount = MakeChange("Quarters", "clink", change_amount, 25);
```

Makes change in quarters, simply by changing the parameters.

The "making the change" part works the same no matter what the denomination.

Notice the `int` `change_amount` seems to go in and also come out of `MakeChange()`. Indeed this is the case. Suppose we were processing one dollar bills and `change_amount` were `125`. After coming back from `MakeChange()`, `change_amount` should have a value of 25. One hundred pennies (corresponding to an integer number of one dollar bills) would have been subtracted.

`MakeChange()` is the code responsible for printing:

```text
Pennies
 clink
 clink
 clink
 clink
 Count: 4 value: $0.04
```

i.e., it prints the value of `unit` then prints `sound` (indented by a space for prettiness) once for each `unit_amount` subtracted. This is in a `while` loop. It keeps count of the number of times through the loop, prints this, and the monetary value of the amount of change made. Notice the monetary amount is a floating point value again.

## Program outline

`main()`

1. Ask for input to a double.
2. Convert it to pennies.
3. Call `MakeChange()` once for each of 20s, 10s, 5s, 1s, quarters, dimes, nickles and pennies.

`MakeChange()`

This one is down to you. Hint: One `if` statement, one `while` loop.

## Sanity check

No more than 3 quarters should ever be printed. Why? One ten?

## Due date

You have one week. Due 11:59 PM next Tuesday.

## Partner rules

You may work with one partner.

## What to turn in

Just one C++ file. Into schoology.

## Prediction

Projects will get harder from here so lay a good foundation by solidly understanding the work you do on this project (don't rely on your partner).
