#include <iostream>
using namespace std;
int main(){
    //cấp phát động một số nguyên và gán địa chỉ cho con trỏ ptr nắm giữ
    //new int; // cấp phát động một số nguyên (kiểu dữ liệu có thể thay đổi)
    int *ptr = new int ;
    *ptr = 10; // gán 10 cho vùng nhớ vừa được cấp phát

    delete ptr; // trả lại vùng nhớ ptr đang trỏ đến cho hệ điều hành.Đối với các biến đơn (không phải mảng)
    ptr =nullptr; // gán ptr thành con trỏ null

}