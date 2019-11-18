#include <iostream>

using namespace std;

bool is_sorted(int arr[])
{
	
	for (int i = 0; i < 4; i++)
	{
		if (arr[i] > arr[i + 1])
			return false;
	}

	return true;
}

int main()
{
	int arr[5];

	for (int i = 0; i < 5; i++)
	{
		cout << "Enter a number you want in your 5 length array: " << endl;
		cin >> arr[i];
	}

	cout << arr[0] << " " << arr[1] << " " << arr[2] << " " << arr[3] << " " << arr[4] << " " << endl; //Just a visual check

	cout << (is_sorted(arr) ? "True" : "False") << endl;
}