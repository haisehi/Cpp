#include <iostream>
using namespace std;

int main(){
    // int x =10;
    // cout<<x<<"\n";
    // cout<<&x<<"\n"; //hiển thị ra địa chỉ của biến x
    // cout<<*&x<<"\n";//hiển thị ra giá trị cuả địa chỉ bộ nhớ của biến x
    // *&x = x
    // *&x =20;
    // cout<<x<<endl;//hiển thị ra giá trị của biến x

    // system("pause");
    // return 0;
//////////////////////////////////////////////////////////////////////////////
    //các cách khai báo con trỏ 
    // int x=10;
    // int *iptr; //con trỏ đến địa chỉ chứa giá trị số nguyên (*iptr = *&x)
    // double *dptr; //con trỏ đến địa chỉ chứa giá trị số thực
    // int *iptr2, *iptr3;//khai báo cùng một lúc 2 con trỏ
//////////////////////////////////////////////////////////////////////////////
    // int value = 10;
    // int *ptr = &value; //khởi tạo con trỏ ptr là địa chỉ biến value

    // cout << &value <<endl; //in địa chỉ của biến value
    // cout << ptr <<endl; //in địa chỉ của con trỏ ptr đang giữ (tương đương &value)
    // cout << *ptr <<endl; //hiển thị ra giá trị địa chỉ mà con trỏ đang giữ (tương đương value)
    // *ptr =100;
    // cout<<value<<endl;
//////////////////////////////////////////////////////////////////////////////
    int ivalue = 5;
    double dvalue = 7;

    int *iptr=&ivalue; //ok
    double *dptr=&dvalue; //ok

    //iptr = &dvalue ;sai - con trỏ int không thể trỏ đến địa chỉ biến double
    //dptr = &ivalue ;sai - con trỏ double không thể trỏ đến địa chỉ biến int 

    //int *ptr = 5 ;//sai - con trỏ chỉ có thể giữ 1 địa chỉ
    //double *dptr = 0xf11dff894; //sai

}