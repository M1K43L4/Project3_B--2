#ifndef CODECONVERT_H_
#define CODECONVERT_H_

#include "Binary_Tree.h"
#include <map>
using namespace std;


class CodeConvert	{
	/*
	This class should be able to convert morse code into alphabetized letters (decode) and
	should be able to convert alphabetized letters into morse code (endcode)
	*/

	/* For the morse code---
	Each letter consists of a series of dots and dashes:
	- The dots are represented as periods			.
	- The dashes are represented as underscores		_
	*/
private:
	map<char, string> Map;
	/*You may use a binary search tree or a map to store the codes for letters. */
public:

	void load_from_file(); // store the map values


};

#endif