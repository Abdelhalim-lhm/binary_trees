#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_is_leaf - function checks if a node is a leaf
 * @node: binary tree to check
 * Return: 1 if node is a leaf, otherwise 0
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->left == NULL && node->right == NULL)
	{
		return (1);
	}
	else
	{
		binary_tree_is_leaf(node->left);
		binary_tree_is_leaf(node->right);
	}
	return (0);
}
