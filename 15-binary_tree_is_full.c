#include "binary_trees.h"


int binary_tree_is_full(const binary_tree_t *tree)
{
	int full = 1;

	if (!tree)
		return (0);
	if (tree->left)
		full *= binary_tree_is_full(tree->left);
	if (tree->right)
		full *= binary_tree_is_full(tree->right);
	if ((!tree->left && tree->right) || (tree->left && !tree->right))
		full = 0;
	return (full);
}
