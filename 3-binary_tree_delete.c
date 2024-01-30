#include "binary_trees.h"

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