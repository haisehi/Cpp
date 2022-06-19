#include<iostream>
using namespace std;

struct NODE {
    int Data;
    NODE *left,*right;
};
 typedef NODE *tree;
 NODE *root;
void tao_cay(NODE**root){
    *root=NULL;
}
void chen(int e,NODE**root){
    NODE *tam; 
    tam = new NODE;
    NODE*max;
    max=new NODE;
    tam -> Data = e;
    tam -> left =NULL; 
    tam -> right =NULL;
    if(*root ==NULL) 
        *root = tam;
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

int main(){

}
