#include "binary_trees.h"
/**
 * binary_tree_leaves - Counts the number of leaves in a binary tree.
 *
 * @tree: Pointer to the root node of the tree to count leaves.
 *
 * Return: Number of leaves in the tree, or 0 if @tree is NULL.
 */
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
