/*	Perry Kivolowitz
	CSC 1810 - Fall 2019
	Partner: Hector the Horrible
*/

#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <iomanip>

#include "simple_csv.hpp"

using namespace std;

/*	Capitalize() - This function smashes all letters past the first one to lower case.
	The first letter is forced to upper case. Notice the check to ensure there are 
	characters to work on.

	Parameters:
	s					A REFERENCE to the string to process

	Returns:
	string				The same string permitting calling flexibility.
*/

string Capitalize(string & s) {
	if (s.size() > 0) {
		for (size_t i = 0; i < s.size(); i++) {
			s[i] = tolower(s[i]);
		}
		s[0] = toupper(s[0]);
	}
	return s;
}

/*	LoadNames() - this combines the special requirements of loading the last name and first name files
	into a single function. Notice how each parameter tunes the operation of the function to match the
	needs of one file or the other.

	Parameters:
	file_name			The name of the file to open - coming from argv[], this must be converted to string.
	names				A REFERENCE to a vector of string to contain the names read from the file.
	column_wanted		The desired column - 3 for first names and 0 for last names, for example
	number_of_columns	The file's expected column count for error checking
	end_of_line			surnames needs '\r' but fnames needs '\n' as line endings

	Returns:
	bool				True if there are no errors.
*/
bool LoadNames(string file_name, vector<string> & names, int column_wanted, int number_of_columns, char end_of_line) {
	bool retval = true;
	ifstream file(file_name);
	if (!file.is_open()) {
		cerr << file_name << " failed to open\n";
		retval = false;
	} else {
		string line;
		getline(file, line, end_of_line);
		while (getline(file, line, end_of_line)) {
			vector<string> tokens = SimpleSplit(line, ',', SS_TRIM | SS_NOQUOTES);
			if (tokens.size() != number_of_columns) {
				continue;
			}
			names.push_back(Capitalize(tokens[column_wanted]));
		}
		file.close();
	}
	cout << "Size of vector built from: " << file_name << " is " << names.size() << endl;
	return retval;
}

int main(int argc, const char * argv[]) {
	int retval = 0;

	if (argc < 3) {
		cerr << "Must provide lastname and firstname input files (in  that  order).\n";
		cerr << "Output is to standard output UNLESS a third filename is specified.\n";
		cerr << "If a third filename is given, it is overwritten with the output.\n";
		cerr << "Example: " << argv[0] << " surnames.csv fname.csv" << endl;
		cerr << "or: " << argv[0] << " surnames.csv fname.csv data.csv" << endl;
		retval = 1;
	} else {
		vector<string> fnames;
		vector<string> lnames;
		if (!LoadNames(string(argv[1]), lnames, 0, 11, '\r') || !LoadNames(string(argv[2]), fnames, 3, 6, '\n')) {
			retval = 1;
		} else {
			/*	If a third command line argument is given, it is used as the name of the output file.
				This involves some trickery to  allow the same output lines to use EITHER cout or the
				output file. You do NOT need to fully grok this but if you are motivated to look into
				this, I'll be mighty impressed.
			*/
			ofstream output_file;
			if (argc == 4) {
				output_file.open(argv[3]);
				if (!output_file.is_open()) {
					cerr << "Failed to open output file: " << argv[3] << endl;
					retval = 1;
				}
			}
			ostream & output = (output_file.is_open() ? output_file : cout);
			for (int i = 0; i < 500; i++) {
				output << lnames[rand() % lnames.size()] << "," << fnames[rand() % fnames.size()] << ",";
				output << setw(8) << setfill('0') << rand() % 65536 << setfill(' ') << ",";
				output << (rand() % 4) + 18 << ",";
				for (int j = 0; j < 8; j++) {
					int p = rand() % 1000;
					if (p > 950) {
						output << rand() % 70;
					} else {
						output << rand() % 31 + 70;
					}
					if (j != 7) {
						output << ",";
					}
				}
				output << endl;
			}
			if (output_file.is_open()) {
				output_file.close();
			}
		}
	}
	return retval;
}