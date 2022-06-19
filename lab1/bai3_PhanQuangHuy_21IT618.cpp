#include <iostream>
using namespace std;
int ucln(int a, int b) {
    if (b == 0) return a;
    if (a%b == 0) return b;
    return ucln(b, a % b);
}

int bcnn(int a,int b){
    return (a*b)/ucln(a, b);
}
int main(){
    int a,b;
    cin>>a;
    cin>>b;
    cout<<"UCLN "<<ucln(a,b)<<endl;
    cout<<"BCNN "<<bcnn(a,b)<<endl;
}