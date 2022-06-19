#include <iostream>
using namespace std;
int main(){
    // int arr[4]={5,8,2,7};
    // //in ra gia tri cua bien arr
    // cout<<"The array has value : "<<arr<<endl;
    // //in ra dia chi cua bien array 
    // cout<<"The array has address : "<<&arr<<endl;
    // //in ra dia chi cua phan tu arr[0]
    // cout<<"Element 0 has address : "<<&arr[0]<<endl;

    // system("pause");
    // return 0;
    int arr[4]={5,8,2,7};
    // toan tu con tro tra ve phan tu dau tien :arr[0]
    cout<<*arr<<endl; //5
    //khai bao con tro ptr vao mang arr
    int *ptr =arr;
    cout<<*(ptr)<<endl; //5
    char name[]="kteam"; //mang char
    cout<<*name<<endl;//k

    system("pause");
    return 0;

}