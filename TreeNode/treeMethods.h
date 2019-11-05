#pragma once
#include"treeNode.h"
#include<stdlib.h>
#include<stdio.h>
#include"stackMethods.h"

inline binaryTreeNode* createBinaryTree() {
	int temporaryData;
	binaryTreeNode* binarytreenode;
	scanf_s("%d", &temporaryData);
	if (temporaryData == -1) {
		return NULL;
	}
	else {
		binarytreenode = (binaryTreeNode*)malloc(sizeof(binaryTreeNode));
		binarytreenode->data = temporaryData;
		binarytreenode->leftNode = createBinaryTree();
		binarytreenode->rightNode = createBinaryTree();
	}
	return binarytreenode;
} 

inline void preorderBinaryTree(binaryTreeNode* binarytreenode) { 
	treeList* treelist= initTreeList();
	while (binarytreenode || treelist->behindNode != NULL) {
		if (binarytreenode) {
			pushStack(treelist, binarytreenode);
			binarytreenode = binarytreenode->leftNode;
		}
		else {
			binarytreenode = popStack(treelist);
			binarytreenode = binarytreenode->rightNode;
		}
	}
}
inline void inorderBinaryTree(binaryTreeNode* binarytreenode) {

}
inline void postorderBinaryTree(binaryTreeNode* binarytreenode) {

}
