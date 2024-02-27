#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_is_root - function checks if a node is a root
 * @node: node to check
 * Return: 1 if node is a root, otherwise 0
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->parent == NULL)
	{
		return (1);
	}
	else
	{
		binary_tree_is_root(node->parent);
	}
	return (0);
}
