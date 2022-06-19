#include <iostream>
using namespace std;
int *A;
const int n = rand();
void intput(int *&A){
    A=new int[rand()];

    for (int i = 0; i < n; i++)
        *(A+i);
}
void outArr(int *&A){
    for (int i = 0; i < n; i++)
    {
       cout<<A[i]<<endl; 
    }
}
main(){
    intput(A);
    outArr(A);
    return 0;
}
