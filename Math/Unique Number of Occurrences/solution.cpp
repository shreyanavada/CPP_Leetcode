class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> m;

        for (int x : arr) {
            m[x]++;
        }

        unordered_set<int> seen;

        for (auto &p : m) {
            if (seen.count(p.second)) {
                return false;
            }
            seen.insert(p.second);
        }

        return true;
    }
};
