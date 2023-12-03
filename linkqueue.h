#include"../binary_tree/binary_linktree.h"
#ifndef _LINKQUEUE__
#define _LINKQUEUE__
typedef linktree* datatype;

typedef struct node
{
    datatype data;
    struct node *next;
}node,*nodepoint;

typedef struct
{
    nodepoint front;
    nodepoint rear;
}linkqueue;

linkqueue *linkqueue_creat();
int linkqueue_free(linkqueue *lq);
int linkqueue_in(linkqueue *lq,datatype data);
datatype linkqueue_out(linkqueue *lq);
int linkqueue_clear(linkqueue *lq);
int linkqueue_empty(linkqueue *lq);
int linkqueue_show(linkqueue *lq);
#endif

