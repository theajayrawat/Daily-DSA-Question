// https://www.geeksforgeeks.org/problems/frequency-of-array-elements-1587115620/1
// TC: O(N)
// SC: O(1)

class Solution{
    public:
    //Function to count the frequency of all elements from 1 to N in the array.
    void frequencyCount(vector<int>& arr,int N, int P)
    { 
        // code here
        unordered_map<int,int>mp;
        for(int i=0;i<N;i++) {
            mp[arr[i]]++;
        }
        for(int i=0;i<N;i++) {
            arr[i] = mp[i+1];
        }
    }
};