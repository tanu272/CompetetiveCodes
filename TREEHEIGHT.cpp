#include <bits/stdc++.h> 
#define MAX 100001 
using namespace std;
typedef long long int llt; 
  
// Adjacency list to 
// store N-ary tree 
vector<llt> adj[MAX]; 
  
// Build tree in tree in O(n) 
llt build_tree(llt arr[], llt n) 
{ 
    llt root_index = 0; 
  
    // Iterate for all nodes 
    for (llt i = 0; i < n; i++) { 
  
        // if root node, store index 
        if (arr[i] == -1) 
            root_index = i; 
  
        else { 
            adj[i].push_back(arr[i]); 
            adj[arr[i]].push_back(i); 
        } 
    } 
    return root_index; 
} 
  
// Applying BFS 
llt BFS(llt start) 
{ 
    // map is used as visited array 
    map<llt, llt> vis; 
  
    queue<pair<llt, llt> > q; 
    llt max_level_reached = 0; 
  
    // height of root node is zero 
    q.push({ start, 0 }); 
  
    // p.first denotes node in adjacency list 
    // p.second denotes level of p.first 
    pair<llt, llt> p; 
  
    while (!q.empty()) { 
  
        p = q.front(); 
        vis[p.first] = 1; 
  
        // store the maximum level reached 
        max_level_reached = max(max_level_reached, 
                                p.second); 
  
        q.pop(); 
  
        for (llt i = 0; i < adj[p.first].size(); i++) 
  
            // adding 1 to previous level 
            // stored on node p.first 
            // which is parent of node adj[p.first][i] 
            // if adj[p.first][i] is not visited 
            if (!vis[adj[p.first][i]]) 
                q.push({ adj[p.first][i], p.second + 1 }); 
    } 
  
    return max_level_reached+1; 
} 
  
// Driver Function 
int main() 
{ 
    // node 0 to node n-1 
    llt parent[100000], n, i;
    cin>>n;
    for(i=0 ; i < n; i++)
    {
        cin>>parent[i];
    }
  
    llt root_index = build_tree(parent, n); 
  
    llt ma = BFS(root_index); 
    cout << ma; 
    return 0; 
} 
