#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <string>


using namespace std;



//Task 1
bool is_sorted(int arr[])
{

	for (int i = 0; i < 4; i++)
	{
		if (arr[i] > arr[i + 1])
			return false;
	}

	return true;
}

void task1()
{
	int arr[5];

	for (int i = 0; i < 5; i++)
	{
		cout << "Enter a number you want in your 5 length array: ";
		cin >> arr[i];
	}

	cout << arr[0] << " " << arr[1] << " " << arr[2] << " " << arr[3] << " " << arr[4] << " " << endl; //Just a visual check

	cout << (is_sorted(arr) ? "True" : "False") << endl;
}





// Task 2 //
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


void task2() // former int main function in original task 2
{
	char string1[30];

	cout << "Enter a string to check if it's a palindrome: ";
	cin >> string1;

	cout << string1 << " is a palindrome: " << (is_palindrome(string1) ? "True" : "False") << endl;

}







// Task 3 //
void array_rows_cols(int **arr, int rows, int columns)
{
	int colsum = 0, rowsum = 0, total = 0;


	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			cout << arr[i][j] << "\t";
			rowsum = rowsum + arr[i][j];
		}

		total = total + rowsum;
		cout << rowsum << endl;
		rowsum = 0;
	}


	for (int j = 0; j < columns; j++)
	{
		for (int i = 0; i < rows; i++)
		{
			colsum = colsum + arr[i][j];
		}

		total = total + colsum;
		cout << colsum << "\t";
		colsum = 0;

	}
	cout << total << endl;
}




void task3()
{
	int rows;
	int columns;

	srand(time(0));  // Initialize random number generator. 


	cout << "Enter number of rows in your array: ";
	cin >> rows;

	cout << "Enter number of columns in your array: ";
	cin >> columns;

	//Create the 2D array with dynamic memory
	int **arr = new int*[rows];
	for (int i = 0; i < rows; i++)
	{
		arr[i] = new int[columns];
	}

	//insert random numbers
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
			arr[i][j] = (rand() % 9) + 1;
	}

	//call array function
	array_rows_cols(arr, rows, columns);


	//Delete for not leaking memory
	for (int i = 0; i < rows; i++)
	{
		delete[] arr[i];
	}
	delete[] arr;
}




// Task 4 //
void swap_sort(int &a, int &b, int &c, bool order)
{
	//Sort in ascending order
	if (order == 1)
	{
		if (a > b)
		{
			int temp = a;
			a = b;
			b = temp;
		}

		if (a > c)
		{
			int temp = a;
			a = c;
			c = temp;
		}

		if (b > c)
		{
			int temp = b;
			b = c;
			c = temp;
		}

	}


	//Sort in descending order
	if (order == 0)
	{
		if (a < b)
		{
			int temp = a;
			a = b;
			b = temp;
		}

		if (a < c)
		{
			int temp = a;
			a = c;
			c = temp;
		}

		if (b < c)
		{
			int temp = b;
			b = c;
			c = temp;
		}

	}

}




void task4()
{
	int a, b, c;
	bool order;

	//run till 0 is given in a
	while (true)
	{
		cout << "Give a (0 to quit): ";
		cin >> a;
		if (a == 0)
		{
			cout << "Bye bye!" << endl;
			break;
		}
		cout << "Give b: ";
		cin >> b;

		cout << "Give c: ";
		cin >> c;

		cout << "Sort ascending/descending(1/0): ";
		cin >> order;

		//call function
		swap_sort(a, b, c, order);

		cout << "Result: " << a << ", " << b << ", " << c << endl;
		cout << endl;
	}

}






// Task 5 //
void shrink_array(int arr[], int n)
{

	//sum the adjacent integers, place a 0 in between
	for (int i = 0; i < n - 1; i = i + 2)
	{
		arr[i] = arr[i] + arr[i + 1];
		arr[i + 1] = 0;

	}

	//rearrange so the 0s comes last
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 0; j < n - 1; j++)
		{
			if (arr[j] == 0)
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}

}





void task5()
{

	int arr[] = { 5,5,7,6,2,2,11,11,5,4 };
	int n = sizeof(arr) / sizeof(int);

	//print array before
	cout << "input array: ";
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << ", ";
	}
	cout << endl;

	//Call function
	shrink_array(arr, n);

	//print array after "shrinkage"
	cout << "output array: ";
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << ", ";
	}
	cout << endl;

}



// Task 6 //
void vector_database()
{
	char choise;
	vector<string> v;


	while (true)
	{
		//Menu
		cout << "MENU:" << endl;
		cout << "1. Initialise database" << endl << "2. Insert" << endl << "3. Search" << endl;
		cout << "4. Delete" << endl << "5. Print" << endl << "6. Quit" << endl << endl;
		cout << "Make your choise: ";
		cin >> choise;
		cout << endl;


		switch (choise)
		{

		case '1': //clears the vector
		{
			string str;
			cout << "Are you sure?(yes/no): ";
			cin >> str;

			if (str == "yes" || str == "Yes")
			{
				v.clear();
				cout << "Vector initialised" << endl;
				cout << endl;
				break;
			}
			cout << "Vector NOT initialised" << endl;
			cout << endl;
			break;

		}

		case '2': //insert names in the vector
		{
			string str;
			while (str != "Q" && str != "q")
			{
				cout << "Insert a name (Q to quit): ";
				cin >> str;

				if (str != "Q" && str != "q")
				{
					v.push_back(str);
				}

			}
			cout << endl;
			break;
		}

		case '3': //search the vector for names beginning with
		{
			string str;
			cout << "What name do you want to search?: ";
			cin >> str;
			int len = str.length();

			for (int i = 0; i < v.size(); i++)
			{
				if (str == v[i].substr(0, len))
				{
					cout << v[i] << endl;
				}
			}
			cout << endl;
			break;
		}

		case '4': //delete single names
		{
			string str;
			cout << "What name do you want to delete?: ";
			cin >> str;

			for (int i = 0; i < v.size(); i++)
			{
				if (v[i] == str)
				{
					v.erase(v.begin() + i);
					break;
				}

			}
			cout << endl;
			break;
		}

		case '5': //prints the names in the vector
		{
			for (int i = 0; i < v.size(); i++)
			{
				cout << v[i] << endl;
			}
			cout << endl;
			break;
		}

		case '6': //ends program
		{
			cout << "Goodbye!" << endl;
			goto exit_loop;
		}

		default:
			cout << "Not allowed, choose a number 1-6" << endl;
		}

	}

exit_loop:;


}


