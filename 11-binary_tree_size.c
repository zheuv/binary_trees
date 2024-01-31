#include "binary_trees.h"

size_t binary_tree_size(const binary_tree_t *tree)
{
	if (!tree)
		return 0;
	static size_t size = 0;
	size++;
	if (tree->left)
		binary_tree_size(tree->left);
	if (tree->right)
		binary_tree_size(tree->right);
	return (size);
}
