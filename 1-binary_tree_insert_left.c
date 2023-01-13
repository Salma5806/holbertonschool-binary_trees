#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"
/**
* binary_tree_insert_left - inserts a node as the left-child of another node
* @parent: is a pointer to the node to insert the left-child in
* @value: the value to store in the new node
* Return : return a pointer  of newnode in the left
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;

	newnode = NULL;
	if (parent == NULL)
		return (NULL);
	newnode = binary_tree_node(parent, value);
	if (parent->left)
	{
		parent->left->parent = newnode;
		newnode->left = parent->left;
	}
	parent->left = newnode;

	return (newnode);
}
