#include <bits/stdc++.h>
using namespace std;

// graph-adjacency-list
// space: O(N + 2 * E)
int main() {
  // numbers of nodes,edges
  int n, m;
  cin >> n >> m;

  vector<int> adj[n + 1];
  for (int i = 0; i < m; i++) {
    int u, v;
    cin >> u >> v;

    adj[u].push_back(v);
    adj[v].push_back(u);
  }

  return 0;
}

// //graph-adjacency-list-weighted
// //space: O(N + 2 * E)
// int main(){
//     // numbers of nodes,edges
//     int n,m;
//     cin>>n>>m;

//     vector<pair<int,int>>adj[n+1];
//     for(int i=0;i<m;i++){
//         int u,v,wt;
//         cin>>u>>v>>wt;

//         adj[u].push_back({v,wt});
//         adj[v].push_back({u,wt});
//     }

//     return 0;
// }

// //graph-adjacency-matrix
// //space:O(n * m)
// int main(){
//     int n,m;
//     cin>>n>>m;

//     int adj[n+1][m+1];

//     for(int i=0;i<m;i++){
//         int u,v;
//         cin>>u>>v;
//         adj[u][v] = 1;
//         adj[v][u] = 1;
//     }

//     return 0;
// }
