#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

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




int main()
{
	int rows;
	int columns;

	srand(time(0));  // Initialize random number generator. 
	

	cout << "Enter number of rows in your array: ";
	cin >> rows;

	cout << "Enter number of columns in your array: ";
	cin >> columns;
	
	//Create the 2D array
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