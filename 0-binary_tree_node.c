#include "binary_trees.h"
#include <stddef.h>
#include <string.h>
#include <stdlib.h>
/**
* binary_tree_t: function that creates a binary tree node.
* @parent : is a pointer to the parent node of the node to create
* @value:  is the value to put in the new node
* Return: return a pointer to the new node, or NULL on failure
**/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;

	newnode = malloc(sizeof(binary_tree_t));

	if (newnode == NULL)
		return (NULL);

	newnode->n = value;
	newnode->parent = parent;
	newnode->left = NULL;
	newnode->right= NULL;

	return (newnode);
}
