#include <iostream>
#include<vector>
#include <cstring>
#include<queue>
using namespace std;
// DFS
int n,m; //n : dinh, m: canh
vector<int> adj[1001]; //dung de luu danh sach ke
bool visited[1001]; //dung de check cac dinh da duoc duyet qua hay chua
//ham nhap
void input(){
    cout<<"Nhap so dinh: ";
    cin >> n; //nhap dinh va canh
    cout<<"Nhap so canh: ";
    cin>>m;
    cout<<endl;
    for (int i = 0; i < m; i++)
    {
        int x ,y;
        cout<<"Nhap cac canh thu: "<<i<<endl;
        cin>>x>>y;
        //them phan tu moi vao cuoi vector
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    memset(visited,false,sizeof(visited));
}
void DFS(int u){
    cout<<u<<" ";
    visited[u]=true;
    for(int v : adj[u]){
        if(!visited[v]){
            DFS(v);
        }
    }
}


int main(){
    input();
    DFS(1);
}
