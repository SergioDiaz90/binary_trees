#include "binary_trees.h"
/**
 * binary_tree_delete - del tree binnary.
 * @tree: pointer the tree for delete
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (!tree)
		return;

	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);
	del_node(tree);
}

/**
 * del_node - Destroy nodes.
 * @node: pointer to node for destroy.
 */

void del_node(binary_tree_t *node)
{
	if (!node)
		return;

	node->left = node->right = NULL;
	free(node);
}
