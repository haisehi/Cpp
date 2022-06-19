#include <iostream>
#include <stdlib.h>
using namespace std;
//----------struct()---------//
struct Stack
{
    char ht[30];
    float dtb;
    Stack *link;
};
Stack *T,*p;
//----------push()---------//
void Push(Stack*&T,Stack*p)
{
    p =new Stack;
    cout<<"Nhap hoc va ten"<<endl;
    cin>>p->ht;
    fflush(stdin);
    cout<<"Dien trung binh"<<endl;
    cin>>p->dtb;
    fflush(stdin);
    if (T==NULL)
    {
        p->link=NULL;
        T=p;
    }
    else
    {
        p->link=T;
        T=p;
    }
}
//----------pop()----------//
void Pop(Stack*&T){
    Stack *tmp;
    tmp=T;
    if (tmp!=NULL)
        cout<<"\n"<<tmp->ht<<"\t"<<tmp->dtb;
    T=tmp->link;
    free(tmp);
}
//----------input()---------//
void input(Stack*&T){
    char ch;
    do
    {
        Push(T,p);
        cout<<"Tiep tuc"<<endl;
        fflush(stdin);
        cin>>ch;
        
    } while (ch=='t');
    
}
//----------output()---------//
void output(Stack*&T){
    Stack *p;
    p=T;
    while (T!=NULL)
    {
        Pop(T);
        cout<<"\n"<<"--------------"<<endl;
    }
}
int main(){
    T=NULL;
    input(T);
    output(T);
    return 1;
}