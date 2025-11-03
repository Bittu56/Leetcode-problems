class Solution 
{
public:
    int countUnguarded(int m, int n, vector<vector<int>>& guards, vector<vector<int>>& walls) 
    {

        // Step 1: Initialize the grid
        // 0 → unguarded, 1 → guarded, 2 → occupied (guard or wall)
        vector<vector<int>> grid(m, vector<int>(n, 0));

        // Step 2: Mark guards and walls on the grid
        for (auto& g : guards)
        {
            grid[g[0]][g[1]] = 2;
        } 

        for (auto& w : walls)
        {
            grid[w[0]][w[1]] = 2;
        } 

        // Step 3: Define directions (up, right, down, left)
        int dr[4] = {-1, 0, 1, 0};
        int dc[4] = {0, 1, 0, -1};

        // Step 4: Simulate guard vision (ray propagation)
        for (auto& g : guards) 
        {
            int gr = g[0], gc = g[1];
            for (int d = 0; d < 4; ++d) 
            {
                int r = gr + dr[d], c = gc + dc[d];
                while (r >= 0 && r < m && c >= 0 && c < n && grid[r][c] < 2) 
                {
                    grid[r][c] = 1; // mark as guarded
                    r += dr[d];
                    c += dc[d];
                }
            }
        }

        // Step 5: Count unguarded cells
        int count = 0;
        for (int i = 0; i < m; ++i)
        {
            for (int j = 0; j < n; ++j)
            {
                if (grid[i][j] == 0)
                {
                    count++;
                } 

            }
        }

        // Step 6: Return the result
        return count;
    }
};