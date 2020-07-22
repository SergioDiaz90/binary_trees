#include "binary_trees.h"
/**
 * binary_tree_insert_left - insert node in pre-order
 * @parent: the pointer to the parent node of the node to create
 * @value: the value of the this new node
 * Return: a pointer to the new node or NULL on failure
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{

	binary_tree_t *new_node = NULL;

	if (!parent)
		return (NULL);

	new_node = binary_tree_node(parent, value);

	if (parent->left == NULL)
	{
		new_node->parent = parent;
		parent->left = new_node;
		return (new_node);
	}
	else
	{
		new_node->parent = parent;
		new_node->left = parent->left;
		parent->left->parent = new_node;
		parent->left = new_node;
		return (new_node);
	}
	return (NULL);
}
