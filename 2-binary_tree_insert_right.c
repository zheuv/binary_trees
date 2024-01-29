#include "binary_trees.h"


binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
        binary_tree_t *Node;

        Node = malloc(sizeof(binary_tree_t));
        if ((Node == NULL) || (parent == NULL))
                return NULL;
        Node->left = NULL;
        Node->right = NULL;
        Node->parent = parent;
        Node->n = value;
        if (parent->right != NULL)
        {
                Node->right = parent->right;
                parent->right->parent = Node;
        }
        parent->right = Node;
        return Node;
}
