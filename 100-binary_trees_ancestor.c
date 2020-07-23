#include "binary_trees.h"
/**
 * binary_trees_ancestor - function for find ancestor.
 * @first: pointer the node in tree.
 * @second: pointer the node in tree.
 * Return: nodes ancestor.
 */

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
	 const binary_tree_t *second)
{
	binary_tree_t *address_f = NULL, *address_s = NULL;

	if (!first || !second)
		return (NULL);

	address_f = first->parent;
	address_s = second->parent;

	if (address_f != address_s)
	{
		if (address_f == second)
			return ((binary_tree_t *)second);
		else if (address_s == first)
			return ((binary_tree_t *)first);
		else
			return (binary_trees_ancestor(address_f, address_s));
	}
	else
		return (address_f);
	return (NULL);
}
