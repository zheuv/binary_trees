#include "binary_trees.h"

int binary_tree_balance(const binary_tree_t *tree)
{
	size_t right = 1;
	size_t left = 1;

	if (!tree)
		return (0);
	left += binary_tree_balance(tree->left);
	right += binary_tree_balance(tree->right);

	if (!tree->parent)
		return (left - right);
	if (left > right)
		return (left);
	return (right);
}
