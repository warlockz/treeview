/*
 * main.cpp
 *
 *  Created on: 10-Jul-2017
 *      Author: yoge
 */

#include <iostream>
#include <treeview.h>

using namespace std;

void ShowTree(string path)
{

}

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
			ShowTree(argv[1]);
		}
	}

	if((argc == 1) || (shouldProcessOneArg))
	{
		//get cwd
		//ShowTree(argv[1]);
	}
	else
	{
		exit(0);
	}

	return 0;
}


