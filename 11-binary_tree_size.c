#include "binary_trees.h"
/**
 * binary_tree_size - function for print size or number of nodes in an tree.
 * @tree: pointer the root in tree.
 * Return: number of nodes in the tree.
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t cnt = 0;

	if (!tree)
	{
		return (0);
	}
	else
	{
		cnt += 1;
		cnt += binary_tree_size(tree->left);
		cnt += binary_tree_size(tree->right);
	}

	return (cnt);
}
