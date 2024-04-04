#include <iostream>
#include <string>

using namespace std;

bool is_palindrome(string input_string) {
	size_t str_len = input_string.length() - 1;

	string new_string;
	string reverse_string;

	for (size_t i = (str_len); i <= (str_len); i--) {
		char letter = tolower(input_string[i]);
		if (letter != ' ' and isalpha(letter))
		{
			new_string += letter;
			reverse_string = letter + reverse_string;
		}
	}

	return new_string == reverse_string;

}


int main()
{
	string str_input;
	cout << "Enter your string: ";
	getline(cin, str_input);
	cout << str_input + " " << (is_palindrome(str_input) ? "is a palindrome" : "is not a palindrome");
	return 0;
}