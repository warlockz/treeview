/*
 * main.cpp
 *
 *  Created on: 10-Jul-2017
 *      Author: yoge
 */

#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
	bool shouldProcessOneArg = false;
	if(argc == 2)
	{
		if(argv[0] == ".")
		{
			shouldProcessOneArg = true;
		}
		else
		{
			ProcessPath(argv[1]);
		}
	}

	if((argc == 1) || (shouldProcessOneArg))
	{

	}
	else
	{
		exit(0);
	}

	return 0;
}


