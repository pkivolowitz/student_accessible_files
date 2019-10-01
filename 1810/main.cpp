#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>

/*	Fun page: https://www.grammarly.com/blog/16-surprisingly-funny-palindromes/
*/

using namespace std;

/*	Method1() - this function returns true or false depending upon whether
	or not the provided string is a palindrome. It does this by checking
	each character against the character in the reflected position.

	Parameters:
	string		The string to check

	Return Values:
	bool		True if provided string is a palindrome.
*/

bool Method1(string s) {
	bool result = true;
	size_t s_length = s.length();
	for (size_t i = 0; i < s_length; i++) {
		if (s[i] != s[s_length - 1 - i]) {
			result = false;
			break;
		}
	}
	return result;
}

/*	Method2() - this function returns true or false depending upon whether
	or not the provided string is a palindrome. It does this by checking
	each character against the character in the reflected position.

	This function differs from Method1() in that it is slightly faster
	because only half the string is checked since continuing beyond half
	way is simply repeating work.

	Parameters:
	string		The string to check

	Return Values:
	bool		True if provided string is a palindrome.
*/

bool Method2(string s) {
	bool result = true;
	size_t s_length = s.length();
	for (size_t i = 0; i < s_length / 2; i++) {
		if (s[i] != s[s_length - 1 - i]) {
			result = false;
			break;
		}
	}
	return result;
}

/*	Method3() - this function returns true or false depending upon whether
	or not the provided string is a palindrome. It does this reversing the
	string and then checking to see if the reversed string is equal to the
	original string.

	Note that while this seems "more efficient" because it is shorter, it
	is hiding the cost of the string reversal.

	reverse() comes from <algorithm> and takes two parameters. These are
	expressed in "iterator" form. The reversal is in place.

	Parameters:
	string		The string to check

	Return Values:
	bool		True if provided string is a palindrome.
*/

bool Method3(string s) {
	string other_s = s;
	reverse(other_s.begin(), other_s.end());
	return s == other_s;
}

/*	Method4() - this function returns true or false depending upon whether
	or not the provided string is a palindrome. It does this by calling 
	Method2() after building a copy of the provided string that includes 
	only alphanumeric characters (for example, no spaces) so that whole
	sentences can be input. Also, upper and lower case will be considered
	to be the same by virtue of the use of tolower().

	This demonstrates one manifestation of abstraction... in this case we
	are "wrapping" Method2() within Method4(). We are in essence reducing
	the problem to a problem we've already solved and making use of the
	previous solution with the addition of the new features provided by
	Method4() itself.

	Parameters:
	string		The string to check

	Return Values:
	bool		True if provided string is a palindrome.
*/

bool Method4(string s) {
	string new_s;
	for (size_t letter_index = 0; letter_index < s.length(); letter_index++) {
		if (isalnum(s[letter_index])) {
			new_s.push_back(tolower(s[letter_index]));
		}
	}
	return Method2(new_s);
}

/*	enum's are like small integers. They are syntactic sugar provided a type
	safe way of specifying a specific range of values.
*/

int main() {
	string s;
	char choice;
	bool good_choice = true;

	cout << "Enter string to check: ";
	if (getline(cin, s)) {
		cout << "Enter the digits 1 through 4 to select method used: ";
		cin >> choice;

		bool result = false;

		// In CSC 1820, you will learn how to make this MUCH shorter.

		if (choice == '1') {
			result = Method1(s);
		} else if (choice == '2') {
			result = Method2(s);
		} else if (choice == '3') {
			result = Method3(s);
		} else if (choice == '4') {
			result = Method4(s);
		} else {
			cout << "Bad choice" << endl;
			good_choice = false;
		}

		// A question to ponder - why did I add the extra code involving "good_choice"?

		if (good_choice) {
			string is_palindrome = "a palindrome";
			cout << "String: " << s << " is ";
			if (!result) {
				is_palindrome = "not a palindrome";
			}
			cout << is_palindrome << endl;
		}
	}
	return 0;
}
