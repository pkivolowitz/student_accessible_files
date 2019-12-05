#include <iostream>
#include <iomanip>

#include "balls.hpp"

using namespace std;

Balls::Balls() {
	balls.resize(NUM_BALLS);
	for (int i = 0; i < NUM_BALLS; i++) {
		balls.at(i) = i + 1;
	}
	// Could use algorithm::shuffle()
	for (int i = 0; i < NUM_BALLS; i++) {
		int r = rand() % NUM_BALLS;
		int t = balls[r];
		balls[r] = balls[i];
		balls[i] = t;
	}
	next_ball = 0;
}

int Balls::DrawNext() {
	return ((next_ball < NUM_BALLS) ? balls[next_ball++] : -1);
}

void Balls::Test() {
	int min = 999;
	int max = 0;
	for (int i = 0; i < NUM_BALLS; i++) {
		cout << "ball[" << setw(2) << i + 1 << "]: " << balls[i];
		cout << endl;
		if (min > balls[i]) {
			min = balls[i];
		}
		if (max < balls[i]) {
			max = balls[i];
		}
	}
	cout << "Min check: " << min << " should be 1: " << (min == 1) << endl;
	cout << "Max check: " << max << " should be 1: " << (max == NUM_BALLS) << endl;
	cout << "Draw check: " << DrawNext() << " should be: " << balls[0] << endl;
	cout << "Draw check: " << DrawNext() << " should be: " << balls[1] << endl;
	cout << "Draw check: " << DrawNext() << " should be: " << balls[2] << endl;
}
