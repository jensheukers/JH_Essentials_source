/**
*	Filename: string.cpp
*
*	Description: Source for string data type
*	Version: 0.1
*
*	© 2018, Jens Heukers
*/
#include "string.h"

String::String() {
	length = 0;
	data = new char['\0'];
}

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

char String::GetLetter(unsigned index) {
	return data[index];
}

Array<String>* String::Split(char* c) {
	Array<String>* returnArray = new Array<String>();
	
	int lastMatchIndex = 0;
	int i = 0;

	while (data[i] != '\0') {
		if (data[i] == c[0]) {
			char* currentWord = new char[i];

			for (int ii = lastMatchIndex; ii < i; ii++) {
				currentWord[ii] = data[ii];
			}

			lastMatchIndex = i;

			returnArray->Add(String(currentWord));
		}
		i++;
	}

	return returnArray;
}
