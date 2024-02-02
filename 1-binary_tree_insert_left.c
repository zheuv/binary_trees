#include "binary_trees.h"
/**
 * binary_tree_insert_left - Inserts a new node as the left child of a
 *
 * @parent: Pointer to the parent node where the new node will be inserted.
 * @value: Value to be stored in the new node.
 *
 * Return: Pointer to the newly created binary tree node,
 *         or NULL if memory allocation fails or if parent is NULL.
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *Node;

	if (!parent)
		return (NULL);
	Node = malloc(sizeof(binary_tree_t));
	if (!Node)
		return (NULL);
	Node->left = NULL;
	Node->right = NULL;
	Node->parent = parent;
	Node->n = value;
	if (parent->left != NULL)
	{
		Node->left = parent->left;
		parent->left->parent = Node;
	}
	parent->left = Node;
	return (Node);
}
