// https://www.geeksforgeeks.org/problems/isomorphic-strings-1587115620/1
// TC: O(N)
// SC: O(N)

class Solution
{
    public:
    //Function to check if two strings are isomorphic.
    bool areIsomorphic(string str1, string str2)
    {
        // Your code here
        if(str1.length() != str2.length())
            return false;
        
        int n = str1.length();
        map<char, char> mp1, mp2;
        
        for(int i=0; i<n; i++) {
            mp1[str1[i]] = str2[i];
            mp2[str2[i]] = str1[i];
        }
        
        for(int i=0; i<n; i++) {
            if(mp1[str1[i]] != str2[i] or mp2[str2[i]] != str1[i])
                return false;
        }
        
        return true;
    }
};