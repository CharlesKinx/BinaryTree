#pragma once
#include"treeNode.h"
#include<stdlib.h>

inline void initBinaryTree(binaryTreeNode* binarytreenode) {
	binarytreenode->size = 0;
}

/*
����һ��������
���������ֵΪ-1�ǽ�������
���������ֵΪ0ʱ��ʾΪ��
*/

inline dataNode* createBinaryTree(binaryTreeNode* binarytreenode) {
	int newData;
	if (binarytreenode == 0) {
		printf("����ʧ��!\n");
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
