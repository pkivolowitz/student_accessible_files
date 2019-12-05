#pragma once
#include <string>

class Cell {
	public:
		Cell(int value, int column, int row, bool is_freespace = false);
		bool IsChecked();
		int Render(bool is_curses = false);

	private:
		int value;
		std::string text;
		int column, row;
		bool checked;
};

	