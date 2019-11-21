#include <iostream>
#include<vector>
#include <string>

using namespace std;





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
					if (str == v[i].substr(0,len))
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



int main()
{
	
	vector_database();

}