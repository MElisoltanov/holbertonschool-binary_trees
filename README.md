# 😎 Our Awesome Binary Trees Project

## Description

The Binary Tree project is about learning how to create and manipulate binary trees and their nodes. Additionally, for this project, we worked in a group of two, which helped us improve our skills with [![GitHub](https://img.shields.io/badge/GitHub-%23121011.svg?logo=github&logoColor=white)](#).

To avoid conflicts, we divided the work as follows: Moussa implemented all the functions related to the structure and measurements (size, height, depth, balance), while I worked on functions related to navigation and deletion. For each function, we created a feature branch that we deleted once the task was completed successfully.


## 📁 Project Files

- `binary_trees.h` – Header file containing the definition of the binary tree structure and function prototypes.
- `binary_tree_print.c` – Utility file used to print a binary tree in a structured way.
- Individual `.c` source files – One for each function required by the project tasks.

## Requirements

- **Allowed editors:** `vi`, `vim`, `emacs`
- All your files will be compiled on **Ubuntu 20.04 LTS** using:
  ```bash
  gcc -Wall -Werror -Wextra -pedantic -std=gnu89
  ```
- All your source files must end with a new line
- A `README.md` file is mandatory at the root of the project
- Your code must follow the **Betty style**:
  - It will be checked using `betty-style.pl` and `betty-doc.pl`
- **No global variables** are allowed
- You must not have more than **5 functions per file**
- **Standard library** usage is allowed
- All function prototypes must be included in your `binary_trees.h` header file
- All header files must be **include guarded**

## Data Structures

```c
/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
struct binary_tree_s
{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
};

typedef struct binary_tree_s binary_tree_t;
typedef struct binary_tree_s bst_t;
typedef struct binary_tree_s avl_t;
typedef struct binary_tree_s heap_t;
```

## Function Summary

### Little definition

In C, a binary tree is a hierarchical data struture with nodes limited to two children each. Nodes contains a value and pointers to the left and right children.


| Function                          | Description                                                  |
|----------------------------------|--------------------------------------------------------------|
| `binary_tree_node`               | Creates a new binary tree node.                             |
| `binary_tree_insert_left`        | Inserts a node as the left child of a parent node.          |
| `binary_tree_insert_right`       | Inserts a node as the right child of a parent node.         |
| `binary_tree_delete`             | Deletes an entire binary tree.                              |
| `binary_tree_is_leaf`            | Checks if a node is a leaf (no children).                   |
| `binary_tree_is_root`            | Checks if a node is the root of the tree.                   |
| `binary_tree_preorder`           | Traverses the tree in pre-order (root, left, right).        |
| `binary_tree_inorder`            | Traverses the tree in in-order (left, root, right).         |
| `binary_tree_postorder`          | Traverses the tree in post-order (left, right, root).       |
| `binary_tree_height`             | Measures the height of a binary tree.                       |
| `binary_tree_depth`              | Measures the depth of a node in the tree.                   |
| `binary_tree_size`               | Measures the total number of nodes in a binary tree.        |
| `binary_tree_leaves`             | Counts the number of leaf nodes in the tree.                |
| `binary_tree_nodes`              | Counts the number of non-leaf (internal) nodes.             |
| `binary_tree_balance`            | Computes the balance factor of a node.                      |
| `binary_tree_is_full`            | Checks if a tree is full (every node has 0 or 2 children).  |
| `binary_tree_is_perfect`         | Checks if a tree is perfect (all levels fully filled).      |
| `binary_tree_sibling`            | Finds the sibling of a node (node with same parent).        |
| `binary_tree_


## Compilation

```sh
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c
```

## Examples

**Example of how we create a binary tree node:**

```c
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_node - Creates a binary tree node
 * @parent: Pointer to the parent node
 * @value: Value to put in the new node
 *
 * Return: Pointer to the new node, or NULL on failure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

		new_node = malloc(sizeof(binary_tree_t));

		if (new_node == NULL)
		{
			return (NULL);
		}

		new_node->n = value;
		new_node->parent = parent;
		new_node->left = NULL;
		new_node->right = NULL;

	return (new_node);
}
```

**Example of how we use GitHub feature:**

- Create a feature

```sh
git checkout -b feature/New_node
```
- Delete a feature on MAIN branch

```sh
git branch -d feature/New_node
```
- Delete to our Github

```sh
git push origin --delete feature/New_node
```

## 😎 :mermaid: AUTHORS

Moussa Elisoltanov.
Flora Salanson.

