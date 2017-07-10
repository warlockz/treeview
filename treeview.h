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

using namespace std;

class Node
{
public:
	Node(string fn):filename(fn),next(NULL){}
	static Node* createNode(string fn)
	{
		Node *temp = new Node(fn);
		return temp;
	}
public:
	string filename;
	Node *next;
};

class TreeView
{
public:
	void ProcessDirectory();
	void ProcessPath(string path);
};


#endif /* MYPROJECTS_TREEVIEW_TREEVIEW_H_ */
