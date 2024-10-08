# 0x1D. C - Binary Trees

## Overview
This project is part of the ALX Software Engineering Program. It's all about learning and implementing binary trees in C. By the end of this project, I should be able to explain various concepts related to binary trees without needing to look them up.

## Learning Objectives
By completing this project, I aim to understand:
- What a binary tree is
- The difference between a binary tree and a Binary Search Tree (BST)
- The potential time complexity benefits of binary trees compared to linked lists
- The concepts of depth, height, and size in binary trees
- Different methods to traverse a binary tree
- What makes a binary tree complete, full, perfect, and balanced

## Requirements
### General
- Editors: `vi`, `vim`, `emacs`
- Compilation: Ubuntu 20.04 LTS using `gcc` with options `-Wall -Werror -Wextra -pedantic -std=gnu89`
- All files must end with a new line
- A `README.md` file is mandatory
- Code style: Betty style (checked using `betty-style.pl` and `betty-doc.pl`)
- No global variables
- Maximum of 5 functions per file
- Standard library usage is allowed
- Function prototypes should be in `binary_trees.h`
- Header files should be include guarded

## Data Structures
I'll be using the following data structures for binary trees, and they should be included in my header file.

### Basic Binary Tree
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
```

### Binary Search Tree
```c
typedef struct binary_tree_s bst_t;
```

### AVL Tree
```c
typedef struct binary_tree_s avl_t;
```

### Max Binary Heap
```c
typedef struct binary_tree_s heap_t;
```

## Concepts and Definitions
### Binary Tree
A binary tree is a data structure in which each node has at most two children, referred to as the left child and the right child.

### Binary Search Tree (BST)
A BST is a type of binary tree where the nodes are arranged in order. For each node, all elements in the left subtree are less than the node, and all elements in the right subtree are greater.

### Time Complexity
Binary trees can offer better time complexity for search operations compared to linked lists, especially when the tree is balanced. For example, the average time complexity for search operations in a balanced binary tree is O(log n), compared to O(n) in a linked list.

### Depth, Height, and Size
- **Depth**: The depth of a node is the number of edges from the node to the tree's root node.
- **Height**: The height of a node is the number of edges on the longest path from the node to a leaf.
- **Size**: The size of a binary tree is the total number of nodes in the tree.

### Traversal Methods
- **In-order Traversal**: Visit the left subtree, the node, and then the right subtree.
- **Pre-order Traversal**: Visit the node, the left subtree, and then the right subtree.
- **Post-order Traversal**: Visit the left subtree, the right subtree, and then the node.
- **Level-order Traversal**: Visit nodes level by level from top to bottom.

### Types of Binary Trees
- **Complete Binary Tree**: All levels are completely filled except possibly the last level, which is filled from left to right.
- **Full Binary Tree**: Every node has either 0 or 2 children.
- **Perfect Binary Tree**: All internal nodes have two children and all leaves are at the same level.
- **Balanced Binary Tree**: The height of the left and right subtrees of any node differ by at most one.

## Tasks
This project has 42 tasks. Tasks #0 to #18 are mandatory, and the rest are advanced.
