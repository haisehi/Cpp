#include<iostream>
#include<vector>
using namespace std;
//Ma trận kề sang danh sách kề

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
            if (a[i][j])
            {
             adj[i].push_back(j);
            //  adj[j].push_back(i);   
            }           
        }
    }
    cout<<"Danh sach canh :\n";
    for (int i = 1; i <= n; i++)
    {
        cout<<i<<" : ";
        for (int x: adj[i])
        {
            cout<<x<<" "; 
        }
        cout<<"\n";
    }
}