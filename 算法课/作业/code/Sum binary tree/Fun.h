#include "Tree.h"
#include <stdlib.h>
#include<stdio.h>

void insert(Tree* tree, int value){   //构建BST 二叉搜索树
    BTNode* node = (BTNode* )malloc(sizeof(BTNode));  
    node->data   = value;
    node->lchild = NULL;
    node->rchild = NULL;

    if(tree->root == NULL ){
        tree->root = node;
    }
    else{
        BTNode* temp = tree->root;
        while ((temp != NULL))
        {
            /* code */
            if(value < temp->data){
                if(temp->lchild == NULL){
                    temp->lchild = node;
                    return;
                }else{
                    temp = temp->lchild;
                }
            }
            else{
                if(temp->rchild == NULL){
                    temp->rchild = node;
                    return;
                }else{
                    temp = temp->rchild;
                }
            }
        }
        
    }
}

//先序遍历函数
void preorder(BTNode* node){
    if(node!=NULL){
        printf("%d\n",node->data);
        preorder(node->lchild);
        preorder(node->rchild);
    }
}
//中序遍历函数
void inorder(BTNode* node){
    if(node!=NULL){
        inorder(node->lchild);
        printf("%d\n",node->data);
        inorder(node->rchild);
    }
}
//后序遍历函数
void postorder(BTNode* node){
    if(node!=NULL){
        postorder(node->lchild);
        postorder(node->rchild);
        printf("%d\n",node->data);
    }
}

//返回书的节点之和
int Sumbt(BTNode *bt)

{
    if(bt == NULL){
        return 0;
    }else{

        if(bt->lchild== NULL && bt->rchild== NULL)
        {
            return bt->data;
        }else{
            return Sumbt(bt->lchild) + Sumbt(bt->rchild)+bt->data;
        }
        }
}