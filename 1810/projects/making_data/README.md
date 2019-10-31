# Making your own data

The next project requires some data. It will be assigned on Tuesday and you will have one week to do it.

Instead of me giving you the data, why don't you make your own?

## Two CSV files

CSV (Comma Separated Value) files are text files containing lines of values separated by delimiters - often commas.

### A simple CSV parser is given to you.

Two source code files are given to you.

| name | contents |
| -- | -- |
| simple_csv.cpp | C++ *source code* for the implementation of a simple CSV parser |
| simple_csv.hpp | C++ *header* for the simple CSV parser |

Add both files to your xcode or VS projects. This will be your first project that uses more than one source code file.

The header file contains only this:

```c++
#pragma once
#include <vector>
#include <string>

#define	SS_TRIM 		0x01
#define	SS_NOQUOTES		0x02
#define SS_NOTRIMMING	0x04

typedef unsigned char SS_OPTS;

std::vector<std::string> SimpleSplit(std::string &, char delimeter, SS_OPTS sso);
```

We will discuss this in class.

### Surnames

The first csv file (`surnames.csv`) you are given contains the most common surnames in the United States. The first few lines look like this:

```csv
name,rank,count,prop100k,cum_prop100k,pctwhite,pctblack,pctapi,pctaian,pct2prace,pcthispanic
SMITH,1,2376206,880.85,880.85,73.35,22.22,0.4,0.85,1.63,1.56
JOHNSON,2,1857160,688.44,1569.3,61.55,33.8,0.42,0.91,1.82,1.5
WILLIAMS,3,1534042,568.66,2137.96,48.52,46.72,0.37,0.78,2.01,1.6
BROWN,4,1380145,511.62,2649.58,60.71,34.54,0.41,0.83,1.86,1.64
JONES,5,1362755,505.17,3154.75,57.69,37.73,0.35,0.94,1.85,1.44
MILLER,6,1127803,418.07,3572.82,85.81,10.41,0.42,0.63,1.31,1.43
```

You are to read the entire file using the csv parser. From each line, pull out only `token[0]` - the surname. Make it pretty by ensuring that the first letter is capitalized and the remainder is lower case. Even though this might make names like "McNeil" not so nice, we'll keep things simpler.

### Given names

The second file (`fname`) you are given contains the most common given names over the last several years broken down by gender and year. Gender and year are irrelevant for our purposes so we do not care if there are more than one "Ellen". The first few lines look like this:

```csv
Year of Birth,Gender,Ethnicity,Child's First Name,Count,Rank
2011,FEMALE,HISPANIC,GERALDINE,13,75
2011,FEMALE,HISPANIC,GIA,21,67
2011,FEMALE,HISPANIC,GIANNA,49,42
2011,FEMALE,HISPANIC,GISELLE,38,51
2011,FEMALE,HISPANIC,GRACE,36,53
```

You are to pull out `tokens[3]` and make pretty in the same way as surnames. 

### With both given and surnames...

Make a string vector of the given names and one for the surnames.

### Headers

Notice both files have headers. You must skip the first line in each file.

## Required output

You are to choose first and last names at random. Choose an age at random from 18 through 21 (inclusive). You are to choose an 8 digit student id number (pad a random integer with 0's to make 8 digits).
You are to choose at random 8 "grades" which 95 percent of the time are between 70 and 100 inclusive. Five percent of the time they are between 0 and 69, inclusive.

You are to write a csv file with 500 such lines.

For example:

```csv
Jones,Paula,00001234,19,90,91,80,78,85,78,99,100
```

## This is an in-class project which must be completed

If you do not finish this in class, you must continue working on it since this program will generate the data you need for the next project to be assigned next week.
