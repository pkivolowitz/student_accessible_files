# Your job is, at your table:
# - research the various Python 3 features found in this program
# - discuss the program
# - write documentation (comments, like this text) describing your understanding
#   of how this program works.


from random import seed, randint

seed()

for i in range(1, 11):
	die_value = randint(1, 10)
	if die_value == 5:
		print ("The ten sided die came up with 5 - breaking the loop when the loop index was: %d" % i)
		break
	elif die_value == 6:
		print ("The ten sided die came up with 6 - we're skipping loop index %d using a continue statement" % i)
		continue
	print ("For loop index: %d nothing special happened" % i)

