#pragma once
#include "treeNode.h"
#include<stdlib.h>
#define MAXSIZE 50

inline treeList* initTreeList() {
	treeList* treelist = (treeList*)malloc(sizeof(treeList));
	treelist->behindNode = NULL;
	return treelist;
}

//�������һ���ڵ�
inline treeList* findLastNode(treeList* treelist) {
	while (treelist->behindNode) {
		treelist = treelist->behindNode;
	}
	return treelist;
}

//��ջ
inline void pushStack(treeList *treelist,binaryTreeNode* binarytreenode) {
	treeList* lastNode;
	treeList* newTreeNode = (treeList*)malloc(sizeof(treeList));
	lastNode = findLastNode(treelist);
	newTreeNode->binarytreenode = binarytreenode;
	lastNode->behindNode = newTreeNode;
}

//��ջ
inline binaryTreeNode* popStack(treeList* treelist) {
	if (treelist->behindNode != NULL) {
		return treelist->binarytreenode;
	}
	else {
		return NULL;
	}
}

