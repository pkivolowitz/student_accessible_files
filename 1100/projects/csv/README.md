# P2 - Intro to `csv` files

Much of the data you will come across in your field may be composed of comma separated values. Files containing comma separated values are call `csv` files.

This project is a gentle introduction to parsing (making sense of) `csv` files.

## Data file

After creating a project for P2, download [this](./data.zip) zip file to the project directory. `unzip` it.

At this point you should have `unzip`. If you do not have unzip (on Linux or WSL) do:

```text
sudo apt install unzip
```

The resulting file is named `data.csv`.

It contains this:

```csv
6/8/19,09,13,42,48,60,18,2
6/5/19,17,23,28,34,38,08,3
6/1/19,06,15,34,45,52,08,2
5/29/19,03,32,34,42,61,07,2
5/25/19,01,02,39,43,66,02,3
5/22/19,07,10,20,44,57,03,2
5/18/19,02,10,25,66,67,26,4
5/15/19,07,17,33,61,68,04,2
5/11/19,06,08,09,37,40,26,2
5/8/19,01,45,53,64,66,03,3
5/4/19,06,16,23,30,61,02,2
5/1/19,05,23,28,56,66,17,5
4/27/19,02,29,41,45,62,06,3
4/24/19,06,32,35,36,65,04,5
4/20/19,65,01,3
4/17/19,01,15,17,46,66,15,3
4/13/19,04,17,26,32,49,10,2
4/10/19,12,21,23,39,67,06,4
4/6/19,15,33,43,59,60,08,3
4/3/19,16,19,25,32,49,18,2
3/30/19,21,52,54,64,68,04,3
3/27/19,16,20,37,44,62,12,3
3/23/19,24,25,52,60,66,05,3
3/20/19,10,14,50,53,63,21,2
3/16/19,30,34,39,53,67,11,2
3/13/19,18,36,45,47,69,14,3
3/9/19,05,06,45,55,59,14,3
3/6/19,06,10,21,35,46,23,2
3/2/19,01,19,25,27,68,21,2
2/27/19,21,31,42,49,59,23,5
```

Nearly all the lines have 8 fields. One line does not.

## Program output

Your job is to read each line decoded as CSV. Then, average the first five columns beyond the date. Print each line's average along with its line number like so:

```text
$> python3 p2.py data.csv
1    Average: 34.400000
2    Average: 28.000000
3    Average: 30.400000
4    Average: 34.400000
5    Average: 30.200000
6    Average: 27.600000
7    Average: 34.000000
8    Average: 37.200000
9    Average: 20.000000
10   Average: 45.800000
11   Average: 27.200000
12   Average: 35.600000
13   Average: 35.800000
14   Average: 34.800000
15   Bad length - ignored
16   Average: 29.000000
17   Average: 25.600000
18   Average: 32.400000
19   Average: 42.000000
20   Average: 28.200000
21   Average: 51.800000
22   Average: 35.800000
23   Average: 45.400000
24   Average: 38.000000
25   Average: 44.600000
26   Average: 43.000000
27   Average: 34.000000
28   Average: 23.600000
29   Average: 28.000000
30   Average: 40.400000
```

Let's look at line 1 in detail:

```csv
6/8/19,09,13,42,48,60,18,2
```

The numbers to be averaged are 09, 13, 42, 48 and 60 - from columns 2 through 6. These are indexes 1 through 5 when counting from zero. These average to 34.4. So, output:

```text
1    Average: 34.400000
```

Line 15 of the input data has a problem - it is too short. Make sure you have code to detect and skip problems such as this.

## Partner rules

Work on this project by yourselves, together. In other words, do you own work but feel free to discuss with your colleagues.

## Due date

This project is due at 11:59 PM on October 8.
