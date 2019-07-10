// cypher.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include "pch.h"
#include <iostream>
#include "functions.h"
#include <fstream>
#include "translator.h"
using namespace std;

int run() {
	Break();
	cout << "do you want to encrypt or decrypt? (encrypt/decrypt/close)" << endl;

	//encrypt is 2 decrypt is 1
	int var = 0;
	while (var == 0) {
		var = firstquestion();
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
	Break();
	switch (var)
	{
	case 2:
		//first text
		cout << "encrypting..." << endl;
		cout << text << " (1/4)" << endl;
		//2nd text
		while (text[i] != '\0')
		{
			++i;
		}
		while (counter < i)
		{
			int character = translateltn(text[counter], 0);
			trans1 += std::to_string(character);
			counter++;
		}
		cout << trans1 << " (2/4)" << endl;
		//3rd text
		counter = 0;
		trans1 = "";
		while (counter < i)
		{
			int character = translateltn(text[counter], key);
			trans1 += std::to_string(character);
			counter++;
		}
		cout << trans1 << " (3/4)" << endl;
		//4th and final text
		counter = 0;
		translation = "";
		while (counter < i)
		{
			int character = translateltn(text[counter], key);
			char Character = translatentl(character);
			translation += Character;
			counter++;
		}
		cout << translation << " (4/4)" << endl;
		Break();
		cout << "encrypted text:" << endl;
		cout << translation << endl;
		break;



	case 1:
		//first text
		cout << "decrypting..." << endl;
		cout << text << " (1/4)" << endl;
		//second text
		while (text[i] != '\0')
		{
			++i;
		}
		while (counter < i)
		{
			int character = translateltn(text[counter], 0);
			trans1 += std::to_string(character);
			counter++;
		}
		cout << trans1 << " (2/4)" << endl;
		//3rd text
		counter = 0;
		trans1 = "";
		while (counter < i)
		{
			int character = translateltn(text[counter], -key);
			trans1 += std::to_string(character);
			counter++;
		}
		cout << trans1 << " (3/4)" << endl;
		//4th text
		counter = 0;
		translation = "";
		while (counter < i)
		{
			int character = translateltn(text[counter], -key);
			char Character = translatentl(character);
			translation += Character;
			counter++;
		}
		cout << translation << " (4/4)" << endl;
		Break();
		cout << "decrypted text:" << endl;
		cout << translation << endl;
		break;
	}
	return 0;
}


int main()
{
	fstream fileStream;
	cout << " __      __        __       __|__ __|__" << endl;
	cout << "/   " << R"(\)" << " / |__| |__  |__| |/     |     |" << endl;
	cout << R"(\)" << "__  |  |    |  | |__  |" << endl;
	cout << "licensed under CC-BY, created by Francis Porter 2019" << endl; \
	int checker = 0;
	while (checker == 0) {
		checker = run();
	}
	return 0;
}
