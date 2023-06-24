#include <iostream>

using namespace std;

int main()
{
    int nodes; cin >> nodes;
    int edges; cin >> edges;
    
    bool** sqr_matrix = new bool*[nodes];
    
    for(int i = 0; i < nodes; i++){
        sqr_matrix[i] = new bool[nodes]; 
    }
    
    for(int i = 0; i < nodes; i++){
        for(int j = 0; j < nodes; j++){
            sqr_matrix[i][j] = false;
        }
    }
    
    int p1, p2;
    for(int i = 0; i < edges; i++){
        cin >> p1 >> p2;
        sqr_matrix[p1][p2] = true;
        sqr_matrix[p2][p1] = true;
    }
    
    //test
    cout << endl;
    for(int i = 0; i < nodes; i++){
        for(int j = 0; j < nodes; j++){
            cout << sqr_matrix[i][j] << " ";
        }
        cout << endl;
    }
    
    
    return 0;
}
