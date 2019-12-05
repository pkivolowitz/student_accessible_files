#include <iostream>
#include <iomanip>
#include <exception>

#include "cell.hpp"

using namespace std;

Cell::Cell(int value, int column, int row, bool is_freespace) {
	this->value = value;
	this->column = column;
	this->row = row;

	checked = is_freespace;
	text = to_string(value);
}

bool Cell::IsChecked() {
	return checked;
}

int Cell::Render(bool is_curses) {
	if (is_curses) {
		throw logic_error("Curses not yet implemented");
	} else {
		cout << setw(4) << value << (checked ? "*" : " ");
	}
	return value;
}
