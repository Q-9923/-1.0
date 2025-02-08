//#include<stdio.h>
//#include<stdlib.h>
//typedef int BTDataType;
//
//typedef struct Binarytreenode
//{
//	struct Binarytreenode* left;
//	struct Binarytreenode* right;
//	BTDataType data;
//}BTnode;
//
//void PreOrder(BTnode* root)
//{
//	if (root == NULL)
//	{
//		return;
//	}
//	printf("%d ", root->data);
//	PreOrder(root->left);
//	PreOrder(root->right);
//}
//freetree(BTnode* root)
//{
//	if (root == NULL)
//	{
//		return;
//	}
//	freetree(root->left);
//	freetree(root->right);
//	free(root);
//
//}
//void InOrder(BTnode* root)
//{
//	if (root == NULL)
//	{
//		return;
//	}
//	InOrder(root->left);
//	printf("%d ", root->data);
//	InOrder(root->right);
//}
//
//void PostOrder(BTnode* root)
//{
//	if (root == NULL)
//	{
//		printf("NULL ");
//		return;
//	}
//	else
//
//	{
//		PostOrder(root->left);
//		PostOrder(root->right);
//		printf("%d ", root->data);
//	}
//}
//int main()
//{
//	BTnode* A = (BTnode*)malloc(sizeof(BTnode));
//	A->data = 1;
//	A->left = NULL;
//	A->right = NULL;
//
//	BTnode* B = (BTnode*)malloc(sizeof(BTnode));
//	B->data = 2;
//	B->left = NULL;
//	B->right = NULL;
//
//	BTnode* C = (BTnode*)malloc(sizeof(BTnode));
//	C->data = 3;
//	C->left = NULL;
//	C->right = NULL;
//
//	BTnode* D = (BTnode*)malloc(sizeof(BTnode));
//	D->data = 4;
//	D->left = NULL;
//	D->right = NULL;
//
//	BTnode* E = (BTnode*)malloc(sizeof(BTnode));
//	E->data = 5;
//	E->left = NULL;
//	E->right = NULL;
//
//	A->left = B;
//	A->right = C;
//	B->left = D;
//	B->right = E;
//
//	PreOrder(A);
//	printf("\n");
//	InOrder(A);
//	printf("\n");
//	PostOrder(A);
//	printf("\n");
//	freetree(A);
//}