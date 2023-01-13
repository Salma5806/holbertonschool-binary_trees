#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"
/**
*
*
*
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

	while (temp != NULL)
	{
		parent = temp;
		if (value <= temp->n)
			temp = temp->left;
			newnode->parent = parent;
	}
	return (newnode);
}
