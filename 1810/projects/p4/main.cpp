#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main(int argc, const char * argv[]) {
	string file_name;
	string s;
	ifstream file;
	
	cout << "Enter file name: ";
	getline(cin, file_name);
	file.open(file_name);
	if (file.is_open()) {
		for (int i = 0; i < 3; i++) {
			cout << "On open, tellg returns: " << file.tellg() << endl;
			getline(file,s);
			cout << "The first line says: " << s << endl;
			cout << "After reading one line, tellg returns: " << file.tellg() << endl;
			getline(file,s);
			cout << "The second line says: " << s << endl;
			cout << "After reading two lines, tellg returns: " << file.tellg() << endl;
			file.seekg(0, file.beg);
		}
	} else {
		cerr << "Could not open: " << file_name << endl;
	}
	return 0;
}
