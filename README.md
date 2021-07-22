# 0x1D. C - Binary trees
***

![Different Types of Binary Tree](https://i.imgur.com/rLf5gaz.jpg)

_Binary_ Tree is a Tree data structure where every node has at most 2 children.

In this group project we will work to expand knowledge about what a binary tree is, the difference between a binary tree and a binary tree, the potential gain in terms of time complexity compared to the related list, the same depth. We also investigate and cover topics on different traversal methods for traversing a binary tree, a complete, complete, perfect, and balanced binary tree.

### Learning Objectives
* At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

### General
* What is a binary tree
* What is the difference between a binary tree and a Binary Search Tree
* What is the possible gain in terms of time complexity compared to linked lists
* What are the depth, the height, the size of a binary tree
* What are the different traversal methods to go through a binary tree
* What is a complete, a full, a perfect, a balanced binary tree

## Table of Contents
1. [Helper File](#Helper-File)
2. [Header File](#Header-File)
	* *Data Structures*
3. [Function Prototypes](#Function-Prototypes)


## Helper File

* [binary_tree_print.c](https://github.com/LilianaSepulveda/binary_trees/blob/master/binary_tree_print.c): C function that prints binary trees in a pretty way.

## Header File 📁

* [binary_trees.h](https://github.com/LilianaSepulveda/binary_trees/blob/master/binary_trees.h): Header file containing definitions and prototypes for all types and functions written for the project.

* Data Structures

![Data Structures](https://i.imgur.com/NplWLYq.jpg)

## Function Prototypes

|          File                |        Prototype                                                          |
|------------------------------|---------------------------------------------------------------------------|
| binary_tree_print.c          | void binary_tree_print(const binary_tree_t *tree)                         |
| 0-binary_tree_node.c         | binary_tree_t *binary_tree_node(binary_tree_t *parent, int value;         |
| 1-binary_tree_insert_left.c  | binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value); |
| 2-binary_tree_insert_right.c | binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);|
| 3-binary_tree_delete.c       | void binary_tree_delete(binary_tree_t *tree);                             |
| 4-binary_tree_is_leaf.c      | int binary_tree_is_leaf(const binary_tree_t *node);                       |
| 5-binary_tree_is_root.c      | int binary_tree_is_root(const binary_tree_t *node);                       |
| 6-binary_tree_preorder.c     | void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int));  |
| 7-binary_tree_inorder.c      | void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int));   |
| 8-binary_tree_postorder.c    | void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int)); |
| 9-binary_tree_height.c       | size_t binary_tree_height(const binary_tree_t *tree);                     |
| 10-binary_tree_depth.c       | size_t binary_tree_depth(const binary_tree_t *tree);                      |
| 11-binary_tree_size.c        | size_t binary_tree_size(const binary_tree_t *tree);                       |
| 12-binary_tree_leaves.c      | size_t binary_tree_leaves(const binary_tree_t *tree);                     |
| 13-binary_tree_nodes.c       | size_t binary_tree_nodes(const binary_tree_t *tree);                      |
| 14-binary_tree_balance.c     | int binary_tree_balance(const binary_tree_t *tree);                       |
| 15-binary_tree_is_full.c	   | int binary_tree_is_full(const binary_tree_t *tree);                       |
| 16-binary_tree_is_perfect.c  | int binary_tree_is_perfect(const binary_tree_t *tree);                    |
| 17-binary_tree_sibling.c     | binary_tree_t *binary_tree_sibling(binary_tree_t *node);                  |
| 18-binary_tree_uncle.c       | binary_tree_t *binary_tree_uncle(binary_tree_t *node);                    |


## Authors ✒️
***
* Sergio Velasquez <[sergiovelasquez18](https://github.com/sergiovelasquez18)>
* Luz Adriana Baza <[luzbaza](https://github.com/luzbaza)>
* Martha Liliana Sepulveda Lindarte <[LilianaSepulveda](https://github.com/LilianaSepulveda)>


	<img src="https://www.holbertonschool.com/holberton-logo.png" width="360"/>

