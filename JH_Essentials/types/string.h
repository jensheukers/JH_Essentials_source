/**
*	Filename: string.h
*
*	Description: Header for string data type
*	Version: 0.1
*
*	© 2018, Jens Heukers
*/

#pragma once

class String {
private:
	char* data;
	unsigned length;
	
public:
	/**
	* Constructor.
	*/
	String(const char* c);

	/**
	* Returns the lenght of the string.
	*/
	unsigned GetLenght() { return this->length; };

	/**
	*Returns the char at the index given.
	*/
	char GetLetter(int index);
};