#include "binary_trees.h"

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t NumberOfLeaves = 0;

	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		NumberOfLeaves = 1;
	NumberOfLeaves += binary_tree_leaves(tree->left);
	NumberOfLeaves += binary_tree_leaves(tree->right);
	return (NumberOfLeaves);
}
