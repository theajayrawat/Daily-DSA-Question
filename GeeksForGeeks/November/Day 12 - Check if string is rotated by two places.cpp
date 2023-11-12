// https://www.geeksforgeeks.org/problems/check-if-string-is-rotated-by-two-places-1587115620/1
// TC: O(N)
// SC: O(N)

class Solution
{
    public:
    //Function to check if a string can be obtained by rotating
    //another string by exactly 2 places.
    bool isRotated(string str1, string str2)
    {
        // Your code here
        int n1 = str1.size();

        int n2 = str2.size();

        if(n1 != n2)
            return false;

        string rotatedLeft = str1.substr(2) + str1.substr(0, 2);
        string rotatedRight = str1.substr(n1 - 2) + str1.substr(0, n1 - 2);
        
        return rotatedLeft==str2 || rotatedRight==str2;
    }

};