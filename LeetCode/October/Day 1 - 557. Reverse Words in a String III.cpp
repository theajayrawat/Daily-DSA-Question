// https://leetcode.com/problems/reverse-words-in-a-string-iii
// TC: O(N)
// SC: O(N)

class Solution
{
public:
    string reverseWords(string s)
    {
        stack<char> st;
        string res;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == ' ')
            {
                while (!st.empty())
                {
                    res += st.top();
                    st.pop();
                    if (st.size() == 0)
                        res += " ";
                }
            }
            else
            {
                st.push(s[i]);
            }
        }

        while (!st.empty())
        {
            res += st.top();
            st.pop();
        }

        return res;
    }
};