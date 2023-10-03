// https://practice.geeksforgeeks.org/problems/column-name-from-a-given-column-number4244/1
// TC: O(N)
// SC: O(1)


class Solution{
    public:
    string colName (long long int n)
    {
        // your code here
        string str;
        while(n){
            n--;
            int d=n%26;
            str+=(char('A'+d));
            n/=26;
        }
        
        reverse(str.begin(),str.end());
        
        return str;
    }
};

