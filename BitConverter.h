#pragma once

#include <string>
using namespace std;


class BitConverter
{
public:
	BitConverter();
	BitConverter(int inputDecimal);

	const string &getBitString();
	const string &getBitString(int newDecimalValue)
	{
		decimalValue = newDecimalValue; 
		return getBitString();
	}

	const int &setDecimalValue(const int &);

private:
	int decimalValue;
	string bitString;
	bool isNegative;

	void addOne();
	void performTwosComplement();
	void makeFancy();
	bool checkIsNegative();
};
