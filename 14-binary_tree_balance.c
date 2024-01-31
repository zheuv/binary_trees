#include "binary_trees.h"

int binary_tree_balance2(const binary_tree_t *tree, const binary_tree_t *tree1)
{
	size_t right = 1;
	size_t left = 1;

	if (!tree)
		return (0);
	left += binary_tree_balance(tree->left, tree1);
	right += binary_tree_balance(tree->right, tree1);

	if (tree == tree1)
		return (left - right);
	if (left > right)
		return (left);
	return (right);
}

int binary_tree_balance(const binary_tree_t *tree)
{
	return (binary_tree_balance2(tree, tree));
}
