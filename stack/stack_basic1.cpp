#include <iostream>
#include<stack>
using namespace std;

// LIFO :last in first out
//push : them vao
//pop : lay ra
//top : lay ra phan tu o dinh ngan sap
// size :tra ve so luong phan tu trong ngang xep
// empty : kiem tra ngan xep co rong hay khong
// o(1) : do phuc tap

int main(){
    // khai bao mot stack
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    cout<<st.top()<<endl;
    st.pop();
    cout<<st.top()<<endl;
    cout<<st.size()<<endl;
    return 0;
}