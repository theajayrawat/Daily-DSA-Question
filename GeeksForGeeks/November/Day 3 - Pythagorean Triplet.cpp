// https://www.geeksforgeeks.org/problems/pythagorean-triplet3018/1
// TC: O(N*N)
// SC: O(N)

class Solution{
public:
	// Function to check if the
	// Pythagorean triplet exists or not
	bool checkTriplet(int arr[], int n) {
	    // code here
	    for(int i=0;i<n;i++)
	        arr[i]=(arr[i]*arr[i]);
	    
	    
	    for(int i=0;i<n-2;i++){
	        unordered_set<int>st;
	        for(int j=i+1;j<n;j++){
	            int val=arr[i]+arr[j];
	            int val2=abs(arr[i]-arr[j]);
	            if(st.find(val)!=st.end() || st.find(val2)!=st.end())
	                return true;
	           st.insert(arr[j]);
	        }
	        
	    }
	    
	    return false;
	}
};