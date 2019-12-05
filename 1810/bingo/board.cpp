#include <iostream>
#include <iomanip>
#include <curses.h>
#include <vector>
#include <exception>

#include "board.hpp"

using namespace std;

Board::Board() {
	vector<int> unshuffled_balls(BALLS_IN_COLUMN);
	for (int i = 0; i < BALLS_IN_COLUMN; i++) {
		unshuffled_balls[i] = i + 1;
	}

	for (size_t column = 0; column < BINGO.size(); column++) {
		vector<Cell> cells_in_column;
		vector<int> ball_candidates = unshuffled_balls;
		// Ummmm. This code is a functional duplicate of the
		// the shuffle code in balls.cpp - maybe make a function
		// out of this or use algorithm::shuffle.
		for (int i = 0; i < BALLS_IN_COLUMN; i++) {
			int r = rand() % BALLS_IN_COLUMN;
			int t = ball_candidates[r];
			ball_candidates[r] = ball_candidates[i];
			ball_candidates[i] = t;
		}
		for (int row = 0; row < CELLS_IN_COLUMN; row++) {
			cells_in_column.push_back(Cell(ball_candidates[row] + BALLS_IN_COLUMN * column, column, row, (column == FREE_COLUMN && row == FREE_ROW)));
		}
		cells.push_back(cells_in_column);
	}
}

bool Board::Check() {
	throw logic_error("Board checking not implemented yet");
}

void Board::Render(bool is_curses) {
	if (is_curses) {
		throw logic_error("Rendering boards in curses is not implemented yet");
	} else {
		for (size_t column = 0; column < BINGO.size(); column++) {
			cout << setw(4) << BINGO[column] << " ";
		}
		cout << endl;
		for (size_t row = 0; row < CELLS_IN_COLUMN; row++) {
			for (size_t column = 0; column < BINGO.size(); column++) {
				cells[column][row].Render(is_curses);
			}
			cout << endl;
		}
		cout << endl;
	}
}

