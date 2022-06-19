#include <iostream>
using namespace std;

void printPtr(int *ptr){
    cout<<ptr<<endl;
    cout<<*ptr<<endl;
}

int main(){
    int values=5;

    for (size_t i = 0; i <10; i++)
    {
        int *ptr =&values;
        printPtr(ptr+i);
    }
    

    // cout<<ptr<<'\n';
    // cout<<ptr+1<<'\n';
    // cout<<ptr+2<<'\n';
    // cout<<ptr+3<<'\n';

    system("pause");
    return 0;
}