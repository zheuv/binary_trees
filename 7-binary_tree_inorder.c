#include "binary_trees.h"
/**
 * binary_tree_inorder - Performs an inorder traversal on a binary tree,
 *                       applying a specified function to each node.
 *
 * @tree: Pointer to the root node of the binary tree to be traversed.
 * @func: Pointer to the function to be applied to each node during traversa
 *
 * This function performs a recursive inorder traversal on the binary tree
 * rooted at the given node. For each node, the specified function 'func' is
 * applied, allowing users to perform custom actions on the values of the
 * The traversal is halted if the input tree or function is NULL.
 *
 * @tree: Pointer to the root node of the binary tree to be traversed.
 * @func: Pointer to the function to be applied to each node during traversa
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;
	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
