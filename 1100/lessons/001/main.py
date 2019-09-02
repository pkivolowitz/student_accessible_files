# Your job is, at your table:
# - research the various Python 3 features found in this program
# - discuss the program
# - write documentation (comments, like this text) describing your understanding
#   of how this program works.

first_name = input ("First name: ")
last_name = input ("Last name:  ")
total_letters = len(first_name) + len(last_name)

print ()
print ("Your first name has %d letters" % len(first_name))
print ("Your last name has %d letters" % len(last_name))
print ("All together that makes %d letters" % total_letters)

if total_letters > 10:
	print ("That's a lot of letters")
else:
	print ("That's not too long to have to write all the time")

print ()
print ("Sometimes your name is written like this: " + first_name + " " + last_name)
print ("Sometimes like this: " + last_name + ", " + first_name)
