#ifndef TREE_H
#define TREE_H

#include "classFixed.hpp"
#include "evaluate_char.hpp"
#include <iostream>

struct Node
{
	std::string data;
	Node *left;
	Node *right;
};

class Tree
{
private:
	Node *_root;
	std::string *_postfix_str;
	int _postfix_len;

public:
	Tree(std::string *postfix_str, const int &postfix_len);
	~Tree(void);

	void buildPreorderTree(Node *node);
	int writeData(Node *node);
	std::string evaluateTree(Node *root);
	Node *getRoot(void);
};

#endif