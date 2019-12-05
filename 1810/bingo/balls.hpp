#pragma once
#include <vector>

class Balls {
	public:
		Balls();
		int DrawNext();
		static const int NUM_BALLS = 75;
		void Test();
		
	private:
		std::vector<int> balls;
		int next_ball;
};

