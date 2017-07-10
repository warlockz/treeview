/*
 * treeview.h
 *
 *  Created on: 10-Jul-2017
 *      Author: yoge
 */

#ifndef MYPROJECTS_TREEVIEW_TREEVIEW_H_
#define MYPROJECTS_TREEVIEW_TREEVIEW_H_

#include <vector>
#include <string>

class Node
{
public:
	Node(string filename):file_name(filename),next_(NULL){}
	static Node* CreateNode(string filename)
	{
		Node *temp = new Node(filename);
		return temp;
	}
public:
	string file_name;
	Node *next_;
};

class TreeView
{
public:
	void ProcessDirectory();
	void ProcessPath(string path);
};


#endif /* MYPROJECTS_TREEVIEW_TREEVIEW_H_ */
