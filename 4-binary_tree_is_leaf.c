#include "binary_trees.h"
/**
 * binary_tree_is_leaf - Checks if a given node is a leaf in a binary tree.
 *
 * @node: Pointer to the node to be checked.
 *
 * Return: 1 if the node is a leaf, 0 otherwise.
 *
 * This function determines if a given node in a binary tree is a leaf node,
 * meaning it has no left or right child. If the node is a leaf, the function
 * returns 1; otherwise, it returns 0.
 *
 * @node: Pointer to the node to be checked.
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (0);
	if ((node->right == NULL) && (node->left == NULL))
		return (1);
	return (0);
}
