#include<iostream>
#include<vector>
using namespace std;
struct Graph{
    int n;
    vector<vector<int>>adjList;
    vector<vector<int>>adjMatrix;
};
void intGraph(Graph &g,int n){
    g.n=n;
    g.adjList.assign(n,{});
    g.adjMatrix.assign(n,vector<int>(n,0));
}
void addEdges(Graph &g,int u,int v){
    g.adjList[u].push_back(v);
    g.adjMatrix[v].push_back(u);
    g.adjMatrix[u][v]=1;
    g.adjMatrix[v][u]=1;
}
void printList(Graph&g){
    for(int i=0;i<g.n;i++){
        cout<<i<<"->";
        for(int val:g.adjList[i]){
            cout<<val;
        }
    }
    cout<<endl;
}
void printMatrix(Graph&g){
    for(int i=0;i<g.n;i++){
        for(int j=0;j<g.n;j++){
            cout<<g.adjMatrix[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int n,m;
    cout<<"Enter the Number of Nodes(vertices)and edges:";
    cin>>n>>m;
    Graph g;
    intGraph(g,n);
    cout<<"Enter The Edges:";
    for(int i=0;i<m;i++){
        int u,v;
        addEdges(g,u,v);
    }
    printList(g);
    printMatrix(g);
}
