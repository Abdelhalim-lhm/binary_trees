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
	int left_height, right_height;

	if (tree == NULL)
		return (0);
	if (tree->left)
		left_height = 1 + binary_tree_height(tree->left);
	else
		left_height = 0;

	if (tree->right)
		right_height = 1 + binary_tree_height(tree->right);
	else
		right_height = 0;

	if (left_height > right_height)
		return (left_height);
	else
		return (right_height);
}
