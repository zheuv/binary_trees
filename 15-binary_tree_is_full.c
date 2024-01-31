#include "binary_trees.h"



int is_full(const binary_tree_t *tree, const binary_tree_t *root)
{
	int isfull = 0;

	if (!tree)
		return (0);
	isfull = is_full(tree->left, root) + is_full(tree->right, root);
	if (((!tree->left && tree->right) || (tree->left && !tree->right)) && (tree != root))
		return (1);
	if ((tree == root) && (tree->right && tree->left))
	{
		if (isfull !=0)
			return (0);
		return (1);
	}
	return (0);
}

int binary_tree_is_full(const binary_tree_t *tree)
{
	return (is_full(tree, tree));
}
