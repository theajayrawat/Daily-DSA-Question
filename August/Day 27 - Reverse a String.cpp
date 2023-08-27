// Link:https://practice.geeksforgeeks.org/problems/reverse-a-string/1
// Time Complexity: O(N)
// Space Complexity: O(1)

class Solution
{
    public:
    string reverseWord(string str)
    {
        // Your code goes here
        int n=str.size();    
        for(int i=0; i<(n/2); i++){
            swap(str[i],str[n-i-1]);
        }
        return str;
    }
};