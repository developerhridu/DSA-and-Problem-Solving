class Solution
{
public:
    vector<string> topKFrequent(vector<string> &words, int k)
    {
        map<string, int> m;
        for (auto &word : words)
        {
            m[word]++;
        }
        vector<pair<string, int>> w;
        for (auto &x : m)
        {
            w.push_back({x.first, x.second});
        }
        sort(w.begin(), w.end(), [&](pair<string, int> &a, pair<string, int> &b)
             {
            if (a.second == b.second)return a.first < b.first;
            return a.second > b.second; });
        vector<string> ans;
        for (int i = 0; i < k; i++)
        {
            ans.push_back(w[i].first);
        }
        return ans;
    }
};