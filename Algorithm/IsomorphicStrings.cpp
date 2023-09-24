class Solution
{
public:
    bool isIsomorphic(string s, string t)
    {
        int m1[256] = {0};
        int m2[256] = {0};
        if (s.size() != t.size())
            return false;
        for (int i = 0; i < s.size(); i++)
        {
            if (!m1[s[i]] and !m2[t[i]])
            {
                m1[s[i]] = t[i];
                m2[t[i]] = s[i];
            }
            else if (m1[s[i]] != t[i])
                return false;
        }
        return true;
    }
};