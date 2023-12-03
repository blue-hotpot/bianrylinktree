#ifndef _BINARY_LINKTREE__
#define _BINARY_LINKTREE__
typedef char treetype;

typedef struct linktreenode
{
    //数据
    treetype data;
    //指针
    struct linktreenode *left,*right;
    // struct treenode *parent;
}linktree;

linktree *binarylinktree_creat();
void binarylinktree_preorder(linktree *lt);
void binarylinktree_inorder(linktree *lt);
void binarylinktree_postorder(linktree *lt);
void binarylinktree_layerorder(linktree *lt);
void binarylinktree_free(linktree *lt);
int binarylinktree_high(linktree *lt);

#endif