import cv2
import sys
import curses
import io

#if len(sys.argv) < 2:
#	print('Must specify a movie file')
#	sys.exit(1)

grays = " .:-=+*#%@"
gray_levels = 255.0 / len(grays)

vc = cv2.VideoCapture('bs.mp4')

stdscr = curses.initscr()
curses.cbreak()
curses.noecho()
stdscr.nodelay(True)
rval , frame = vc.read()
new_size = (int(curses.COLS - 2), int(curses.LINES - 2))
while rval:
	key = stdscr.getch()
	if key >= 0 and chr(key) == 'q':
		break
	frame = cv2.cvtColor(frame, cv2.COLOR_RGB2GRAY)
	frame = cv2.resize(frame, new_size, interpolation=cv2.INTER_NEAREST)
	stdscr.erase()
	for line in range(0, new_size[1]):
		file_str = io.StringIO()
		for column in range(0, new_size[0]):
			original_value = frame[line, column]
			mapped_value = int(original_value / gray_levels)
			if mapped_value >= len(grays):
				mapped_value = len(grays) - 1
			file_str.write(grays[mapped_value])
		stdscr.move(line, 1)
		stdscr.addstr(file_str.getvalue())
	stdscr.box()
	stdscr.refresh()
	rval, frame = vc.read()

stdscr.erase()
stdscr.refresh()
curses.nocbreak()
curses.echo()
curses.endwin()



