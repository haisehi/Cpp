#include <iostream>
#include<stack>
using namespace std;
// kiem tra dau ngoac
// Valid Parentheses
void solve(){
    string s;
    cin>>s;
    stack<char>st;
    for (char x : s)
    {
        if(x=='('){
            st.push(x);
        }
        else
        {
            if(st.empty()){
                cout<<"INVALID\n";
                return ;
            }
                else
                {
                    st.pop();
                }        
            }
        }
    if (st.empty())
    {
        cout<<"VALID\n";
    }
    else cout<<"INVALID\n";
    }

int main(){
    int t ;
    cin >>t;
    while (t--)
    {
        solve();
    }
    
    return 0;
}
