#include<stdio.h>
#include<stdlib.h>
#include"binary_linktree.h"
#include"../linkqueue/linkqueue.c"
//AB#CD###E#FGH##K###
//finish
linktree *binarylinktree_creat()
{
    // 根——左——右
    linktree *lt=NULL;
    treetype dat;

    scanf("%c",&dat);
    if(dat=='#')
    {
        return NULL;
    }
    while(lt==NULL)
    {
        lt=(linktree *)malloc(sizeof(linktree));
        //printf("1");
    }
    lt->data=dat;
    lt->left=binarylinktree_creat();
    lt->right=binarylinktree_creat();
    return lt;
}
//finish
void binarylinktree_preorder(linktree *lt)
{
    printf("%c",lt->data);
    if(lt->left!=NULL)
    {
        binarylinktree_preorder(lt->left);
    }
    if(lt->right!=NULL)
    {
        binarylinktree_preorder(lt->right);
    }
}
//finish
void binarylinktree_inorder(linktree *lt)
{
    if(lt->left!=NULL)
    {
        binarylinktree_inorder(lt->left);
    }
    printf("%c",lt->data);
    if(lt->right!=NULL)
    {
        binarylinktree_inorder(lt->right);
    }
}
//finish
void binarylinktree_postorder(linktree *lt)
{
    if(lt->left!=NULL)
    {
        binarylinktree_postorder(lt->left);
    }
    if(lt->right!=NULL)
    {
        binarylinktree_postorder(lt->right);
    }
    printf("%c",lt->data);
}
void binarylinktree_layerorder(linktree *lt)
{
    linkqueue *lq;
    lq=linkqueue_creat();
    linkqueue_in(lq,lt);
    while(linkqueue_empty(lq)!=1)
    {
        lt=linkqueue_out(lq);
        //lt是子函数中的一个形参，可以改变，但地址指向的值不能改变
        printf("%c",lt->data);
        if(lt->left!=NULL)
        {
            linkqueue_in(lq,lt->left);
        }
        if(lt->right!=NULL)
        {
            linkqueue_in(lq,lt->right);
        }
    }
}
//finish
void binarylinktree_free(linktree *lt)
{
    if(lt->left!=NULL)
    {
        binarylinktree_free(lt->left);
    }
    if(lt->right!=NULL)
    {
        binarylinktree_free(lt->right);
    }
    printf("%c",lt->data);
    free(lt);
}
//finish
int binarylinktree_high(linktree *lt)
{
    if(lt==NULL)
        return 0;
    int lefthigh,righthigh;
    // high=binarylinktree_high(lt->left)>binarylinktree_high(lt->right)?binarylinktree_high(lt->left)+1:binarylinktree_high(lt->right)+1;
    lefthigh=binarylinktree_high(lt->left);
    righthigh=binarylinktree_high(lt->right);
    return lefthigh>righthigh?lefthigh+1:righthigh+1;
}