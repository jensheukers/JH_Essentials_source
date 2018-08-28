/**
*	Filename: string.h
*
*	Description: Header for string data type
*	Version: 0.2
*
*	© 2018, Jens Heukers
*/

#pragma once

class String {
private:
	char* data;
	int length;
	
public:
	/**
	* Constructor.
	*/
	String(const char* c);

	/**
	* Returns the string
	*/
	char* Get();

	/**
	* Returns the lenght of the string.
	*/
	int GetLenght() { return this->length; };

	/**
	* Returns the char at the index given.
	*/
	char GetLetter(int index);
};