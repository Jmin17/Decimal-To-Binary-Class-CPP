

#include "pch.h"
#include <iostream>
#include <memory>
#include <vector>
#include <string>
#include <sstream>
#include "BitConverter.h";

using namespace std;


int main()
{
	stringstream buffer;
	cout << endl<< "\t";
	int y = 0;
	string blank = "";
	BitConverter bc;

	while (blank != "end")
	{
		cin >> blank;

		if (blank != "end")
		{
			buffer.clear();
			buffer << blank;
			buffer >> y;
			bc.setDecimalValue(y);
			cout << endl << "\t" << bc.getBitString() << endl << endl;
		}
	}

	cout << "\n\n\n"; 
}

