#pragma once
#include "pch.h"
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int Break()
{
	cout << "" << endl;
	return 0;
}

int firstquestion()
{
	string input;
	cin >> input;

	if (input == "encrypt")
	{
		Break();
		cout << "enter a one number key to encrypt with" << endl;
		return 2;
	}
	if (input == "decrypt")
	{
		Break();
		cout << "enter a one number key to decrypt with" << endl;
		return 1;
	}
	if (input == "close")
	{
		Break();
		cout << "closing program..." << endl;
		exit(EXIT_SUCCESS);
	}
	if (input != "encrypt" || "decrypt" || "close")
	{
		cout << "invalid input, try again" << endl;
		return 0;
	}
	return 0;
}

int secondquestion()
{
	string input;
	cin >> input;
	int i = 0;
	int number = 0;
	while (input[i] != '\0')
	{
		i++;
	}
	if (i > 1)
	{
		cout << "invalid input. enter one number between 1 and 9" << endl;
		return -1;
	}
	else {
		switch (input[0])
		{
		case '0':
			number = 0;
			break;
		case '1':
			number = 1;
			break;
		case '2':
			number = 2;
			break;
		case '3':
			number = 3;
			break;
		case '4':
			number = 4;
			break;
		case '5':
			number = 5;
			break;
		case '6':
			number = 6;
			break;
		case '7':
			number = 7;
			break;
		case '8':
			number = 8;
			break;
		case '9':
			number = 9;
			break;
		default:
			cout << "invalid input. enter one number between 1 and 9" << endl;
			return -1;
			break;
		}
		return number;
	}
}
