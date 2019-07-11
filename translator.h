#pragma once
#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

//ltn = letter to number
int translateltn(char letter, int key, bool enigma, int enigmapos)
{
	char currentchar = letter;
	int transint;
	switch (currentchar)
	{
	case 'a':
		transint = 1;
		break;
	case 'b':
		transint = 2;
		break;
	case 'c':
		transint = 3;
		break;
	case 'd':
		transint = 4;
		break;
	case 'e':
		transint = 5;
		break;
	case 'f':
		transint = 6;
		break;
	case 'g':
		transint = 7;
		break;
	case 'h':
		transint = 8;
		break;
	case 'i':
		transint = 9;
		break;
	case 'j':
		transint = 10;
		break;
	case 'k':
		transint = 11;
		break;
	case 'l':
		transint = 12;
		break;
	case 'm':
		transint = 13;
		break;
	case 'n':
		transint = 14;
		break;
	case 'o':
		transint = 15;
		break;
	case 'p':
		transint = 16;
		break;
	case 'q':
		transint = 17;
		break;
	case 'r':
		transint = 18;
		break;
	case 's':
		transint = 19;
		break;
	case 't':
		transint = 20;
		break;
	case 'u':
		transint = 21;
		break;
	case 'v':
		transint = 22;
		break;
	case 'w':
		transint = 23;
		break;
	case 'y':
		transint = 24;
		break;
	case 'x':
		transint = 25;
		break;
	case 'z':
		transint = 26;
		break;
	case '+':
		transint = 27;
		break;
	case'A':
		transint = 28;
		break;
	case'B':
		transint = 29;
		break;
	case'C':
		transint = 30;
		break;
	case'D':
		transint = 31;
		break;
	case'E':
		transint = 32;
		break;
	case'F':
		transint = 33;
		break;
	case'G':
		transint = 34;
		break;
	case'H':
		transint = 35;
		break;
	case'I':
		transint = 36;
		break;
	case'J':
		transint = 37;
		break;
	case'K':
		transint = 38;
		break;
	case'L':
		transint = 39;
		break;
	case'M':
		transint = 40;
		break;
	case'N':
		transint = 41;
		break;
	case'O':
		transint = 42;
		break;
	case'P':
		transint = 43;
		break;
	case'Q':
		transint = 44;
		break;
	case'R':
		transint = 45;
		break;
	case'S':
		transint = 46;
		break;
	case'T':
		transint = 47;
		break;
	case'U':
		transint = 48;
		break;
	case'V':
		transint = 49;
		break;
	case'W':
		transint = 50;
		break;
	case'X':
		transint = 51;
		break;
	case'Y':
		transint = 52;
		break;
	case'Z':
		transint = 53;
		break;
	case'.':
		transint = 54;
		break;
	case'!':
		transint = 55;
		break;
	case'?':
		transint = 56;
		break;
	case',':
		transint = 57;
		break;
	case'/':
		transint = 58;
		break;
	case'@':
		transint = 59;
		break;
	case'#':
		transint = 60;
		break;
	case'$':
		transint = 61;
		break;
	case'%':
		transint = 62;
		break;
	case'^':
		transint = 63;
		break;
	case'&':
		transint = 64;
		break;
	case'*':
		transint = 65;
		break;
	case'(':
		transint = 66;
		break;
	case')':
		transint = 67;
		break;
	case'-':
		transint = 68;
		break;
	case'_':
		transint = 69;
		break;
	case'{':
		transint = 70;
		break;
	case'}':
		transint = 71;
		break;
	case'[':
		transint = 72;
		break;
	case']':
		transint = 73;
		break;
	case'`':
		transint = 74;
		break;
	case'~':
		transint = 75;
		break;
	case'"':
		transint = 76;
		break;
	case';':
		transint = 77;
		break;
	case':':
		transint = 78;
		break;
	case'<':
		transint = 79;
		break;
	case'>':
		transint = 80;
		break;
	case'=':
		transint = 80;
		break;
	default:
		Break();
		cout << "invalid character caused a program error (" << currentchar << ")" << endl;
		exit(EXIT_FAILURE);
		break;
	}
	transint += key;
	if (enigma == true) {
		transint += enigmapos;
	}
	return transint;
}
//ntl = number to letter
char translatentl(int letter)
{
	//tc = translated char
	char tc;

	int size = 81;

	if (letter > size)
	{
		letter -= size;
	}
	if (letter < 1) {
		letter += size;
	}
	switch (letter)
	{
	case 1:
		tc = 'a';
		break;
	case 2:
		tc = 'b';
		break;
	case 3:
		tc = 'c';
		break;
	case 4:
		tc = 'd';
		break;
	case 5:
		tc = 'e';
		break;
	case 6:
		tc = 'f';
		break;
	case 7:
		tc = 'g';
		break;
	case 8:
		tc = 'h';
		break;
	case 9:
		tc = 'i';
		break;
	case 10:
		tc = 'j';
		break;
	case 11:
		tc = 'k';
		break;
	case 12:
		tc = 'l';
		break;
	case 13:
		tc = 'm';
		break;
	case 14:
		tc = 'n';
		break;
	case 15:
		tc = 'o';
		break;
	case 16:
		tc = 'p';
		break;
	case 17:
		tc = 'q';
		break;
	case 18:
		tc = 'r';
		break;
	case 19:
		tc = 's';
		break;
	case 20:
		tc = 't';
		break;
	case 21:
		tc = 'u';
		break;
	case 22:
		tc = 'v';
		break;
	case 23:
		tc = 'w';
		break;
	case 24:
		tc = 'x';
		break;
	case 25:
		tc = 'y';
		break;
	case 26:
		tc = 'z';
		break;
	case 27:
		tc = '+';
		break;
	case 28:
		tc = 'A';
		break;
	case 29:
		tc = 'B';
		break;
	case 30:
		tc = 'C';
		break;
	case 31:
		tc = 'D';
		break;
	case 32:
		tc = 'E';
		break;
	case 33:
		tc = 'F';
		break;
	case 34:
		tc = 'G';
		break;
	case 35:
		tc = 'H';
		break;
	case 36:
		tc = 'I';
		break;
	case 37:
		tc = 'J';
		break;
	case 38:
		tc = 'K';
		break;
	case 39:
		tc = 'L';
		break;
	case 40:
		tc = 'M';
		break;
	case 41:
		tc = 'N';
		break;
	case 42:
		tc = 'O';
		break;
	case 43:
		tc = 'P';
		break;
	case 44:
		tc = 'Q';
		break;
	case 45:
		tc = 'R';
		break;
	case 46:
		tc = 'S';
		break;
	case 47:
		tc = 'T';
		break;
	case 48:
		tc = 'U';
		break;
	case 49:
		tc = 'V';
		break;
	case 50:
		tc = 'W';
		break;
	case 51:
		tc = 'X';
		break;
	case 52:
		tc = 'Y';
		break;
	case 53:
		tc = 'Z';
		break;
	case 54:
		tc = '.';
		break;
	case 55:
		tc = '!';
		break;
	case 56:
		tc = '?';
		break;
	case 57:
		tc = ',';
		break;
	case 58:
		tc = '/';
		break;
	case 59:
		tc = '@';
		break;
	case 60:
		tc = '#';
		break;
	case 61:
		tc = '$';
		break;
	case 62:
		tc = '%';
		break;
	case 63:
		tc = '^';
		break;
	case 64:
		tc = '&';
		break;
	case 65:
		tc = '*';
		break;
	case 66:
		tc = '(';
		break;
	case 67:
		tc = ')';
		break;
	case 68:
		tc = '-';
		break;
	case 69:
		tc = '_';
		break;
	case 70:
		tc = '{';
		break;
	case 71:
		tc = '}';
		break;
	case 72:
		tc = '[';
		break;
	case 73:
		tc = ']';
		break;
	case 74:
		tc = '`';
		break;
	case 75:
		tc = '~';
		break;
	case 76:
		tc = '"';
		break;
	case 77:
		tc = ';';
		break;
	case 78:
		tc = ':';
		break;
	case 79:
		tc = '<';
		break;
	case 80:
		tc = '>';
		break;
	case 81:
		tc = '=';
		break;
	default:
		Break();
		cout << "invalid character caused a program error" << endl;
		exit(EXIT_FAILURE);
		break;
	}
	return tc;
}
