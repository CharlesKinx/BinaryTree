#pragma once
#ifndef _TREENODE_H_
#define MAXSIZE 50

typedef struct list {
	binaryTreeNode* binarytreenode;
	list* behindNode;
}treeList;

typedef struct node{
	int data;
	struct node* leftNode;
	struct node* rightNode;
}binaryTreeNode;

typedef struct {
	int topStack;
	binaryTreeNode* binarytreenode[MAXSIZE];
	int tagTreeNode[MAXSIZE];
}binaryNode;

#endif _TREENODE_H_
