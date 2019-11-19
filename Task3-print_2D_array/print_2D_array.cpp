#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void array_rows_cols(int **arr, int rows, int columns)
{
	int colsum = 0, rowsum = 0;
	
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			cout << arr[i][j] << " ";
			rowsum = rowsum + arr[i][j];
			colsum = colsum + arr[j][i];
			
		}
		cout << rowsum;
		cout << endl;
		
		rowsum = 0;
		colsum = 0;
	
	}
	
	
		
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