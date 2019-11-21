#include <iostream>


using namespace std;


void shrink_array(int arr[],int n)
{
	
	//sum the adjacent integers, place a 0 in between
	for (int i = 0; i < n-1; i=i+2)
	{
		arr[i] = arr[i] + arr[i + 1];
		arr[i + 1] = 0;
		
	}

	//rearrange so the 0s comes last
	for (int i = 0; i < n-1; i++)
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





int main()
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
	shrink_array(arr,n);

	//print array after "shrinkage"
	cout << "output array: ";
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << ", ";
	}
	cout << endl;

}