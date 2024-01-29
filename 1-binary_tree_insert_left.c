#include "binary_trees.h"



binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *Node;
	
	Node = malloc(sizeof(binary_tree_t));
	if ((Node == NULL) or (parent == NULL))
		return NULL;
	Node->left = NULL;
	Node->right = NULL;
	Node->parent = parent;
	Node->n = value;
	if parent->left != NULL
	{
		Node->left = parent->left;
		parent->left->parent = Node;
	}
	parent->left = Node;
	return Node;
}
