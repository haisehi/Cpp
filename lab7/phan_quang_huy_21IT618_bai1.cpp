#include <iostream>
#include<vector>
#include <cstring>
#include<queue>
using namespace std;
// BFS,DFS
int n,m; //n : dinh, m: canh
vector<int> adj[1001]; //dung de luu danh sach ke
vector<int> adj2[1001];
bool visited[1001]; //dung de check cac dinh da duoc duyet qua hay chua
bool visited2[1001]; 
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
        adj2[x].push_back(y);
        adj2[y].push_back(x);
    }
    memset(visited,false,sizeof(visited));
    memset(visited2,false,sizeof(visited2));
}
//bfs
void bfs(int u){
    //khoi tao
    queue<int>q;
    q.push(u); //them dinh u vao trong hang doi
    visited[u] = true;
    //buoc lap
    cout<<"BFS : ";
    while(!q.empty()){
        //lay ra dinh o dau hang doi
        int v = q.front();
        q.pop();
        cout<<v<<" ";
        //duyet cac dinh ke voi v ma chua duoc tham va day vao trong hang doi
        for(int x : adj[v]){
            if(!visited[x]){
                q.push(x); // day vao trong hang doi
                visited[x]= true; 
            }
        }
    }
}
void DFS(int d){
    cout<<d<<" ";
    visited2[d]=true;
    for(int f : adj2[d]){
        if(!visited2[f]){
            DFS(f);
        }
    }
}

int main(){
    input();
    // a
    bfs(1);
    // b
    DFS(1);
}
