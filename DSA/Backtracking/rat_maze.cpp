//https://practice.geeksforgeeks.org/problems/rat-in-a-maze-problem/1#

#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:

    void path(vector<vector<int>> &m,int n,int x,int y,string r,vector<string>&res,vector<vector<int>> &vis)
    {
        if(x<0 || x>n-1 || y<0 || y>n)  return ;
        if(m[x][y]==0 )  return ;
        if( vis[x][y]==1)
            return;
        if(x==n-1 && y==n-1 )
        {
            res.push_back(r);
            return;
        }
        if(m[x][y]==0)
            return ;
        vis[x][y]=1;
        if(x<n-1)path(m,n,x+1,y,r+'D',res,vis);
        if(y>0)path(m,n,x,y-1,r+'L',res,vis);
        if(y<n-1)path(m,n,x,y+1,r+'R',res,vis);
        if(x>0)path(m,n,x-1,y,r+'U',res,vis);
         
        vis[x][y]=0;
         
    }
        
        
    vector<string> findPath(vector<vector<int>> &m, int n) {
        vector<string>res;
        vector<vector<int>> vis(n, vector<int>(n,0));
        if(m[0][0]==0 || m[n-1][n-1]==0)
          return res;
        int i=0,j=0;
        string r="";
        path(m,n,i,j,r,res,vis);
        return res;
    }

};
