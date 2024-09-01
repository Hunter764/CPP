#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

void dfs(int index, const vector<int>& p, const string& s, unordered_set<int>& visited, vector<int>& result, int& blackCount) {
    if (visited.count(index)) return; // If already visited, return
    visited.insert(index); // Mark this index as visited
    if (s[index] == '0') blackCount++; // Count black integers
    dfs(p[index] - 1, p, s, visited, result, blackCount); // Move to the next index according to permutation
}

int main() {
    int t;
    cin >> t; // Read number of test cases
    while (t--) {
        int n;
        cin >> n; // Read size of permutation
        vector<int> p(n);
        for (int i = 0; i < n; i++) {
            cin >> p[i]; // Read permutation
        }
        string s;
        cin >> s; // Read color string

        vector<int> result(n, 0); // Result array to store F(i)
        vector<bool> visited(n, false); // Visited array to track reachable indices

        for (int i = 0; i < n; i++) {
            if (!visited[i]) { // If not visited, perform DFS
                unordered_set<int> currentVisited; // Set to track current reachable indices
                int blackCount = 0; // Count of black integers in this component
                dfs(i, p, s, currentVisited, result, blackCount); // DFS to find all reachable indices
                for (int idx : currentVisited) {
                    result[idx] = blackCount; // Set the count for all reachable indices
                }
            }
        }

        for (int i = 0; i < n; i++) {
            cout << result[i] << " "; // Output the result for this test case
        }
        cout << endl; // New line after each test case
    }
    return 0;
}