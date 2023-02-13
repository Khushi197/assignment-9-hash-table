https://leetcode.com/problems/find-players-with-zero-or-one-losses/submissions/897003777/
class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        unordered_map<int, int> mp;
        for (auto &match : matches) {
            mp[match[1]]++;
            int a = mp[match[0]];
        }
        vector<vector<int>> result;
        result.push_back({});
        result.push_back({});
        for (auto p : mp) {
            if (p.second == 0 or p.second == 1) {
                result[p.second].push_back(p.first);
            }
        }
        sort(result[0].begin(), result[0].end());
        sort(result[1].begin(), result[1].end());
        return result;
    }
};
