#include <iostream>


using namespace std;


bool is_palindrome(char string1[])
{
	int length = strlen(string1);

	for (int i = 0; i < length; i++)
	{
		if (string1[i] != string1[length - i - 1]) 
			return false;	
	}

	return true;
}




int main()
{
	char string1[30];
	
	cout << "Enter a string to check if it's a palindrome: ";
	cin >> string1;

	cout << string1 << " is a palindrome: " << (is_palindrome(string1) ? "True" : "False") << endl;

}