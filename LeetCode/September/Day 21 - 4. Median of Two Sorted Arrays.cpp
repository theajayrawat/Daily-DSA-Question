// https://leetcode.com/problems/median-of-two-sorted-arrays/
// TC : O(Log(min(N,M)))
// SC : O(1)

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size();
        int m=nums2.size();

        if(n>m)
            return findMedianSortedArrays(nums2,nums1);
        
        int t=n+m;
        int l=(t+1)/2;
        int lo=0;
        int hi=n;

        while(lo<=hi){
            int mid1 = (lo + hi) >> 1;
            int mid2=l-mid1;

            int A=mid1==0?INT_MIN:nums1[mid1-1];
            int B=mid2==0?INT_MIN:nums2[mid2-1];
            int C=mid1>=n?INT_MAX:nums1[mid1];
            int D=mid2>=m?INT_MAX:nums2[mid2];

            // Array visualization
            // ---------A     C---------
            // ---------B     D---------

            if(A<=D && C>=B){
                if (t % 2 == 1) return max(A, B);
                else return ((double)(max(A, B) + min(C, D))) / 2.0;
            }
            else if (A > D) hi = mid1 - 1;
            else lo = mid1 + 1;
        }

        return 0;
    }
};