# Your job is, at your table:
# - research the various Python 3 features found in this program
# - discuss the program
# - write documentation (comments, like this text) describing your understanding
#   of how this program works.

import webbrowser

for i in range(0, 16):
	print ("na", end="")

print (" Batman!")

response = input("Play the video? (yes or no): ")
if response == "yes":
	webbrowser.open_new_tab("https://www.youtube.com/watch?v=VSaDPc1Cs5U")
