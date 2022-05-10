/*
 ============================================================================
 Name        : BinarySearchTree.c
 Author      : Shaik SAzam
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

struct node{
	struct node*left;
	struct node*right;
	int data;
};
void insert(struct node**,int);
void inorder(struct node * );
void preorder(struct node * );
void postorder(struct node * );
int main(void)
{
	struct node *root=NULL;
	int choice,ele;
	while(1)
	{
		printf("Enter \n1=insertion\n2=inorder\n3=preorder\n4=postorder");
		scanf("%d",&choice);
		switch(choice)
		{
		case 1:
				printf("Enter element\n");
				scanf("%d",&ele);
				insert(&root,ele);
				break;
		case 2:
				printf("Tree Inorder Triversal\n");
				inorder(root);
				break;
		case 3:
				printf("Tree Preorder Triversal\n");
				preorder(root);
				break;
		case 4:
				printf("Tree Postorder Triversal\n");
				postorder(root);
				break;
		case 5:
				exit(0);
		default:
			    printf("\nWRONG CHOICE\n");
		}
	}
}
void insert (struct node **p,int ele)
{
	if(*p==NULL)
	{
		(*p)=(struct node*)malloc(sizeof(struct node));
		(*p)->data=ele;
		(*p)->left=NULL;
		(*p)->right=NULL;
	}
	else
	{
		if(ele < (*p)->data)
		{
			insert(&((*p)->left),ele);
		}
		else
		{
			insert(&((*p)->right),ele);
		}

	}
}
void inorder(struct node *p)
{
	if(p!=NULL)
	{
	inorder(p->left);
	printf("%d\n",p->data);
	inorder(p->right);
	}
}
void preorder(struct node *p)
{
	if(p!=NULL)
	{
		printf("%d\n",p->data);
		preorder(p->left);
		preorder(p->right);
	}
}
void postorder(struct node *p)
{
	if(p!=NULL)
	{
		postorder(p->left);
		postorder(p->right);
		printf("%d\n",p->data);
	}
}
