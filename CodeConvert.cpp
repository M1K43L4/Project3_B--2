#include "CodeConvert.h"
#include <fstream>
#include <iostream>

void CodeConvert::load_from_file(){
	ifstream fin("morse.txt");

	if (!fin)//if fin didn't open
	{
		cout << "'morse.txt' file not found." << endl;
		return;
	}
	cout << "File successfully opened." << endl;

	/****************************************************************************************/
	// NOTE: All the cout calls below are just for me, to make sure everything is storing correctly
	// We do not have to include them in the final version of the program
	/***********************************************************************************/

	char key;
	string value;
	int item_count = 0;
	while (fin){
		fin >> key;
		fin >> value;

		cout << key << "==>" << value << endl;

		Map[key] = value;
		//cout << Map[key] << endl;
		//fin.close();
		//return;
		item_count++;
	}

	cout << "Stored '" << item_count << "'  items succesfully";
	cout << endl << endl;



	cout << "Showing map" << endl;
	cout << Map['a'] << endl
		<< Map['b'] << endl
		<< Map['c'] << endl
		<< Map['d'] << endl
		<< Map['e'] << endl
		<< Map['f'] << endl
		<< Map['g'] << endl
		<< Map['h'] << endl
		<< Map['i'] << endl
		<< Map['j'] << endl
		<< Map['k'] << endl
		<< Map['l'] << endl
		<< Map['m'] << endl
		<< Map['n'] << endl
		<< Map['o'] << endl
		<< Map['p'] << endl
		<< Map['q'] << endl
		<< Map['r'] << endl
		<< Map['s'] << endl
		<< Map['t'] << endl
		<< Map['u'] << endl
		<< Map['v'] << endl
		<< Map['w'] << endl
		<< Map['x'] << endl
		<< Map['y'] << endl
		<< Map['z'] << endl;


	fin.close();
}