// https://practice.geeksforgeeks.org/problems/find-optimum-operation4504/1
// T.C : O(LogN)
// S.C : O(1)

class Solution
{
  public:
    int minOperation(int n)
    {
        //code here.
        int cnt=0;
        while(n){
            if(n%2==0)
                n/=2;
            else
                n--;
                
            cnt++;
        }
        
        return cnt;
    }
};