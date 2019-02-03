//
//	Michael Cooper
//	CS 3560 Ohio University
//	Homework 1
//	replace.cpp implementation for replace function
//

#include <string>
#include "../include/replace.h"

//
//	replace
//	This function will find and replace every instance of a case sensitive string (toReplace)
//	with another string (replaceWith).
//
void replace(std::string & content, std::string & toReplace, std::string & replaceWith)
{
	
//	loc--;		//take away 1 because of space at beginning
//	cout << content[loc+1] << endl;

	std::size_t loc;	//npos is size_t

	//simple loop to find all instances of toReplace and replace them
	while((loc = content.find((" " + toReplace), 0)) != std::string::npos)
	{
		content.replace(loc+1, toReplace.length(), replaceWith);

		//content.replace has loc+1 because I search for a space before to avoid something like
		//replacing every 'a' in the file instead of every instance of the artical a.

	}

}