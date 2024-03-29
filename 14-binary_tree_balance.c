#include "binary_trees.h"

/**
 * binary_tree_balance - To measure the balance factor of a binary tree
 *
 * @tree: Just a pointer
 *
 * Return: If tree is NULL, (0 )else (balance factor)
 *
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree)
		return (binary_tree_height(tree->left) - binary_tree_height(tree->right));

	return (0);
}

/**
 * binary_tree_height - Measures height of a binary tree
 *
 * @tree: Just a pointer
 *
 * Return: If tree is NULL (0) else (height)
 *
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t l = 0, mhay = 0;

		l = tree->left ? 1 + binary_tree_height(tree->left) : 1;
		mhay = tree->right ? 1 + binary_tree_height(tree->right) : 1;
		return ((l > mhay) ? l : mhay);
	return (0);
}
