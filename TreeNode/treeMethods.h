#pragma once
#include"treeNode.h"
#include<stdlib.h>

inline void initBinaryTree(binaryTreeNode* binarytreenode) {
	binarytreenode->size = 0;
}

/*
创建一个二叉树
当输入结点的值为-1是结束创建
当输入结点的值为0时表示为空
*/

inline dataNode* createBinaryTree(binaryTreeNode* binarytreenode) {
	int newData;
	if (binarytreenode == 0) {
		printf("创建失败!\n");
		return NULL;
	}
	else {
		while (scanf_s("%d", &newData) != -1) {
			binarytreenode->stackList[binarytreenode->size].data = newData;
			if (binarytreenode->stackList[0].data == 0) {
				return;
			}
		}
	}
}

inline void preorderBinaryTree(binaryTreeNode* binarytreenode) {

}
inline void inorderBinaryTree(binaryTreeNode* binarytreenode) {

}
inline void postorderBinaryTree(binaryTreeNode* binarytreenode) {

}
