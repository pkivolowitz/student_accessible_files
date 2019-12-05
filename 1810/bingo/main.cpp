#include <iostream>
#include <vector>
#include <ctime>
#include <curses.h>

#include "balls.hpp"
#include "board.hpp"

using namespace std;

int main() {
	srand((unsigned int) time(nullptr));

	Balls balls;
	Board board;

	balls.Test();
	board.Render();
	return 0;
}

