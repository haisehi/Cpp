#include <iostream>
#include <cstdlib>
using namespace std;
int *A, n=5;
void Input(int *&A){
    A=new int;
    for(int i=0;i<n;i++)
        *(A+i)=rand();
}
void Print(int *A){
    for(int i=0;i<n;i++){
        cout<<A[i]<<endl;
    }
}
void Delete_(int A[],int &n,int vt) //goi ham delete
{
    for(int i=vt;i<n-1;i++) //gan i bang vt va cho i chay den n-1
    {
        A[i]=A[i+1]; //gan A[i+1] cho A[i]
    }
    (n)--;
 
}
 void Delete(int *A){
for(int i=0;i<n;i++)
    if((A[i]%2)!=0) //neu phan tu trong mangg A[i] chia phan du cua 2 khong bang 0 thi thuc hien cau lenh
    {
        Delete_(A,n,i);
        i--;
    }
}
int main()
{
    Input(A);
    Print(A);
    cout<<endl;
    Delete(A);
    Print(A);
   
    return 1;
    
}