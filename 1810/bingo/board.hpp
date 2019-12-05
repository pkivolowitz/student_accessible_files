#pragma once
#include <vector>
#include <string>
#include "cell.hpp"

class Board {
	public:
		Board();
		bool Check();
		void Render(bool is_curses = false);
	private:
		std::vector<std::vector<Cell>> cells;
		const std::string BINGO = "BINGO";
		const int BALLS_IN_COLUMN = 15;
		const int CELLS_IN_COLUMN = 5;
		const int FREE_COLUMN = 2;
		const int FREE_ROW = 2;
};
