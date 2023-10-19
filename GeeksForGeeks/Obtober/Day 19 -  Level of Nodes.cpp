// https://practice.geeksforgeeks.org/problems/level-of-nodes-1587115620/1
// T.C : O(V)
// S.C : O(V)

class Solution
{
	public:
	//Function to find the level of node X.
	int nodeLevel(int V, vector<int> adj[], int X) 
	{
	    // code here
	    vector<bool>vis(V,false);
	    queue<pair<int,int>>q;
        q.push({0,0});
        vis[0]=true;
        while(!q.empty()){
            int sz=q.size();
            while(sz--){
                pair<int,int>p=q.front();
                int node=p.first;
                int level=p.second;
                if(node==X){
                    return level;
                }
                q.pop();
                for(auto v: adj[node]){
                  if(!vis[v]){
                      q.push(make_pair(v,level+1));
                      vis[v]=true;
                  }
                }
            }
        }
        return -1;
	}
};