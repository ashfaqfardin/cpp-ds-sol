#include <bits/stdc++.h>

using namespace std;

const int N = 1e5+2; //infinity
bool visited[N] = {false};
vector<int> adj[N];

void dfs(int source){
    visited[source] = 1;
    cout << "Node " << source << " is visited"<< endl;
    for(int i = 0; i < adj[source].size(); i++){
        int next = adj[source][i];
        if(visited[next] == 0){
            dfs(next);
        }
    }
}

int main()
{
    int numNodes; cin >> numNodes;
    int numEdges; cin >> numEdges;
    
    int edgeA, edgeB;
    for(int i = 0; i < numEdges; i++){
        cin >> edgeA;
        cin >> edgeB;
        
        adj[edgeA].push_back(edgeB);
        adj[edgeB].push_back(edgeA);
    }
    
    dfs(0);
    
    
    return 0;
}
