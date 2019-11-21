# Finding love with C++ sets

The C++ `map` sends a key to a value - each key leads you to some payload (the value). If you don't need a payload, there is another C++ container you can use: the `set`. Rather than mapping a key to a value, the `set` simply indicates the presence or absence of a key in the container.

## Project overview

In this project you will make three sets and find the intersection between them. These sets will indicate the interests of some lonely hearts seeking their soul mates. The interest groups (sets) are:

* Those who like long walks on the beach
* Those who like fine dining
* Those who like liver ice cream

Your program will read in a large list of last names and first names from two different files. Then, it will "create people" by selecting a random set of given and last names. These conjoined names serve as the key in each set.

## Seed the random number generator with zero

You are instructed to seed the random number generator with zero.

```c
srand(0);
```

## Sample output

### No input:

```text
(base) pk_sets_v2 $> ./a.out
Usage: [programname] lastnames firstnames
(base) pk_sets_v2 $> 
```

The same output is to be produced if only one file is given.

### Bad file names:

```text
(base) pk_sets_v2 $> ./a.out BAD1 fnames
file: BAD1 did not open
(base) pk_sets_v2 $> ./a.out lnames BAD2
file: BAD2 did not open
(base) pk_sets_v2 $> 
```

### Good input:

```text
pk_sets_v2 $> ./a.out lnames fnames 
There are: 416 people who like long walks on the beach.
There are: 398 people who like fine dining.
There are: 200 people who like liver ice cream.
People who may be good matches for each other:
                    Long Walks     Fine Dining    Liver Ice Cream
Alecia RAIBLE       X              X              X              
Annabela LONGPRE    X              X              X              
Rici ORSON          X              X              X              
Sorcha ZAMARRON     X              X              X              
Thomasin MECONI     X              X              X              
pk_sets_v2 $>
```

The last name file is in all uppercase. If you choose to properly capitalize last names, you'll be awarded two (2) points of extra credit.

The first column is set in 20 spaces. The next three are set in 15 spaces.

If a given person is in the given set, print an 'X'. If not, print '-'. You must actually check membership in the set, using `count()` for example.

## Creating the data

As indicated above, names come from two files.

Membership in the sets is derived according to these probabilities:

* There is a 20 percent chance a person likes long walks on the beach
* There is a 20 percent chance a person likes fine dining
* There is a 10 percent chance a person likes liver ice cream

There are to be 2000 people.

Note that each probability is an [independent random variable](https://www.statisticshowto.datasciencecentral.com/independent-random-variables/).

Note the probabilities given above and look at the number of people in each set. There is approximately 20 percent of 2000 in the first two sets and approximately 10 percent in the last. Correct!

## Computing the intersection of sets

There exists an optimized set intersection function in `algorithms`. You are **NOT** expected to use it. Instead you can use a brute force algorithm which is basically:

*For every person (all 2000) are they in all three sets?*

Of course you can use `&&` - you can also use nested `if` statements.

## Level of difficulty of this project

To scale your expectations, including blank lines and error checking, my implementation is 70 lines. As far as CS projects go, this one is not that long nor is it intellectually complex.

## Grading

As per usual - any warnings earns negative 10 points immediately. If I can make it crash there will be a 10 to 60 point reduction. Etc. Etc.

## And finally

A typical *match.com* woman's profile:

```text
I like fine dining and casual dining.
I like long walks on the beach and the city night life. Or staying at home.
I am comfortable at formal affairs in a gown and also like lounging around in jeans.
I am seeking someone who is honest, loyal, caring, intelligent and funny. 
Someone who enjoys conversation and silence.
Someone who really wants to be with me every minute but isn't clingy.
Looks are not important but you must be tan, tall (between 5'11 and a half and 6'), f
it (between 172.8 and 173.1 pounds), your own teeth, and have a goatee that comes to a point. 
Let us complete each other!
Must have own job.
```

A typical *match.com* man's profile:

```text
Me: I like football and beer. 

You: Must like football and beer.
```

And yet, there is someone for everyone. Ain't life sweet?
