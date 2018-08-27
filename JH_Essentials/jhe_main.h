/**
*	Filename: math.cpp
*
*	Description: Main header file for jh_essentials.
*	Version: 0.1
*
*	© 2018, Jens Heukers
*/

#pragma once
#include "math\math.h"
#include "vector2\vector2.h"

class Jhe {
private:
	const float VERSION = 0.2;
public:
	/**
	* Returns the current version build
	*/
	float GetVersion() { return this->VERSION; };
};