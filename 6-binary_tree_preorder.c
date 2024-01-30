#include "binary_trees.h"

/**
 * binary_tree_preorder - Performs a preorder traversal on a binary tree,
 *                        applying a specified function to each node.
 *
 * @tree: Pointer to the root node of the binary tree to be traversed.
 * @func: Pointer to the function to be applied to each node during traversal
 *
 * This function performs a recursive preorder traversal on the binary tree
 * rooted at the given node. For each node, the specified function 'func' is
 * applied, allowing users to perform custom actions on the values of the nodes
 * The traversal is halted if the input tree or function is NULL.
 *
 * @tree: Pointer to the root node of the binary tree to be traversed.
 * @func: Pointer to the function to be applied to each node during traversal
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if ((tree == NULL) || (!func))
		return;

	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
