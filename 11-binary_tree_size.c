#include "binary_trees.h"
/**
 * binary_tree_size -  creates a binary tree node.
 *
 * @tree: pointer to the parent node of the node to create.
 *
 * Return: pointer to the new node, or NULL on failure
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (!tree)
		return 0;
	size_t size = 1;
	if (tree->left)
		size += binary_tree_size(tree->left);
	if (tree->right)
		size += binary_tree_size(tree->right);
	return (size);
}
