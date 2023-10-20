// https://practice.geeksforgeeks.org/problems/form-a-number-divisible-by-3-using-array-digits0717/1
// T.C : O(N)
// S.C : O(1)

class Solution
{
public:
    int isPossible(int N, int arr[])
    {
        // code here
        int sm = 0;
        for (int i = 0; i < N; i++)
        {
            int ele = arr[i];
            while (ele)
            {
                sm += ele % 10;
                ele /= 10;
            }
            if (sm % 3 == 0)
            {
                sm = 0;
            }
        }
        return sm % 3 == 0;
    }
};