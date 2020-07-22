#include "binary_trees.h"
/**
 * binary_tree_sibling - function that finds the sibling of a node.
 * @node: pointer the node for search sibling.
 * Return: pointer the node sibling.
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *tmp = node;

	if (!tmp || !tmp->parent || (!tmp->parent->left && !tmp->parent->right))
		return (NULL);

	if (tmp->parent && tmp->parent->left != tmp)
		return (tmp = tmp->parent->left);
	else
		return (tmp = tmp->parent->right);
}
