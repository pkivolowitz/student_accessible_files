# Sending Invitations

It's Johnny and Janie's birthday (they're twins!) and they want actors to come to their party. The naive little tikes think that just by asking, these mercenaries might come. How cute. Be that as it may, they have set up a template invitation and made a list of invitees.

Wise beyond their years, Johnny and Janie formatted their data as Comma Separated Values (CSV) like so:

```csv
Christian,Bale,"Vice"
Bradley,Cooper,"A Star Is Born"
Willem,Dafoe,"At Eternity's Gate"
Rami,Malek,"Bohemian Rhapsody"
Viggo,Mortensen,"Green Book"
Yalitza,Aparicio,"Roma"
Glenn,Close,"The Wife"
Olivia,Colman,"The Favourite"
Lady,Gaga,"A Star Is Born"
Melissa,McCarthy,"Can You Ever Forgive Me?"
```

and their invitation is formatted with placeholders where they will insert the values from their data file like so:

```text
Dear $fname $lname,

We saw your performance in "$show" and thought you were ok.

Would you like to come to our birthday party?

We are having cake and ice cream so please come, $fname, OK?

Thanks,

Johnny and Janie Jones (we're twins!)
```

Using some good programming techniques, they have written a program to merge the two files together. After outputting the results of each merge, the program pauses for user input. The idea is that while the program is waiting, Johnny and Janie can copy the most recently output text for an email to the invitee. Johnny and Janie look forward to their next CS class where they can learn how to send the email directly but for now, this is the best they can do.

## Packages to import

```python
import csv
import sys
from string import Template
```

Our friend `csv` will do all the hard work in parsing our csv file. `sys` will give us access to command line arguments (letting us specify the file names) among other things and `Template` will do the hard work of the merge.

## Program usage

This program must be run from the command line like so:

```text
python3 invites.py guestfile.csv templatefile
```

where `guestfile.csv` is the name of your file that holds the invitee information and templatefile contains the template.

As such, you will have to check `sys.argv` to make sure it is large enough. If it isn't you must print an error and exit.

## Safely attempting to open files

Here's a new concept: a `try / except` block. The errors you have experienced that cause Python programs to abort are implemented as `exceptions`. It turns out you can handle exceptions yourself (and not crash) with a little planning.

Here is an example:

```python
try:
    guest_file = open(sys.argv[1])
except FileNotFoundError as ex:
    print('Could not open guest file:', ex.filename)
    sys.exit(1)
```

Inside the `try` block, place the code that might cause the error. In this case, if there is a problem opening the given file (it doesn't exist for example) a `FileNotFoundError` exception could be *thrown*.

If that happens, the `except` block will handle the error.

The general lessons here is that some errors can be anticipated and handled if crashing is not preferable. There are circumstances there you might want to generate your own exception on purpose as a means of controlling program flow. This is outside the scope of this class though.

## Initializing the CSV `reader`

After you know for sure you have opened the guest file, wrap it in a csv `reader` as you have done in the past.

