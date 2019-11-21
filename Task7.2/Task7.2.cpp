// Task7.2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>
#include "lab2lib.h"


using namespace std;

int main()
{
	char choise;

	while (true)
	{
		cout << "Menu:" << endl;
		cout << "1: Task 1" << endl << "2: Task 2" << endl << "3: Task 3" << endl;
		cout << "4: Task 4" << endl << "5: Task 5" << endl << "6: Task 6" << endl;
		cout << "0: Exit" << endl;
		cout << "Which task would you like to run?: ";
		cin >> choise;
		cout << endl;

		switch (choise)
		{
			case '1':
			{
				task1();
				cout << endl;
				break;
			}

			case '2':
			{
				task2();
				cout << endl;
				break;

			}

			case '3':
			{
				task3();
				cout << endl;
				break;

			}

			case '4':
			{
				task4();
				cout << endl;
				break;
			}

			case '5':
			{
				task5();
				cout << endl;
				break;
			}

			case '6':
			{
				vector_database();
				cout << endl;
				break;
			}

			case '0':
			{
				
				cout << "Goodbye!" << endl;
				return 0;
			}

			default:
			{
				cout << "Sorry, there is no such task! " << endl;
				cout << endl;
				break;
			}
		}


	}

	
}

