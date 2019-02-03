//
//	Michael Cooper
//	CS 3560 Ohio University
//	Homework 1
//	This program will take 2 command line args: 1 - word to replace; 2 - word to replace with
//	This program should also be ran by dumping an input file with "< file.txt" and an output
//	file with "> outfile.txt" for the cleanest results.
//

#include <iostream>
#include <sstream>
#include "../include/replace.h"

using std::string;
using std::cout;
using std::cin;
using std::endl;
using std::stringstream;

int main(int argc, char* argv[])
{

	if(argc == 3)	//This if else statement will skip execution of the program if
	{		//argc does NOT equal 3 (argv[0] is the name of the program)

		//stringstream object to read entire cin buffer from input file via redirection

		stringstream ss;
		ss << cin.rdbuf();
		string contents = ss.str();

		//contents of the stringstream placed into a normal string for .find and .replace in replace func

		string toReplace = argv[1];
		string replaceWith = argv[2];

		replace(contents, toReplace, replaceWith);

		cout << contents << endl;
		//output changed contents into standard out

	}
	else
	{
		cout << "Incorrect # of Arguments Passed. Usage: ./prog1 \"input\" \"output\" < file1.txt > file2.txt" << endl;
		//nice user friendly message on proper use :)
	}

	return 0;

}