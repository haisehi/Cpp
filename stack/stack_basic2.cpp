#include<iostream>
#include<stack>
using namespace std;
//chuyen doi so thanh nhi phan
int main(){
    int n ;
    cout<<"Nhap mot so"<<endl;
    cin >> n;
    stack<int> st;
    while (n != 0)
    {
        st.push(n %2);
        n/=2;
    }
    while (!st.empty())
    {
        cout<<st.top();
        st.pop();
    }
    
    return 0;
}