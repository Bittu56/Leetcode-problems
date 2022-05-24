// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

class Solution
{
  public:
    vector<int> findOrder(int n, int m, vector<vector<int>> prerequisites) 
    {
        //code here
        int count=0;
        queue<int>q;
        vector<vector<int>>adj(n,vector<int>());
        vector<int>indegree(n,0);
        for(vector<int> v:prerequisites)
        {
            adj[v[1]].push_back(v[0]);
            indegree[v[0]]++;
        }
        
        vector<int>ans;
        vector<bool>visited(n,false);
        for(int i=0;i<indegree.size();i++)
        {
            if(indegree[i]==0)
            {
            q.push(i);
            ans.push_back(i);
            visited[i]=true;
            count++;
            }
        }
        
        while(!q.empty())
        {
            int node= q.front();
            q.pop();

       vector<int>neighbour=adj[node];
       
       for(int neighbours:neighbour)
       {
           
           if(!visited[neighbours])
           {
            indegree[neighbours]--;
            if(indegree[neighbours]==0)
                {
            q.push(neighbours);
            ans.push_back(neighbours);
           visited[neighbours]=true;
           count++;
                 }
           }
       }
        }


        if(count!=n) return {};
          return ans;
    }
};

// { Driver Code Starts.

int check(int V, vector <int> &res, vector<int> adj[]) {
    vector<int> map(V, -1);
    for (int i = 0; i < V; i++) {
        map[res[i]] = i;
    }
    for (int i = 0; i < V; i++) {
        for (int v : adj[i]) {
            if (map[i] > map[v]) return 0;
        }
    }
    return 1;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n, m;
        cin >> n >> m;
        int u, v;

        vector<vector<int>> prerequisites;

        for (int i = 0; i < m; i++) {
            cin >> u >> v;
            prerequisites.push_back({u,v});
        }
        
        vector<int> adj[n];
        for (auto pre : prerequisites)
            adj[pre[1]].push_back(pre[0]);
        
        Solution obj;
        vector <int> res = obj.findOrder(n, m, prerequisites);
        if(!res.size())
            cout<<"No Ordering Possible"<<endl;
        else
            cout << check(n, res, adj) << endl;
    }
    
    return 0;
}  // } Driver Code Ends