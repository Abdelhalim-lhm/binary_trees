#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_height - function that measures the height of a binary tree
 * @tree: pointer to the node of the tree to measure
 * Return: the height of the node
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	int count = 0;

	if (tree == NULL)
		return (0);
	while (!binary_tree_is_leaf(tree))
	{
		count = count + 1;
		if (tree->left)
			tree = tree->left;
		else
			tree = tree->right;
	}
	return (count);
}
