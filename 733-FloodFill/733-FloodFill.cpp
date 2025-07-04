// Last updated: 7/4/2025, 6:30:41 PM
class Solution {
public:
    vector<vector<int>> arr;  // To store the result after flood fill
    vector<vector<int>> vis;  // To track visited cells

    // Directions for 4-connected neighbors: up, right, down, left
    int dx[4] = {-1, 0, 1, 0};
    int dy[4] = {0, 1, 0, -1};

    // Returns all valid neighbors of a pixel having the same original color
    vector<pair<int, int>> neighbors(pair<int, int> p, vector<vector<int>>& image, int originalColor) {
        vector<pair<int, int>> neighbours1;
        int n = image.size(), m = image[0].size();
        for (int k = 0; k < 4; k++) {
            int nx = p.first + dx[k];
            int ny = p.second + dy[k];

            // Check bounds and if neighbor has the same original color
            if (nx >= 0 && nx < n && ny >= 0 && ny < m && image[nx][ny] == originalColor) {
                neighbours1.push_back({nx, ny});
            }
        }
        return neighbours1;
    }

    // Breadth-First Search to perform the flood fill
    void bfs(vector<vector<int>>& image, int sr, int sc, int newColor) {
        int originalColor = image[sr][sc];

        // Optimization: If starting pixel already has the target color, do nothing
        if (originalColor == newColor) return;

        queue<pair<int, int>> q;
        q.push({sr, sc});
        vis[sr][sc] = 1;              // Mark as visited
        arr[sr][sc] = newColor;       // Change color of starting cell

        while (!q.empty()) {
            auto cur = q.front(); q.pop();

            // Check 4-connected neighbors
            for (auto i : neighbors(cur, image, originalColor)) {
                if (!vis[i.first][i.second]) {
                    vis[i.first][i.second] = 1;        // Mark neighbor as visited
                    arr[i.first][i.second] = newColor; // Change color
                    q.push(i);                         // Push neighbor to queue for further processing
                }
            }
        }
    }

    // Main function that initializes and starts the flood fill
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int n = image.size(), m = image[0].size();

        // Initialize visited array with 0s
        vis.assign(n, vector<int>(m, 0));

        // Copy input image to arr to apply color changes
        arr = image;

        // Start BFS from the source pixel
        bfs(image, sr, sc, color);

        return arr;  // Return the filled image
    }
};
