#include<conio.h>
#include<stdlib.h>
#include <string.h>
#include <iostream>
using namespace std;
typedef string TData;
typedef struct TNode
{
    TData Data;
    TNode *left;
    TNode *right;
};
typedef TNode TTree;
TTree *p, *q, *T;

void PreOrder(TTree *T)
{
    TTree *p;
    p=T;
    if (p != NULL)
    {
       cout<<p->Data<<"\t";
        PreOrder(p->left);
        PreOrder(p->right);
    }
}

void InOrder(TTree *T)
{
    TTree *p;
    p = T;
    if (p != NULL)
    {
        InOrder(p->left);
       cout<<p->Data<<"\t";
        InOrder(p->right);
    }
}

void PosOrder (TTree *T)
{
    TTree *p;
    p = T;
    if (p != NULL)
    {
        PosOrder(p->left);
        PosOrder(p->right);
        cout<<p->Data<<"\t";
    }
}

void TaoNut(string  c)
{
    p = new TTree;
    p->Data = c;
    p->left = NULL;
    p->right = NULL;
}

 main()
{
    T = NULL;
    TaoNut("1");
    T = p;
    TaoNut("2");
    T->left = p;
    q = p;
    TaoNut("3");
    q->left = p;
    TaoNut("5"); 
    q->right = p;
    TaoNut("6");
    T->right = p;
    q = p;
    TaoNut("7");
    q->right = p;
    TaoNut("8");
    q->left = p;
    q=p;
    TaoNut("4");
    q->left = p;
    TaoNut("9");
    q->right = p;

    printf("\nDuyet tien to: ");
    PreOrder(T);
    printf("\nDuyet trung to: ");
    InOrder(T);
    printf("\nDuyet hau to: ");
    PosOrder(T);
}