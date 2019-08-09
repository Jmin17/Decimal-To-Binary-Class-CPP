

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
	unique_ptr<stringstream> buffer;
	//buffer = make_unique<stringstream>();

	long y = 0;
	string decimalString = "";
	BitConverter bc;

	while (decimalString != "end")
	{
		cout << endl << "\t";
		cin >> decimalString;

		if (decimalString != "end")
		{
			buffer = make_unique<stringstream>();
			*buffer << decimalString;
			*buffer >> y;
			bc.setDecimalValue(y);
			cout << endl << "\t" << bc.getBitString() << endl << endl;
			
		}
	}

	cout << "\n\n\n"; 
}

