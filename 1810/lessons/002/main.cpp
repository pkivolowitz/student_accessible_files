/*
CSC 1110 - Fall 2015
Perry Kivolowitz
Carthage College

Fun with IF and logical operators.
*/

#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
	int age_1, age_2;

	cout << "Enter two ages with a space inbetween: ";
	cin >> age_1 >> age_2;

	if (age_1 >= 16 && age_2 >= 16)
		cout << "Both can drive." << endl;

	if (age_1 >= 21 || age_2 >= 21)
		cout << "At least one can rent a car." << endl;

	if ((age_1 >= 25 && age_2 < 25) || (age_1 < 25 && age_2 >= 25))
		cout << "One can be a senator." << endl;

	if (age_1 < 35 && age_2 < 35)
		cout << "Neither can be President." << endl;
	return 0;
}
