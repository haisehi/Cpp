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
void Delete_(int A[],int &n,int vt)
{
    for(int i=vt;i<n-1;i++)
    {
        A[i]=A[i+1];
    }
    (n)--;
 
}
 void Delete(int *A){
for(int i=0;i<n;i++)
    if((A[i]%2)!=0)
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