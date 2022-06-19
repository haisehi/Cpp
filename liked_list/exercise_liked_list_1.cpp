#include <iostream>
#include <stdlib.h>
using namespace std;

struct Node 
{
    int x;
    Node *next;
};
Node*L,*k;

void xuat(Node*L){
    Node*P;
    P=L;
    while (P != NULL)
    {
        cout<<P->x<<"->";
        P=P->next;
    }
    cout<<"NULL"<<endl;
}

void Nhap(Node*&L,Node*&k){
    Node*p;
    char a;
    do
    {
        p = new Node;
        cout<<"Nhap gia tri x:";
        cin>>(p->x);
        p->next=NULL;
        if (L== NULL)
        {
            L=p;
            k=p;
        }
        else
        {
            k->next=p;
            k=p;
        }
        cout<<"Tiep tuc nhap (y/n)"<<endl;
        cin>>a;
        
    } while (a =='y'||a=='Y');
    
}

void insert(Node*&L,Node*&k)
{
    Node*p1;
    char a;
    do
    {
        p1= new Node;
        cout<<"Chen gia tri x:"<<endl;
        cin>>(p1->x);
        p1->next=NULL;
        if (L)
        {
            p1->next=k->next;
            k->next=p1;
            k=p1;
        }
        else
        {
            p1->next=NULL;
            k=p1;
        }
        cout<<"Tiep tuc chen"<<endl;
        cin>>a;
    } while (a=='y'||a=='Y');
    
}

void delete1(Node*&L,Node*&k,int y)
{
    Node*d;
    Node*P;
    while (P!=NULL)
    {
		if(P->x == y)
		{
			k->next = P->next;
			delete P;
			return;
		}
		k = P;  
    }
    P=P->next;
}

int main()
{
    L=NULL;
    k=NULL;
    int n =0;
    do
    {
        cout<<"1.Nhap"<<endl<<"2.xuat"<<endl<<"3.Chen"<<endl<<"4.xoa";
        cin>>n;
        if (n==1)
        {
            Nhap(L,k);
        }
        else if (n==2)
        {
            xuat(L);
        }
        else if (n==3)
        {
            insert(L,k);
        }
        else if (n==4)
        {
            int y;
            cout<<"Nhap so can xoa trong danh sach"<<endl;
            cin>>y;
            delete1(L,k,y);
        }
        
        
        
    } while (n !=0);
    


    return 0;
}
