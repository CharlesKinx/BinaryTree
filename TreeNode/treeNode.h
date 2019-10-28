#pragma once
#ifndef _TREENODE_H_
#define MAXSIZE 50

typedef struct {
	int data;
}stackNode;

typedef struct {
	int size;
	dataNode stackList[MAXSIZE];
	//stackNode tagNode[MAXSIZE];
}binaryTreeNode;

typedef struct {
	int data;
	treeNode* leftNode;
	treeNode* rightNode;
}treeNode;

typedef struct {
	int data;
	int leftChild;
	int rightChild;
}dataNode;

#endif _TREENODE_H_
