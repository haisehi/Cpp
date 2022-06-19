#include <iostream>
using namespace std;

struct Node 
{
    string Madoanvien;
    string Hovatendoanvien;
    string Namvaodoan;
    Node*next;
};
Node *L,*k;


void xuat(Node*L,Node*k){
    Node*P;
    P=L;
    while (P!=NULL)
    {
        cout<<"Ma doan vien:"<<(P->Madoanvien)<<endl;
        cout<<"Ho va ten doan vien:"<<(P->Hovatendoanvien)<<endl;
        cout<<"Nam vao doan:"<<(P->Namvaodoan)<<endl;
        P=P->next;
        cout<<"\n";
    }
    
}

void chen(Node*&L,Node*&k){
    Node *p1;
    char a;
    do
    {
        p1 =new Node;
        cout<<"Nhap ma doan vien:"<<endl;
        cin.ignore();
        getline(cin,p1->Madoanvien);
        fflush(stdin);
        cout<<"Nhap ho va ten doan vien:"<<endl;
        getline(cin,p1->Hovatendoanvien);
        fflush(stdin);
        cout<<"Nhap nam vao doan:"<<endl;
        getline(cin,p1->Namvaodoan);
        fflush(stdin);
        p1->next=NULL;
        if (L==NULL)
        {
            p1->next=NULL;
            p1=k;
        }
        else
        {
            p1->next=k->next;
            k->next=p1;
        }
        cout<<"Tiep tuc nhap:(Y/y)"<<endl;
        fflush(stdin);
        cin>>a;
    } while (a =='y' ||a =='Y');
}


void Nhap(Node*&L,Node*&k){
    Node*p;
    char a;
    do
    {
        p =new Node;
        cout<<"Nhap ma doan vien:"<<endl;
        cin.ignore();
        getline(cin,p->Madoanvien);
        fflush(stdin);
        cout<<"Nhap ho va ten doan vien:"<<endl;
        getline(cin,p->Hovatendoanvien);
        fflush(stdin);
        cout<<"Nhap nam vao doan:"<<endl;
        getline(cin,p->Namvaodoan);
        fflush(stdin);
        p->next=NULL;
        if (L==NULL)
        {
            L=p;
            k=p;
        }
        else
        {
            k->next=p;
            k=p;
        }
        cout<<"Tiep tuc nhap:(Y/y)"<<endl;
        fflush(stdin);
        cin>>a;
    } while (a =='y' ||a =='Y');
}

int main(){
    L=NULL;
    k=NULL;
    int n =0;
    do
    {
        cout<<"1.Nhap"<<endl;
        cout<<"2.Xuat"<<endl;
        cout<<"3.chen"<<endl;

        cout<<"lua chon"<<endl;
        cin>>n;
        if (n==1)
        {
            Nhap(L,k);
        }
        else if (n==2)
        {
            xuat(L,k);
        }
        else if (n==3)
        {
            chen(L,k);
        }
        
        
        
    } while (n!=0);
    
}


