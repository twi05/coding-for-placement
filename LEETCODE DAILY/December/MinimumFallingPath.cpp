#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
class Solution {
public:
	int help(int i,int j,int r,int c,vector<vector<int>> &matrix,
		 vector<vector<int>> &dp){
	if(j<0 or i>=r or j>=c ) return INT_MAX;  // so that it won't effect our ans
	if(i==0){
		return dp[i][j]=matrix[i][j];
	}
	if(dp[i][j]!=-1) return dp[i][j];
	int up=help(i-1,j,r,c,matrix,dp);
	int ldg=help(i-1,j+1,r,c,matrix,dp);
	int rdg=help(i-1,j-1,r,c,matrix,dp);
	return dp[i][j]=min({up,ldg,rdg})+matrix[i][j];
}
int minFallingPathSum(vector<vector<int>> &matrix)
{
	 int r=matrix.size(),c=matrix[0].size();
	vector<vector<int>> dp;
	 dp.resize(r,vector<int>(c,-1));

	//memoisation
	 int ans=INT_MAX;
	 for(int i=0;i<c;i++){
	 ans=min(ans,help(r-1,i,r,c,matrix,dp));
	 }


	return ans;
}
};
int main()
{

    return 0;
}
