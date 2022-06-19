#include <iostream>
using namespace std;

double tong(double a , double b){
    double s=0;
    return (s=a+b);
}
double hieu(double a, double b){
    double s1=0;
    return (s1=a-b);
}
double tich(double a,double b){
    double s2=0;
    return (s2=a*b);
}
double thuong(double a,double b){
    double s3=0;
    return (s3=a/b);
}

int main(){
    double a,b;
    cout<<"nhap a va b"<<endl;
    cin>>a;
    cin>>b;
    cout<<"tong 2 so "<<tong(a,b)<<endl;
    cout<<"hieu 2 so "<<hieu(a,b)<<endl;
    cout<<"tich 2 so "<<tich(a,b)<<endl;
    cout<<"thuong 2 so "<<thuong(a,b)<<endl;
    return 0;
}