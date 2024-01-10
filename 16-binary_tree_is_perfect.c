#include "binary_trees.h"

/**
* height - Calculate the height of a binary tree
* @root: A pointer to the root node of the tree
*
* Return: The height of the tree
*/
int height(const binary_tree_t *root)
{
	if (root == NULL)
		return (0);
	else
	{
		int leftHeight = height(root->left);

		int rightHeight = height(root->right);

		return (leftHeight > rightHeight) ? (leftHeight + 1) : (rightHeight + 1);
	}
}

/**
* isPerfect - Check if a binary tree is perfect
* @root: A pointer to the root node of the tree
* @depth: The depth of the current node
* @height: The height of the tree
*
* Return: 1 if the tree is perfect, 0 otherwise
*/
int isPerfect(const binary_tree_t *root, int depth, int height)
{
	if (root == NULL)
		return (1);

	if (root->left == NULL && root->right == NULL)
		return (depth == height);

	return isPerfect(root->left, depth + 1, height) && isPerfect(root->right, depth + 1, height);
}

/**
* binary_tree_is_perfect - Check if a binary tree is perfect
* @tree: A pointer to the root node of the tree
*
* Return: 1 if the tree is perfect, 0 otherwise
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == ((void *)0))
		return (0);

	int h = height(tree);

	return isPerfect(tree, 1, h);
}
