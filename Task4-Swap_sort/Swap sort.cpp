#include <iostream>


using namespace std;




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




int main()
{
	int a, b, c;
	bool order;

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

		swap_sort(a, b, c, order);

		cout << "Result: " << a <<  ", " << b << ", " << c << endl;
		cout << endl;
	}

}