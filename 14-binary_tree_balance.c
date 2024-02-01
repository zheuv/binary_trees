#include "binary_trees.h"
/**
 * binary_tree_balance2 - Calculate the balance factor of a binary tree node
 *                        with respect to another given node.
 *
 * @tree: Pointer to the binary tree node to calculate the balance factor for
 * @root: Pointer to the binary tree node with respect to which
 *         factor is calculated.
 *
 * This function calculates the balance factor of a binary tree node by
 * comparing the heights of its left and right subtrees with respect to
 * another given node. The balance factor is determined by subtracting the
 * height of the right subtree from the height of the left subtree. The
 * calculation is performed recursively.
 *
 * @tree: Pointer to the binary tree node to calculate the balance factor for
 * @root: Pointer to the binary tree node with respe
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
/**
 * binary_tree_balance - Calculate the balance factor of a binary tree node.
 *
 * @tree: Pointer to the binary tree node to calculate the balance factor for.
 *
 * This function calculates the balance factor of a binary tree node by calling
 * the binary_tree_balance2 function with the same node as both arguments. The
 * balance factor is a measure of the height difference between the left and
 * right subtrees of the given node.
 *
 * @tree: Pointer to the binary tree node to calculate the balance factor for.
 *
 * Return: The balance factor of the binary tree node.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	return (balance(tree, tree));
}
