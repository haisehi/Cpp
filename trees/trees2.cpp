#include <iostream>
#include <conio.h>
#include <stdio.h>
using namespace std;

typedef int element_type;
typedef struct node  {
    element_type element;   //tao du lieu cua cay
    struct node *left, *right; //tao con tro trai , phai
}NODE;

 typedef NODE *tree;
 NODE *root;

 void khoi_tao_cay(NODE ** root){
     *root =NULL;   //cho con tro ban dau la gia tri rongg
 }

 void chen(int e,NODE **root){
     NODE *tam; //tao con tro tam
     tam = new NODE;    
     tam -> element = e;
     tam -> left =NULL; //cho con tro left ban dau la rong
     tam -> right =NULL; //cho con tro right ban dau la rong
     if(*root==NULL) //neu con tro root rong thi thi gan root cho tam
        *root=tam; 
        else if(tam->element<(*root)->element)
             if((*root)->left) 
                chen(e, &(*root)->left); //neu con tam lon hon root thi con se gan ben trai
             else (*root)->left=tam;
             else
                if(tam->element>(*root)->element)
                    if((*root)->right) 
                        chen(e, &(*root)->right); //neu con tam nho hon root thi con se gan ben phai
                    else
                        (*root)->right=tam;
                else std::cout<<"Trung";
 }

 void nhap_cay(NODE **root){
    element_type e;
    do{
        std::cout<<"\nNhap element (-1 de ket thuc) : ";
        std::cin>>e; //nhap gia tri vao cay
        if(e!=-1)
            chen(e, root); 
    } while (e!=-1);
}

 int timdequy(int x,NODE *root){
    int timthay=0;
    if((root==NULL)||(timthay))
        return timthay;
    else{
        if(x<root->element) return timdequy(x,root->left); //neu x be hon goc thi duyet qua ben trai
        else if(x>root->element) return timdequy(x,root->right);   //neu x lon hon goc thi duyet qua ben phai
        else return 1;
    }
}


int tim(int x,NODE *root){
    int t=0;
    while((root!=NULL)&&(!t))
    if (root->element==x) t=1;
    else if(x<root->element) root=root->left;
    else root=root->right;
    return t;
}


int xoacuctrai(tree *root){
    int k;
    if((*root)->left==NULL){ //neu root trai bang null thi 
        k=(*root)->element; //gan k phan tu goc
        (*root)= (*root)->right; //gan root bang root ben phai
        return k;
    }
    else return xoacuctrai(&(*root)->left); //xoa cuc trai
}

void xoa(int x, tree *root){
    if((*root)!=NULL)
        if(x<(*root)->element) xoa(x,&(*root)->left);
        else  if (x>(*root)->element) xoa(x,&(*root)->right);
        else
            if(((*root)->left==NULL)&&((*root)->right==NULL))
                (*root)=NULL;
            else 
                if((*root)->left==NULL) (*root)=(*root)->right;
                else
                    if((*root)->right==NULL) (*root)=(*root)->left;
                    else (*root)->element=xoacuctrai(&(*root)->right);
}

void NLR(NODE *root){ //tim tien to
    if(root!=NULL){
        cout.width(4); //moi gia tri cach ra 4 phan tu 
        cout<<root->element;
        NLR(root->left);
        NLR(root->right);
    }
}

void LNR(NODE *root){   //tim trung to
    if(root!=NULL){
        cout.width(4);
        LNR(root->left);
        cout<<root->element;
        cout.width(4);
        LNR(root->right);
    }
}

void RNL(NODE *root){ //tim hau to
    if(root!=NULL){
        RNL(root->right);
        cout.width(4);
        cout<<root->element;
        cout.width(4);
        RNL(root->left);
    }
}


 int main(){
    khoi_tao_cay(&root);
     int n = 0;
     do
     {
        cout<<"\n1.Nhap cay"<<endl;
        cout<<"2.Duyet cay NLR"<<endl;
        cout<<"3.Duyet cay LNR"<<endl;
        cout<<"4.Duyet cay RNL"<<endl;
        cout<<"5.Nhap gia tri can tim"<<endl;
        cout<<"6.Tim de quy"<<endl;
        cout<<"7.Nhap gia tri can xoa"<<endl;
        cout<<"8.Cay da xoa (duyet cay NLR)"<<endl;
        cout<<"lua chon: "<<endl;
        cin>>n;
        int x;
        if (n==1)
        {
            nhap_cay(&root);
        }
        else if(n==2){
                NLR(root);
        }
        else if(n==3){
                LNR(root);
        }
        else if(n==4){
                RNL(root);
        }
        else if(n==5){
                cin>>x;
                tim(x,root);
        }
        else if(n==6){
                if(timdequy(x,root)) cout<<"co x";
                else cout<<"ko co";
        }
        else if(n==7){
                cin>>x;
                xoa(x,&root);
        }
        else if(n==8){
                NLR(root);
                getch();
        }
        
     } while (n !=0);

   
 }