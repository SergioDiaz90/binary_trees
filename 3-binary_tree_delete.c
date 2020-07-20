#include "binary_trees.h"
/**
 * binary_tree_node - creates a binary tree node
 * @parent: the pointer to the parent node of the node to create
 * @value: the value of the this new node
 * Return: a pointer to the new node or NULL on failure
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (!tree)
		return;

	if (tree->left == NULL && tree->right == NULL)
		del_node(tree);
	else if (tree->left != NULL)
		binary_tree_delete(tree->left);
	else if (tree->right != NULL)
		binary_tree_delete(tree->right);
}

void del_node(binary_tree_t *node)
{
	if (!node)
		return;

	node->left = node->right = NULL;
	free(node);
}