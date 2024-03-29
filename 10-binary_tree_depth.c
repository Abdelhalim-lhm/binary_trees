#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_depth - function that measures the depth of a binary tree
 * @tree: pointer to the node of the tree to measure
 * Return: the height of the node
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	int count = 0;

	if (tree == NULL)
		return (0);
	while (tree && tree->parent)
	{
		count = count + 1;
		tree = tree->parent;
	}
	return (count);
}
