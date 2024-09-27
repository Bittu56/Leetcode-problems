class Solution {
public:
    //Using Kahn's algorithm
    vector<int> topologicalSortCheck(unordered_map<int, vector<int>> &adj, int n, vector<int> &indegree) {
        queue<int> que;
        int count = 0;
        vector<int> result;
        
        for(int i = 0; i<n; i++) {
            if(indegree[i] == 0) {
                result.push_back(i);
                count++;
                que.push(i);
            }
        }
        
        
        while(!que.empty()) {
            int u = que.front();
            que.pop();
            
            for(int &v : adj[u]) {
                
                indegree[v]--;
                
                if(indegree[v] == 0) {
                    result.push_back(v);
                    count++;
                    que.push(v);
                }
                
            }
            
        }
        
        if(count != n)
            return {};
        
        return result;
    }
    
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        unordered_map<int, vector<int>> adj;
        
        vector<int> indegree(numCourses, 0); //kahn's algo
        
        for(auto &vec : prerequisites) {
            int a = vec[0];
            int b = vec[1];
            
            //b ---> a
            adj[b].push_back(a);
            
            //arrow ja raha hai 'a' me
            indegree[a]++;
        }
        
        
        //if cycle is present, not possible
        
        return topologicalSortCheck(adj, numCourses, indegree);
    }
};
