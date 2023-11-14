// https://www.geeksforgeeks.org/problems/check-if-strings-are-rotations-of-each-other-or-not-1587115620/1
// TC: O(N*N) 
// SC: O(1) 

class Solution
{
    public:
    //Function to check if two strings are rotations of each other or not.
    bool areRotations(string s1,string s2)
    {
        // Your code here
         if(s1.size()!=s2.size()) return false;

        s1=s1+s1;

        if(s1.find(s2)!=-1) return 1;

        else return 0;
    }
};