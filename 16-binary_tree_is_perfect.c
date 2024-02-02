#include "binary_trees.h"
/**
 * binary_tree_is_full - Checks if a binary tree is full.
 *
 * @tree: Pointer to the root node of the tree to check.
 *
 * Return: 1 if the tree is full, 0 otherwise.
 */
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
/**
 * balance - Calculate the balance factor of a binary tree node
 *                        with respect to another given node.
 *
 * @tree: Pointer to the binary tree node to calculate the balance factor for
 * @root: Pointer to the binary tree node with respect to which
 *         factor is calculated.
 * Return: The balance factor of the binary tree node.
 */
int balance(const binary_tree_t *tree, const binary_tree_t *root)
{
	int right = 1;
	int left = 1;

	if (!tree)
		return (0);
	if (tree->left)
		left *= (balance(tree->left, root) * 2);
	if (tree->right)
		right *= (balance(tree->right, root) * 2);

	if (tree == root)
	{
		if ((left == right) && (left != 0))
			return (0);
		return (1);
	}
	if (left != right)
		return (0);
	return (right);
}
/**
 * binary_tree_is_perfect -  creates a binary tree node.
 *
 * @tree: pointer to the parent node of the node to create.
 * Dscription:A perfect binary tree is a tree in which all interior
 * nodes have two children and all leaves are at the same level.
 * Return: pointer to the new node, or NULL on failure
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	return ((balance(tree, tree) == 0) && (binary_tree_is_full(tree) == 1));
}
