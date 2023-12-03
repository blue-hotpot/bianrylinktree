#include<stdio.h>
#include"binary_linktree.h"

int main(int argc, char const *argv[])
{
    linktree *lt;
    printf("please input:");
    lt=binarylinktree_creat();
    binarylinktree_preorder(lt);
    printf("\n");
    binarylinktree_inorder(lt);
    printf("\n");
    binarylinktree_postorder(lt);
    printf("\n");
    binarylinktree_layerorder(lt);
    printf("\n");
    printf("high=%d\n",binarylinktree_high(lt));
    binarylinktree_free(lt);
    return 0;
}
