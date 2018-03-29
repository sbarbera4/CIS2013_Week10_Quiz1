#include <iostream>
#include <cstring>
#include <string>
using namespace std;

int main()
{
	int Bcount = 0;
	string test = " ";
	
	cout << "enter your statement" << endl;


	getline(cin, test, '\n');


	for (int i = 0; i < test.length(); i++)
	{
		if (test[i] == 'b')
		{
			Bcount++;
			if (Bcount % 2 == 1)
			{
				cout << "SIT";

			}

			else
			{
				cout << "STAND";

			}
		}
		else
		{
			cout << test[i];
		}
	}



}