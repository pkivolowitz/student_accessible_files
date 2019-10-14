# Your job is, at your table:
# - research the various Python 3 features found in this program
# - discuss the program
# - write documentation (comments, like this text) describing your understanding
#   of how this program works.

import os
import sys

starting_dir = '.'

if (len(sys.argv) > 1):
	starting_dir = sys.argv[1]

# The first argument must in fact, be a directory. Exit if it isn't.
if not os.path.isdir(starting_dir):
	error_string = starting_dir + ' is not a directory or cannot be found'
	sys.exit(error_string)

for root, d, f in os.walk(starting_dir):
	for file in f:
		print(file)
