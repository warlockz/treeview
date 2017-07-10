/*
 * treeview.cpp
 *
 *  Created on: 10-Jul-2017
 *      Author: yoge
 */
#include <string>
#include <iostream>
#include <sys/types.h>
#include <dirent.h>
#include <../logger/logger.h>

void TreeView::ProcessDirectory()
{


}

void TreeView::ProcessPath(string path)
{
	DIR *dp = opendir(path.c_str());

	if(dp)
	{
		dirent *contents = readdir(dp);
	}
	else
	{
		LOGV(LEVEL_ERR,"Can`t open empty dir !!\n");
	}
}

