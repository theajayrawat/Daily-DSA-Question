// https://www.geeksforgeeks.org/problems/move-all-zeroes-to-end-of-array0751/1
// T.C : O(N)
// S.C : O(1)

class Solution{
public:
	void pushZerosToEnd(int arr[], int n) {
	    // code here
	   int a=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]==0)
                a++;
            else
                arr[i-a]=arr[i];
        }
        for(int i=n-a;i<n;i++)
            arr[i]=0;
	}
};

