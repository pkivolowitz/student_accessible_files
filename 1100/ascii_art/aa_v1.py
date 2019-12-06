import cv2
import sys

def ProcessImage(file_name):
	desired_width = 132
	img = cv2.imread(file_name)
	if img is None:
		print('Could not open', file_name, 'as an image')
		sys.exit(1)
	height, width, depth = img.shape
	new_size = (int(desired_width), int(width / height * desired_width))
	img = cv2.resize(img, new_size, interpolation=cv2.INTER_AREA)
	img = cv2.cvtColor(img, cv2.COLOR_RGB2GRAY)
	return img


if len(sys.argv) < 2:
	print('Must specify a jpg file')
	sys.exit(1)

grays = " .:-=+*#%@"
gray_levels = 255.0 / len(grays)

img = ProcessImage(sys.argv[1])
height, width = img.shape

for line in range(0, height):
	for column in range(0, width):
		original_value = img[line, column]
		mapped_value = int(original_value / gray_levels)
		print('%c' % grays[mapped_value], end='')
	print()

sys.exit(0)