#include "binary_trees.h"
/**
 * binary_tree_is_root - function for search root of the tree.
 * @node: pointer the node for verify if is root.
 * Return: 1 if node is root or 0 in case that not root.
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node)
		return (0);

	if (node->parent == NULL)
		return (1);
	else
		return (0);
}
