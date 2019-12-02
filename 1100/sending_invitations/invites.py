import csv
import sys
from string import Template

if len(sys.argv) < 3:
	print('Need to specify a file containing the guest\'s info and a template file')
	sys.exit(1)

try:
	guest_file = open(sys.argv[1])
except FileNotFoundError as ex:
	print('Could not open guest file:', ex.filename)
	sys.exit(1)

try:
	template_file = open(sys.argv[2])
except FileNotFoundError as ex:
	print('Could not open template file:', ex.filename)
	sys.exit(1)

reader = csv.reader(guest_file)
template = Template(template_file.read())

for line in reader:
	text = template.substitute(fname=line[0], lname=line[1], show=line[2])
	print(text)
	inp = input('Hit enter to proceed to next (\'q\' to exit): ')
	if inp == 'q':
		break

guest_file.close()
template_file.close()


