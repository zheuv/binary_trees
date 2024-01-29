#include "binary_trees.h"


binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *Node;
	Node = malloc(sizeof(binary_tree_t));
	if (Node == NULL)
		return NULL;

	Node->parent = parent;
	Node->n = value;
	Node->left = NULL;
	Node->right = NULL;

	return Node;
}
