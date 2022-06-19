#include <iostream>
using namespace std;
int main(){
    const int arraylenght =4;
    int array[arraylenght]={5,8,2,7};
    for (int *ptr =array;ptr < array+arraylenght;ptr++)
    {
        cout<<ptr<<endl;
        cout<<*ptr<<endl;
    }
    system("pause");
    return 0;
}