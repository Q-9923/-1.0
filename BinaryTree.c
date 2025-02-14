#include<stdio.h>
#include<stdlib.h>
typedef int BTDataType;

typedef struct Binarytreenode
{
	struct Binarytreenode* left;
	struct Binarytreenode* right;
	BTDataType data;
}BTnode;

void PreOrder(BTnode* root)
{
	if (root == NULL)
	{
		return;
	}
	printf("%d ", root->data);
	PreOrder(root->left);
	PreOrder(root->right);
}
void freetree(BTnode* root)
{
	if (root == NULL)
	{
		return;
	}
	freetree(root->left);
	freetree(root->right);
	free(root);

}
void InOrder(BTnode* root)
{
	if (root == NULL)
	{
		return;
	}
	InOrder(root->left);
	printf("%d ", root->data);
	InOrder(root->right);
}

void PostOrder(BTnode* root)
{
	if (root == NULL)
	{
		printf("NULL ");
		return;
	}
	else

	{
		PostOrder(root->left);
		PostOrder(root->right);
		printf("%d ", root->data);
	}
}




//以下是常规的计算二叉树节点个数的方法
// 
//int size = 0;
//void TreeSize(BTnode* root,int*Psize)
//{
//	if (root == NULL)
//	{
//		return;
//
//	}
//	(*Psize)++;
//	TreeSize(root->left,Psize);
//	TreeSize(root->right,Psize);//因为Psize此时就是一个指针，且为了加到同一个size所以使用Psize而不是&Psize
//}


//以下是计算二叉树节点个数更高级方法---------分治
int TreeSize(BTnode* root)
{
	return root == NULL ? 0 : 1 + TreeSize(root->left) + TreeSize(root->right);
}
int main()
{
	//创建二叉树
	BTnode* A = (BTnode*)malloc(sizeof(BTnode));
	A->data = 1;
	A->left = NULL;
	A->right = NULL;

	BTnode* B = (BTnode*)malloc(sizeof(BTnode));
	B->data = 2;
	B->left = NULL;
	B->right = NULL;

	BTnode* C = (BTnode*)malloc(sizeof(BTnode));
	C->data = 3;
	C->left = NULL;
	C->right = NULL;

	BTnode* D = (BTnode*)malloc(sizeof(BTnode));
	D->data = 4;
	D->left = NULL;
	D->right = NULL;

	BTnode* E = (BTnode*)malloc(sizeof(BTnode));
	E->data = 5;
	E->left = NULL;
	E->right = NULL;

	A->left = B;
	A->right = C;
	B->left = D;
	B->right = E;

	//前中后序的实现

	/*PreOrder(A);
	printf("\n");
	InOrder(A);
	printf("\n");
	PostOrder(A);
	printf("\n");*/

	//以下是常规的计算二叉树节点个数的方法
	/*int Asize = 0;
	TreeSize(A,&Asize);
	printf("A节点个数为：%d\n", Asize);

	int Bsize = 0;
	TreeSize(B,&Bsize);
	printf("B节点个数为：%d\n", Bsize);*/

	//以下是计算二叉树节点个数的高级方法---------分治
	printf("A节点个数为：%d\n", TreeSize(A));
	printf("B节点个数为：%d\n", TreeSize(B));
	printf("C节点个数为：%d\n", TreeSize(C));

	freetree(A);
}
