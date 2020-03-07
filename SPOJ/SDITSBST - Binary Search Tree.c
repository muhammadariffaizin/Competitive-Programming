#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct bst_node_t{
  unsigned left_fruit;
  unsigned long long key;
  struct bst_node_t *left,
             *right,
             *parent;
}BSTNode;

typedef struct bst_metadata_t{
  unsigned _size_node;
  BSTNode *_head;
}BSTree;


/*
save node count
*/
/*
List fungsi
DONE Insert
DONE Remove
DONE Find
DONE Init
DONE Create Node (Init buat Node lol)
DONE Find Deepest
Delete certain Node

Traversal:
PreOrder
PostOrder
Inorder

the idea is to add parent's total node either right or left, and save it so that it
can be used for calculating index.
*/

/* As for now, depth isn't used*/

void bst_init(BSTree *tree)
{
  tree->_size_node = 0;
  tree->_head = NULL;
}

BSTNode* bstNode_init(unsigned long long value)
{
  BSTNode *newNode = (BSTNode*)malloc(sizeof(BSTNode));

  newNode->key = value;
  newNode->left_fruit = 0;
  newNode->left = NULL;
  newNode->right = NULL;
  newNode->parent = NULL;

  return newNode;
}

BSTNode* __bst_findNode(BSTNode *node, unsigned long long value, unsigned *tracker)
{
  //printf("[tracker IS %u!!!]\n",*tracker);
  if(node)
  {
    if(node->left && value > node->key)
    {
      //*tracker+=1;
      return __bst_findNode(node->left,value,tracker);
    }
    //printf("[%d]->",node->key);
    else if(node->right && value < node->key)
    {
      *tracker+=node->left_fruit+1;
      return __bst_findNode(node->right,value,tracker);
    }
    else if(node->key == value)
    {
      *tracker+=node->left_fruit+1;
      //printf("[tracker IS %u!!!]\n",*tracker);
      return node;
    }
  }
  return NULL;
}

BSTNode* __bst_findParent(BSTNode *node,unsigned long long value)
{
  if(node)
  {
    if(node->left && value > node->key)
    {
      node->left_fruit++;
      return __bst_findParent(node->left,value);
    }else if(node->right && value < node->key)
    {
      return __bst_findParent(node->right,value);
    }
  }
  return node;
}

bool bst_insert(BSTree *tree, unsigned long long value)
{
  BSTNode *newNode=bstNode_init(value);
  if(newNode)
  {
    if(tree->_head)
    {
      BSTNode *parent=__bst_findParent(tree->_head,value);
      newNode->parent=parent;
      if(parent && value > parent->key)
      {
        parent->left=newNode;
        newNode->parent->left_fruit++;
      }
      else if(parent && value < parent->key)
      {
        parent->right=newNode;
      }
      tree->_size_node++;
      return true;
    }else
    {
      tree->_head=newNode;
      tree->_size_node++;
      return true;
    }
  }
  return false;
}

void bst_print_inorder(BSTNode *now)
{
  //printf("[IN]");
  if(now)
  {
    if(now->parent) printf("%u->",now->parent->key);
    else printf("head->");
    printf("[%u,<%u]\n",now->key,now->left_fruit);
    bst_print_inorder(now->left);
    bst_print_inorder(now->right);
  }
}

int main()
{
  BSTree myTree;
  bst_init(&myTree);

  unsigned t,track;
  unsigned long long value;
  short int query;

  scanf("%u",&t);
  while(t--)
  {
    scanf("%hd %llu",&query, &value);
    //printf("%hd %u\n",query, value);
    if(query == 1)
    {
      bst_insert(&myTree,value);
      //bst_print_inorder(myTree._head);
    }else
    {
    	track=0;
      if(__bst_findNode(myTree._head,value,&track)) printf("%u\n",track);
      else  printf("Data tidak ada\n");
    }
  }
  return 0;
}
