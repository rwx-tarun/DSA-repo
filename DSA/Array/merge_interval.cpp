#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> merge(vector<vector<int>>v)
{
    vector<vector<int>> res;
    int l,e;
    sort(v.begin(),v.end());
    l=v[0][0];
    e=v[0][1];

    for(int i=1;i<v.size();i++)
    {
        if(v[i][0]<=e)
        {
            e=max(e,v[i][1]);
        }
        else
        {
            res.push_back({l,e});
            l=v[i][0];
            e=v[i][1];
        }    
    }
    res.push_back({l,e});
    return res;
}
