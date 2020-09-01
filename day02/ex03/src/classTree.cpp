#include "../include/classTree.hpp"

void allocateNode(Node **node)
{
	*node = new Node;
	(*node)->left = nullptr;
	(*node)->right = nullptr;
	return;
}

int Tree::writeData(Node *node)
{
	static int i = _postfix_len;

	if (i < 0)
		return i;
	node->data = _postfix_str[i];
	// std::cout << "node data: " << _postfix_str[i] << "\n"; //debugging line
	i--;
	return i;
}

void Tree::buildPreorderTree(Node *node)
{
	int i;

	i = writeData(node);
	if (i < 0 || isDigit(node->data[0]))
		return;
	allocateNode(&node->left);
	buildPreorderTree(node->left);

	allocateNode(&node->right);
	buildPreorderTree(node->right);
	return;
}

float stringToFloat(std::string s_num)
{
	float f_num;
	try
	{
		f_num = std::stof(s_num);
	}
	catch (const std::invalid_argument &ia)
	{
		std::cerr << "Invalid argument: " << ia.what() << "\n";
	}
	return f_num;
}

std::string evaluateExpression(float num_one, char operation, float num_two)
{
	Fixed result;
	switch (operation)
	{
	case '+':
		result = Fixed(num_one) + Fixed(num_two);
		break;
	case '-':
		result = Fixed(num_one) - Fixed(num_two);
		break;
	case '*':
		result = Fixed(num_one) * Fixed(num_two);
		break;
	case '/':
		result = Fixed(num_one) / Fixed(num_two);
		break;
	default:
		std::cout << "Invalid arguments. Try '( 18.18 + 3.03 ) * 2'\n";
	}
	return std::to_string(result.toFloat());
}

void deleteBranches(Node *root)
{
	if (root->left != nullptr)
	{
		delete root->left;
		root->left = nullptr;
	}
	if (root->right != nullptr)
	{
		delete root->right;
		root->right = nullptr;
	}
}

std::string errorCheck(std::string r_data, Node *r_left, Node *r_right)
{
	if (r_data == "" || (r_left != nullptr && r_left->data == "") || (r_right != nullptr && r_right->data == ""))
	{
		return "Invalid arguments. Try '( 18.18 + 3.03 ) * 2'";
	}
	if (isDigit(r_data[0]) && r_left == nullptr && r_right == nullptr)
	{
		return "Invalid arguments. Try '( 18.18 + 3.03 ) * 2'";
	}
	return "";
}

std::string Tree::evaluateTree(Node *root)
{
	float num_one;
	float num_two;
	std::string ret;

	ret = errorCheck(root->data, root->left, root->right);
	if (isOperator(root->data[0]) && (isOperator(root->left->data[0]) || isOperator(root->right->data[0])))
	{
		evaluateTree(root->left);
		evaluateTree(root->right);
	}
	if (isOperator(root->data[0]) && isDigit(root->left->data[0]) && isDigit(root->right->data[0]))
	{
		num_one = stringToFloat(root->left->data);
		num_two = stringToFloat(root->right->data);
		root->data = evaluateExpression(num_one, root->data[0], num_two);
		ret = root->data;
	}
	deleteBranches(root);
	return ret;
}

Node *Tree::getRoot(void)
{
	return _root;
}

Tree::Tree(std::string *postfix_str, const int &postfix_len)
{
	_root = new Node;
	_root->left = nullptr;
	_root->right = nullptr;
	_postfix_str = postfix_str;
	_postfix_len = postfix_len;
	buildPreorderTree(_root);
	return;
}

Tree::~Tree(void)
{
	delete _root;
	_root = nullptr;
	return;
}
