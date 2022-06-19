#include <iostream>
#include<stdlib.h>
using namespace std;
struct SN
{
    int num;
    SN *link;
};
SN*L,*k;

void xuat(SN*L){
    SN*P;
    P=L;
    while (P !=NULL)
    {
        cout<<P->num<<"->";
        P=P->link;
    }
    cout<<"NuLL"<<endl; 
}
void nhap(SN*&L,SN*&k){
    SN*p;
    char a;
    do
    {
        p=new SN;
        cout<<"x =";
        cin>>(p->num);
        p->link=NULL;
        if (L==NULL){
            L=p;
            k=p;
        }else
        {
            k->link=p;
            k=p;

        }
        cout<<"Nhap tiep?(y/n)";
        cin>>a;
}while(a=='Y'||a=='y');
}
int main(){
    L=NULL;
    k=NULL;
    nhap(L,k);
    cout<<"\nDanh sach vua tao:"<<endl;
    cout<<"L->";
    xuat(L);
    return 0;
}