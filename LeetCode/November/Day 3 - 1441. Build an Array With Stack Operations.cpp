// https://leetcode.com/problems/build-an-array-with-stack-operations/
// TC: O(N)
// SC: O(N)

class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        int number=1;
        vector<string>result;
        for(int i=0;i<target.size();i++){
            if(number==target[i]){
                result.push_back("Push");
            }
            else{
                int cnt=0;
                while(number!=target[i]){
                    result.push_back("Push");
                    number++;
                    cnt++;
                }

                while(cnt){
                    result.push_back("Pop");
                    cnt--;
                }

                 result.push_back("Push");
            }
            number++;
        }

        return result;
    }
};