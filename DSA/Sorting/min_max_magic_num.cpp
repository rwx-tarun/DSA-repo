vector<int> Solution::solve(vector<int> &A) {
    int mx = 0,mn=0;
    int n = A.size();
    long mod = 1e9+7;
    sort(A.begin(),A.end());
    for(int i=1;i<n;i=i+2)
    {
        mn = (mn + (abs(A[i]-A[i-1]))%mod)%mod;
    }
    for(int i=0;i<n/2;i++)
    {
        mx = (mx+ abs(A[i]-A[n-i-1])%mod)%mod;
    }

    vector<int>res;
    res.push_back(mx);
    res.push_back(mn);
    return res;
}
