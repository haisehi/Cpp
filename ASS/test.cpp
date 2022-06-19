#include <iostream>
using namespace std;
int main(){
    int n,x;
    int s=0;
    cout<<"nhap so phan tu trong mang :"<<endl;
    cin>>n;
    double arr[n];
    cout<<"nhap mang :"<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<"Xuat mang :"<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    //dem so phan tu trong mang
    //n = sizeof (mảng_name) / sizeof (mảng_name [0])
    //Đây là một công thức phổ biến để tìm số lượng phần tử trong
    x = sizeof(arr) / sizeof(arr[0]);
    cout<<"so phan thu trong mang: "<<x<<endl;
    for (size_t i = 0; i < n; i++)
    {
        if (arr[i]>0.01)
        {
            s=s+1;
        }
        
    }
    cout<<"so phan thu lon hon 0.01 trong mang: "<<s<<endl;
    

    
    return 1;
}