#include "binary_trees.h"

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t Nodes = 0;

	if (!tree)
		return (0);
	if (tree->left || tree->right)
		Nodes++;
	Nodes += binary_tree_nodes(tree->left);
	Nodes += binary_tree_nodes(tree->right);
	return(Nodes);
}
