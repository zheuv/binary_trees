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
 * binary_tree_balance2 - Calculate the balance factor of a binary tree node
 *                        with respect to another given node.
 *
 * @tree: Pointer to the binary tree node to calculate the balance factor for
 * @hypothetical_root: Pointer to the binary tree node with respect to which
 *         factor is calculated.
 *
 * This function calculates the balance factor of a binary tree node by
 * comparing the heights of its left and right subtrees with respect to
 * another given node. The balance factor is determined by subtracting the
 * height of the right subtree from the height of the left subtree. The
 * calculation is performed recursively.
 *
 * @tree: Pointer to the binary tree node to calculate the balance factor for
 * @hypothetical_root: Pointer to the binary tree node with respe
 *         factor is calculated.
 *
 * Return: The balance factor of the binary tree node.
 */
int balance(const binary_tree_t *tree, const binary_tree_t *root)
{
	int right = 1;
	int left = 1;

	if (!tree)
		return (0);
	left += balance(tree->left, root);
	right += balance(tree->right, root);

	if (tree == root)
		return (left - right);
	if (left > right)
		return (left);
	return (right);
}

int is_perfect(const binary_tree_t *tree, const binary_tree_t *root)
{
	return ((balance(tree, tree) == 0) && (binary_tree_is_full(tree) == 1));
}
