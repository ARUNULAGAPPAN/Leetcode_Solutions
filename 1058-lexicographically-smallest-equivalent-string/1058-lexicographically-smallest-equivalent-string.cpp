class Solution {
public:
    // DFS function to find the smallest character in a connected component
    char dfs(unordered_map<char, vector<char>>& adj, char current, vector<int>& visited) {
        visited[current - 'a'] = 1;  // Mark current node as visited
        char minChar = current;      // Initialize minimum character as the current one

        for (char neighbor : adj[current]) {      // Traverse all neighbors
            if (visited[neighbor - 'a'] == 0) {   // If not visited
                char temp = dfs(adj, neighbor, visited);  // Recursively visit
                minChar = min(minChar, temp);    // Track the smallest character
            }
        }
        return minChar;  // Return the smallest character found in the component
    }

    string smallestEquivalentString(string s1, string s2, string baseStr) {
        unordered_map<char, vector<char>> adj;  // Adjacency list to represent equivalence graph

        // Step 1: Build the equivalence graph from s1 and s2
        for (int i = 0; i < s1.length(); ++i) {
            char u = s1[i];  // character from s1
            char v = s2[i];  // corresponding character from s2
            adj[u].push_back(v);  // Make them connected (bidirectional)
            adj[v].push_back(u);
        }

        string result;

        // Step 2: For each character in baseStr, find its smallest equivalent
        for (char ch : baseStr) {
            vector<int> visited(26, 0);  // 26 letters a-z
            char smallest = dfs(adj, ch, visited);  // Get smallest character in its group
            result.push_back(smallest);  // Append it to the result string
        }

        return result;  // Return the final converted string
    }
};
