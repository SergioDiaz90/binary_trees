#include "binary_trees.h"
/**
 * Binary_tree_nodes - function that counts the nodes with at least 1 child.
 * @tree: pointer the root in tree.
 * Return: number of childs by node or 0 in case of failed.
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t cnt = 0;

	if (!tree)
	{
		return (0);
	}
	else
	{
		if ((tree->left != NULL) || (tree->right != NULL))
			cnt += 1;
		cnt += binary_tree_nodes(tree->left);
		cnt += binary_tree_nodes(tree->right);
	}
	return (cnt);
}
