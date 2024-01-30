#include "binary_trees.h"

/**
 * binary_tree_is_root - Checks if a given node is a root in a binary tree.
 *
 * @node: Pointer to the node to be checked.
 *
 * Return: 1 if the node is a root, 0 otherwise.
 *
 * This function determines if a given node in a binary tree is a root node,
 * meaning it has no parent. If the node is a root, the function returns 1;
 * otherwise, it returns 0. If the input node is NULL, the function returns 0.
 *
 * @node: Pointer to the node to be checked.
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if ((node == NULL) || (node->parent != NULL))
	{
		return (0);
	}
	return (1);
}
