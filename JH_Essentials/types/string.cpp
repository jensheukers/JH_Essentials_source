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

	for (int ii = 0; ii < length; i++) {
		data[ii] = c[ii];
	}
}

char String::GetLetter(int index) {
	return data[index];
}