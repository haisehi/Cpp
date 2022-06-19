#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    switch (n)
    {
    case 1:
        cout<<"I";
        break;
    case 2:
        cout<<"II";
        break;
    case 3:
        cout<<"III";
        break;            
    case 4:
        cout<<"IV";
        break;
    case 5:
        cout<<"V";
        break;
    case 9:
        cout<<"IX";
        break;
    case 10:
        cout<<"X";
        break;
    case 40:
        cout<<"XL";
        break;
    case 50:
        cout<<"L";
        break;
    case 90:
        cout<<"XC";
        break;
    case 100:
        cout<<"C";
        break;
    case 400:
        cout<<"CD";
        break;
    case 500:
        cout<<"D";
        break;
    case 900:
        cout<<"CM";
        break;
    case 1000:
        cout<<"M";
        break; 
    default:
        cout << "Choose again";                                                                                   
    }
    return 0;
}