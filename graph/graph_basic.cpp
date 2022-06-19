#include <iostream>
using namespace std;
//Danh sách cạnh sang ma trận kề
int n,m; //n la so luong dinh va m la so luong canh
int a[1001][1001];
int main(){
    cin >>n>>m; //nhap so luong dinh va so luong canh
    for (int i = 0; i < m; i++) // duyet m canh
    {
        int x,y;
        cin>>x>>y; //nhap 2 dinh x ,y cua canh m
        a[x][y]=a[y][x]=1;
    }
    for (int i = 0; i <=n; i++)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    for (int i = 1; i <= n; i++) //liet ke ma tran ke ra 
    {
        cout<<i<<" ";
        for (int j = 1; j<=n; j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}