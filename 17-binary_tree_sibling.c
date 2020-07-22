#include "binary_trees.h"
/**
 * binary_tree_sibling - function that finds the sibling of a node.
 * @node: pointer the node for search sibling.
 * Return: pointer the node sibling.
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *tmp = node;

	if (!node || node->parent == NULL || (!node->parent->left && !node->parent->right))
		return (NULL);

	if (tmp->parent->left == tmp)
		tmp = tmp->parent->right;
	else
		tmp = tmp->parent->left;

	if (tmp->parent == node->parent)
		return (tmp);

	return (node);
}
