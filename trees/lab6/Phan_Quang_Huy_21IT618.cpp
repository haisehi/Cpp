#include <iostream>
#include <conio.h>
#include <stdio.h>
using namespace std;

struct NODE {
    int Data;
    NODE *left,*right;
};
 typedef NODE *tree;
 NODE *root;


void khoi_tao_cay(NODE**root){
         *root =NULL;   
}
// a) Insert a node into the tree.
void chen(int e,NODE **root){
     NODE *tam; 
     tam = new NODE;    
     tam -> Data = e;
     tam -> left =NULL; 
     tam -> right =NULL; 
     if(*root==NULL) 
        *root=tam; 
        else if(tam->Data<(*root)->Data)
             if((*root)->left) 
                chen(e, &(*root)->left);
             else (*root)->left=tam;
             else
                if(tam->Data>(*root)->Data)
                    if((*root)->right) 
                        chen(e, &(*root)->right); 
                    else
                        (*root)->right=tam;
                else std::cout<<"Trung";
 }

 void nhap_cay(NODE **root){
    int e;
    do{
        std::cout<<"\nNhap element (-1 de ket thuc) : ";
        std::cin>>e; 
        if(e!=-1)
            chen(e, root); 
    } while (e!=-1);
}
// b) Traverse the tree in pre-order / in-order / post-order.
void  PreOrder(NODE *root){ //tim tien to
    if(root!=NULL){
        cout.width(4); 
        cout<<root->Data;
         PreOrder(root->left);
         PreOrder(root->right);
    }
}

void InOrder(NODE *root){   //tim trung to
    if(root!=NULL){
        cout.width(4);
       InOrder(root->left);
        cout<<root->Data; 
        cout.width(4);
       InOrder(root->right);
    }
}

void PosOrder(NODE *root){ //tim hau to
    if(root!=NULL){
        cout.width(4);
        PosOrder(root->left);
        PosOrder(root->right);
        cout.width(4);
        cout<<root->Data;

    }
}
// c) Find the smallest / largest element
int smallest(NODE*root)
{
    int t=0;
    if (root != NULL)
    {
        if (root->left == NULL)
        {
            return root->Data;
        }
        else
        {
            return smallest(root->left);
        }
    }
    else
        return t;
}
int largest(NODE *root)
{
    int t =0;
    if (root != NULL)
    {
        if (root->right == NULL)
        {
            return root->Data;
        }
        else
        {
            return largest(root->right);
        }
    }
    else
        return t;
}
// d)Find a given value
int Search(NODE *root, int x)
{
    int t=0;
    if (root != NULL)
    {
        if (root->Data == x)
            return root->Data;
        else if (root->Data < x)
            return Search(root->right, x);
        else
            return Search(root->left, x);
    }
    else
        return t;
}
// e)Count the number of nodes
int CountNode(NODE *root)
{
    if (root == NULL)
        return 0;
    else
        return (1+CountNode(root->left) + CountNode(root->right));
}
//Count the number of internal nodes
int Countleft(NODE *root)
{
    if (root != NULL)
    {
        if ((root->left == NULL) && (root->right == NULL))
            return 1;
        else
            return (Countleft(root->left) + Countleft(root->right));
    }
    else
        return 0;
}
int CountInternal(NODE *root)
{
    return CountNode(root) - Countleft(root);
}
// h) Delete a node from the tree.
int xoacuctrai(tree *root){
    int k;
    if((*root)->left==NULL){ 
        k=(*root)->Data; 
        (*root)= (*root)->right; 
        return k;
    }
    else return xoacuctrai(&(*root)->left); 
}

void xoa(int x, tree *root){
    if((*root)!=NULL)
        if(x<(*root)->Data) xoa(x,&(*root)->left);
        else  if (x>(*root)->Data) xoa(x,&(*root)->right);
        else
            if(((*root)->left==NULL)&&((*root)->right==NULL))
                (*root)=NULL;
            else 
                if((*root)->left==NULL) (*root)=(*root)->right;
                else
                    if((*root)->right==NULL) (*root)=(*root)->left;
                    else (*root)->Data=xoacuctrai(&(*root)->right);
}

int main(){
    khoi_tao_cay(&root);
     int n = 0;
     do
     {
        cout<<"\n1.Insert a node into the tree"<<endl;
        cout<<"2.Traverse the tree in pre-order / in-order / post-order"<<endl;
        cout<<"3.Delete a node from the tree."<<endl;
        cout<<"4.Find the smallest / largest element"<<endl;
        cout<<"5.Find a given value"<<endl;
        cout<<"6.Count the number of nodes"<<endl;
        cout<<"7.Count the number of internal nodes"<<endl;
        cout<<"0.end"<<endl;
        cout<<"lua chon: "<<endl;
        
        cin>>n;
        int x;
        if (n==1)
        {
            nhap_cay(&root);
        }
        else if(n==2){
                cout<<"PreOrder"<<endl;
                PreOrder(root);cout<<endl;
                cout<<"InOrder"<<endl;
                InOrder(root);cout<<endl;
                cout<<"PosOrder"<<endl;
                PosOrder(root);
        }
        else if(n==3){
                cout<<"Nhap phan tu can xoa"<<endl;
                cin>>x;
                cout<<"cay da xoa"<<endl;
                xoa(x,&root);
                InOrder(root);
                getch();
        }
        else if(n==4){
                cout<<"small: "<<smallest(root)<<endl;
                cout<<"large: "<<largest(root)<<endl;
        }
        else if(n==5){
                cout<<"Nhap cay can tim"<<endl;
                cin>>x;
                cout<<"phan tu can tim la: "<<Search(root,x)<<endl;
        }
        else if(n==6){
                cout<<"Count the number of nodes: "<<CountNode(root);
        }
        else if(n==7){
                cout<<"count left: "<<Countleft(root)<<endl;
                cout<<"Count the number of internal nodes: "<<CountInternal(root)<<endl;
        }
        
     } while (n !=0);

   
 }