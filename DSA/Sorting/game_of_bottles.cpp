int Solution::solve(vector<int> &A) {
    map<int,int>mp;
    int mx =1;
    for(auto x :A)
        mp[x]++;
    for(auto x:mp)
        mx=max(mx,x.second);
    return mx;
}
