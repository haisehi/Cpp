#include <iostream>
using namespace std;
double arr[1000];

void input(double arr[],int n){
        for (int i = 0; i <n; i++)
    {
        cin>>arr[i];
    }
}
//cau1/a
double A(int n ,double s1,double arr[]){
    double s=0;
    if (n<1000)
    {
        for (int i = 0; i <n; i++)//tinh tong cac phan tu dang co trong mang
        {
            if (i>=0)
            {
                s=s+arr[i];
            }     
        }
    }
    return (s1=s/n);//tinh trung binh cac phan tu co trong mang
}
//cau1/b
int B1(int n,int s3,double arr[]){
    int s2=0;    
    int n1=0;
    if (n<1000)
    {
        for (int i = 0; i <n; i++)//tinh tong so phan tu lon hon 0.01 co trong mang
        {
            if (arr[i]>0.01)
            {
                s2=s2+arr[i];
            }     
        }
    for (size_t i = 0; i < n; i++)//dem so phan tu lon hon 0.01 co trong mot mang
    {
        if (arr[i]>0.01)
        {
            n1=n1+1;
        }
        
    }
    }
    return (s3=s2/n1);//tinh trung binh tong cac phan tu co trong mot mang
}
double B2(int n,double s5,double arr[]){
    double s4=0;   
    int n2=0; 
    if (n<1000)
    {
        for (int i = 0; i <n; i++)//tinh tong so phan tu nho hon 0.01 co trong mang
        {
            if (arr[i]<0.01)
            {
                s4=s4+arr[i];
            }     
        }
        for (size_t i = 0; i < n; i++)//dem so phan tu nho hon 0.01 co trong mot mang
    {
            if (arr[i]<0.01)
            {
            n2=n2+1;
            }
        
    }
    }
    return (s5=s4/n2);//tinh trung binh tong cac phan tu co trong mot mang
}

int main(){
    int n;
    double s1=0;
    int s3=0;
    double s5=0;
    cout<<"Nhap mang"<<endl;
    cin>>n;
    double arr[n];
    input(arr,n);
    cout<<"average ="<<A(n,s1,arr)<<endl;
    cout<<"average1 ="<<B1(n,s3,arr)<<endl;
    cout<<"average2 ="<<B2(n,s5,arr)<<endl;
    return 1;
}