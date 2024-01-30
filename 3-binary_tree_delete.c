#include "binary_trees.h"
/**
 * binary_tree_delete - Deletes an entire binary tree rooted at a given node.
 *
 * @tree: Pointer to the root node of the binary tree to be deleted.
 *
 * This function recursively deletes all nodes in the binary tree starting from
 * the given root node. It sets the parent, left child, right child, and the v
 * of each node to NULL or 0 before freeing the memory allocated for the node.
 * The root node itself is also freed.
 *
 * @tree should be set to NULL after calling this function to avoid dangling
 *
 * Note: If the nodes of the binary tree contain dynamically allocated memory,
 * it's the responsibility of the user to free that memory before calling
 *
 * @tree: Pointer to the root node of the binary tree to be deleted.
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;

	if (tree->left != NULL)
		binary_tree_delete(tree->left);
	if (tree->right != NULL)
		binary_tree_delete(tree->right);

	tree->parent = NULL;
	tree->left = NULL;
	tree->right = NULL;
	tree->n = 0;
	free(tree);
}
