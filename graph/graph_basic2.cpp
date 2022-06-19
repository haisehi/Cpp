#include<iostream>
#include<vector>
using namespace std;
//ma tran ke sang danh sach canh

int n,m;
vector<int> adj[1001];
vector<pair<int,int>>edge;
int a[1001][1001];
int main(){
    cout<<"Nhap so dinh cua ma tran :\n";
    cin >>n; //nhap so dinh cua ma tran
    //nhap ma tran ke
    cout<<"nhap ma tran :\n";
    for (int i = 0; i <=n; i++)
    {
        cout<<i<<"  ";
    }
    cout<<endl;
    for (int i = 1; i <= n; i++)
    {
        cout<<i<<"| ";
        for (int j = 1; j <=n; j++)
        {
            cin>>a[i][j];
        }
        cout<<endl;
    }
    //duyet ma tran ke
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <=n; j++)
        {
            if (a[i][j] &&i <j)
            {
             edge.push_back({i,j});   
            }           
        }
    }
    cout<<"Danh sach canh :\n";
    for(auto it : edge){
        cout<<it.first<<" "<<it.second << endl;
    }
}