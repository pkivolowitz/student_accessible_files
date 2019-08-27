#include <iostream>
#include <ctime>

using namespace std;

int main() {
	srand(uint32_t(time(nullptr)));
	int max_value = 100;
	int secret_number = (rand() % max_value) + 1;
	int counter = 0;
	int guess;

	while (true) {
		cout << "Enter a guess between 1 and 100: ";
		cin >> guess;
		counter++;
		if (guess > secret_number)
			cout << "Lower" << endl;
		else if (guess < secret_number)
			cout << "Higher" << endl;
		else {
			cout << "Right! You needed " << counter;
			cout << " tries to get it!" << endl;
			break;
		}
	}
	return 0;
}