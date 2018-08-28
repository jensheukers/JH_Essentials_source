/**
*	Filename: string.cpp
*
*	Description: Source for string data type
*	Version: 0.1
*
*	© 2018, Jens Heukers
*/
#include "string.h"

String::String(const char* c) {
	int i = 0;
	while (c[i] != '\0') {
		i++;
	}

	length = i;
	data = new char[length];

	for (int ii = 0; ii < length; ii++) {
		data[ii] = c[ii];
	}
}

char* String::Get() {
	char* returnString = new char[length];

	for (int i = 0; i < length; i++) {
		returnString[i] = GetLetter(i);
	}

	returnString[length] = '\0';
	return returnString;
}

char String::GetLetter(int index) {
	return data[index];
}
