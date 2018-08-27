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

void String::Append(const char* c) {
	int i = 0;
	while (c[i] != '\0') {
		i++;
	}

	char* convertedChar = new char[length + i];

	for (int ii = 0; ii < length; i++) {
		convertedChar[ii] = data[ii];
	}

	for (int iii = length; iii < length + i; iii++) {
		convertedChar[iii] = c[iii - length];
	}

	length = length + i;
	data = convertedChar;

	delete convertedChar;
}

char String::GetLetter(int index) {
	return data[index];
}
