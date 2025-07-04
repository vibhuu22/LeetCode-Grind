// Last updated: 7/4/2025, 6:30:37 PM
class Solution {
public:
    bool dfs(int node, vector<vector<int>>& graph, vector<int>& color) {
        if (color[node] > 0) return color[node] == 2;

        color[node] = 1;  // Mark as visiting
        for (int nei : graph[node]) {
            if (color[nei] == 2) continue; // already known to be safe
            if (color[nei] == 1 || !dfs(nei, graph, color)) {
                return false; // found a cycle or unsafe node
            }
        }
        color[node] = 2;  // Mark as safe
        return true;
    }

    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        int n = graph.size();
        vector<int> color(n, 0); // 0 = unvisited, 1 = visiting, 2 = safe
        vector<int> result;

        for (int i = 0; i < n; ++i) {
            if (dfs(i, graph, color)) {
                result.push_back(i);
            }
        }
        return result;
    }
};
