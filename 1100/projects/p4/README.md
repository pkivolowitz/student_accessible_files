# More advanced CSV project

## Overview

This program manipulates a CSV file in a more complex way. You will generate a report using various statistical functions with data coming from certain columns in the file. The legends of the report will come from the data file as well.

In addition, you will use a new (to you) feature of lists: `index()`.

## Data format

You are given a large CSV file whose first few lines look like this:

```csv
District Number,District,School,Test-takers: 2012,Test-takers: 2013,Test-takers: Change%,Participation Rate (estimate): 2012,Participation Rate (estimate): 2013,Participation Rate (estimate): Change%,Percent Meeting Benchmark: 2012,Percent Meeting Benchmark: 2013,Percent Meeting Benchmark: Change%
26111,Ansonia,Ansonia High School,118,104,-12,67,61,-6,18,18,0
46111,Avon,Avon High School,254,243,-4,90,89,-1,73,75,2
76111,Berlin,Berlin High School,216,220,2,81,82,1,42,49,7
96111,Bethel,Bethel High School,200,190,-5,86,82,-4,51,49,-2
116111,Bloomfield,Bloomfield High School,116,130,12,79,89,10,11,8,-3
```

In this project the headers found on the first line of the file will be used to create the headers of the report you are going to write.

You'll have to handle some bad lines of data such as this one:

```csv
936511,New Haven,Polly T McCabe Center,,,,,,,,,
```

## Output

Your output should match this exactly:

```text
                                          MEAN  MEDIAN  STDDEV MAX                                           MIN                                   
Test-takers: 2012                       159.12  133.00  109.34 Greenwich High School                  559.00 Riverside Education Academy              12.00
Test-takers: 2013                       160.39  136.00  107.51 Greenwich High School                  604.00 Riverside Education Academy              14.00
Test-takers: Change%                      5.85    1.00   25.37 High School Inc.                       175.00 Eli Whitney High School                 -59.00
Participation Rate (estimate): 2012      75.53   77.00   15.87 Big Picture High School                100.00 Harvard H Ellis Technical High School    22.00
Participation Rate (estimate): 2013      76.07   78.00   17.73 Big Picture High School                100.00 Harvard H Ellis Technical High School    23.00
Participation Rate (estimate): Change%    0.54    0.00    9.00 Culinary Arts Academy                   29.00 Eli Whitney High School                 -39.00
Percent Meeting Benchmark: 2012          36.73   38.00   21.59 New Canaan High School                  82.00 Culinary Arts Academy                     0.00
Percent Meeting Benchmark: 2013          37.20   39.00   22.35 Darien High School                      86.00 Culinary Arts Academy                     0.00
Percent Meeting Benchmark: Change%        0.47    1.00    5.87 Parish Hill High School                 20.00 Litchfield High School                  -18.00
```

You will notice that the lines come from headings columns starting at index 2. 

## The data structure

For every line, check to see if all the data is present. If all data is not present, toss the line.

The data structure needed is a Python list embedded in a Python list. The outer list represents every line of data read. Each outer list entry has an embedded list holding the columns from that line.

When you have the data organized in this way, you will process columns starting at 3.

## statistics

Import module `statistics`. From it you will use:

| statistics function | purpose |
| ------------------- | ------- |
| `mean()` | This takes the average of a Python list |
| `median()` | This takes the median (middle value) of a Python list |
| `stdev()` | This takes the standard deviation of a Python list |

For each of columns 3 through last in your outer list, make a temporary list that can be passed to each statistical function. This computation takes place column by column so your output will happen column by column (i.e. without new lines).

## `max` and `min`

Finding the school names for the minimum and maximum values is different from the previous columns of the output. In the above, you build a temporary table from the column you're working on and print some statistic about the temporary table. 

For the min and max values, you must also reach back into the original list to fish out school names. There is an element in the temporary table for every line of input. One of these will be minimum and one will be maximum (ignoring ties). The min and max element have an index in the temporary list. Using this index, reach back into the original list and fetch the school column. The key is being able to turn a value found by `min()` and `max()` into the index the value is sitting it.

There is a cool Python list feature named `index()`. It will find some element in a list. 

For example:

```python
>>> data = [ 12, 43, 1, 50, 12, 9, 0 ]
>>> data.index(43)
1
>>> data.index(max(data))
3
>>> data[data.index(max(data))]
50
>>> 
```

In this example, `data` is a stand-in for the temporary list made.

`data.index(43)` returns 1 because `data[1]` is the first element found containing 43. Its index is 1.

`data.index(max(data))` returns 3. `max(data)` return 50. Then 50 is used by `.index()` to find the 50 - it is found at index 3.

## Work rules

Work is to be done solo.

## Setting expectation of length of program

With some extra stuff, my solution is 35 lines. This doesn't mean yours has to be 35 lines. I give you this information to scale your expectations - if you find yourself writing 100 or more lines, you're doing it "wrong".

