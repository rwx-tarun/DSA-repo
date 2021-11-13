class Solution {
public:
    void solve(vector<int>& a,int s,int e,set<vector<int>>&st)
    {
        if(s==e)    
        {
            st.insert(a);
            return ;
        }
        for(int i=s;i<=e;i++)
        {
            swap(a[i],a[s]);
            solve(a,s+1,e,st);
            swap(a[i],a[s]);
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& a) {
        vector<vector<int>>res;
        set<vector<int>>st;
        solve(a,0,a.size()-1,st);
        for(auto x:st)
            res.push_back(x);
        return res;
    }
};
