#include <iostream>
using namespace std;
//khởi tạo một struct
struct person
{
    string name;
    int age;
};
int main(){
    struct person p; //p là một biến của struct person
    //sử dụng dấu chấm để truy cập vào từng phần tử của struct person
    p.name ="huy";
    p.age =10;
    cout<<"Name person :"<<p.name<<endl;
    cout<<"Age person :"<<p.age<<endl;

    return 0;   
}
