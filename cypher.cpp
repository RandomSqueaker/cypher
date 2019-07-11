// cypher.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include "pch.h"
#include <iostream>
#include "functions.h"
#include <fstream>
#include "translator.h"
using namespace std;

bool run(bool enigmaenabled) {
	Break();
	bool enigmaEnabled = enigmaenabled;
	cout << "do you want to encrypt or decrypt? (encrypt/decrypt/close/enigma)" << endl;

	//encrypt is 2 decrypt is 1
	int var = 0;
	while (var == 0 || var == 3) {
		var = firstquestion(enigmaEnabled);
		if (var == 3) {
			enigmaEnabled = !enigmaEnabled;
			var = 0;
		}
	}

	int key = -1;
	while (key == -1)
	{
		key = secondquestion();
	}

	Break();
	switch (var)
	{
	case 1:
		cout << "enter text to decrypt" << endl;
		break;
	case 2:
		cout << "enter text to encrypt" << endl;
		break;
	}

	string text;
	cin >> text;

	string translation;
	int counter = 0;
	int i = 0;
	string trans1;
	string trans2;
	Break();
	int enigmaPos = 0;
	switch (var)
	{
	case 2:
		//first text
		cout << "encrypting..." << endl;
		cout << text << " (1/4)" << endl;
		//2nd, 3rd and 4th text
		while (text[i] != '\0')
		{
			++i;
		}
		while (counter < i)
		{
			int character = translateltn(text[counter], 0, enigmaEnabled, 0);
			trans1 += std::to_string(character);
			character = translateltn(text[counter], key, enigmaEnabled, enigmaPos);
			trans2 += std::to_string(character);
			character = translateltn(text[counter], key, enigmaEnabled, enigmaPos);
			char Character = translatentl(character);
			translation += Character;
			enigmaPos++;
			counter++;
		}
		cout << trans1 << " (2/4)" << endl;
		cout << trans2 << " (3/4)" << endl;
		cout << translation << " (4/4)" << endl;
		Break();
		cout << "encrypted text:" << endl;
		cout << translation << endl;
		break;



	case 1:
		//first text
		cout << "decrypting..." << endl;
		cout << text << " (1/4)" << endl;
		//2nd, 3rd and 4th text
		while (text[i] != '\0')
		{
			++i;
		}
		while (counter < i)
		{
			int character = translateltn(text[counter], 0, enigmaEnabled, 0);
			trans1 += std::to_string(character);
			character = translateltn(text[counter], -key, enigmaEnabled, -enigmaPos);
			trans2 += std::to_string(character);
			character = translateltn(text[counter], -key, enigmaEnabled, -enigmaPos);
			char Character = translatentl(character);
			translation += Character;
			enigmaPos++;
			counter++;
		}
		cout << trans1 << " (2/4)" << endl;
		cout << trans2 << " (3/4)" << endl;
		cout << translation << " (4/4)" << endl;
		Break();
		cout << "decrypted text:" << endl;
		cout << translation << endl;
		break;
	}
	if (enigmaEnabled == true) {
		return true;
	}
	else {
		return false;
	}
}


int main()
{
	bool enigmaEnabled = false;
	cout << R"( __      __  ||___   ___      __|__ __|__)" << endl;
	cout << R"(//  \\//||_| | ___| ||_|| ||//  |     |)" << endl;
	cout << R"(||   || ||   ||  || ||_   | /)"<< endl;
	cout << R"(\\_  || ||   ||  || |__|  ||)" << endl;
	cout << "licensed under CC-BY, created by Francis Porter 2019" << endl;
	while(true) {
		enigmaEnabled = run(enigmaEnabled);
	}
	return 0;
}
