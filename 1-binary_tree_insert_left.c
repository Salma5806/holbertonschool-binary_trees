#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"
/**
* binary_tree_t: function that inserts a node as the left-child of another node
* @parent: is a pointer to the node to insert the left-child in
* @value: the value to store in the new node
* Return : return a pointer to the created node, or NULL on failure or if parent is NULL
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;
	binary_tree_t *temp;

	newnode = malloc(sizeof(binary_tree_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = value;
	newnode->left = NULL;
	newnode->right = NULL;

	if (parent->left == NULL)
	{
		parent->left = newnode;
		newnode->parent = parent;
	}
	else
	{
		temp = parent->left;
		parent->left = newnode;
		newnode->left = temp;
		newnode->parent = parent;
		temp->parent = newnode;
	}
	return (newnode);
}
