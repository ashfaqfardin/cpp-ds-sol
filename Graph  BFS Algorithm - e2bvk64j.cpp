#include <bits/stdc++.h>

using namespace std;

const int N = 1e5+2; //infinity
bool visited[N] = {false};
vector<int> adj[N];

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
    
    queue<int> que;
    que.push(1);
    visited[1] = true;
    
    while(!que.empty()){
        int node = que.front();
        
        que.pop();
        cout << node << endl;
        
        vector<int> :: iterator it;
        for(it = adj[node].begin(); it != adj[node].end(); it++){
            if(!visited[*it]){
                visited[*it] = true;
                que.push(*it);
            }
        }
    }
    
    return 0;
}
