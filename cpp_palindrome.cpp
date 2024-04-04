#include <iostream>
#include <string>

using namespace std;

bool is_palindrome(string input_string) {
	size_t str_index = input_string.length();  

	// will concatenate the element to these variables in each iteration. 
	string new_string;
	string reverse_string;

	for (size_t i = (str_index); i > 0 ; i--) { //  used a decrement here as I will be pointing the last element first and move backwards 
		char letter = tolower(input_string[i-1]); // initialize a variable letter to store the element, but we must convert the  element to lowercase as it might return false if we keep its true capitalization. 
		if (letter != ' ' and isalpha(letter)) // check if the element is a space and an alphanumeric. We need to exclude punctuation and spaces
		{
			
			new_string += letter; 
			reverse_string = letter + reverse_string; 
		}
	}
	return new_string == reverse_string; //  compare the new_string and reverse_string
}

int main()
{
	string str_input;
	cout << "Enter your string: ";
	getline(cin, str_input);
	cout << str_input + " " << (is_palindrome(str_input) ? "is a palindrome" : "is not a palindrome");
	return 0;
}
