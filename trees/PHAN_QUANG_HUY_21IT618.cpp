#include<conio.h>
#include<stdio.h>
#include<iostream>
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
        cout<< p->Data<<"\t";
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
        cout<< p->Data<<"\t";
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
        cout<< p->Data<<"\t";
    }
}

void TaoNut(string c)
{
    p = new TTree;
    p->Data = c;
    p->left = NULL;
    p->right = NULL;
}
main()
{
    T = NULL;
    TaoNut("CAU");
    T = p;
    TaoNut("TRUC");
    T->left = p;
    q = p;
    TaoNut("DU");
    q->left = p;
    TaoNut("LIEU");
    q->right = p;
    TaoNut("VA");
    T->right = p;
    q = p;
    TaoNut("GIAI");
    q->left = p;
    TaoNut("THUAT");
    q->right = p;
    q= p;
    TaoNut("DATA");
    q->left = p;
    q=p;
    TaoNut("STRUCTURE");
    q->left= p;
    q=p;
    TaoNut("AND");
    q->right= p;
    q=p;
    TaoNut("ALGORITHMS");
    q->right= p;
    printf("\nDuyet tien to: ");
    PreOrder(T);
    printf("\nDuyet trung to: ");
    InOrder(T);
    printf("\nDuyet hau to: ");
    PosOrder(T);
}