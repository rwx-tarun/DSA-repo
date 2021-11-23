int Solution::solve(vector<int> &A) {
    int mx =0;
    int cnt =0;
    for(int i=0;i<A.size();i++)
    {   
        mx = max(mx,A[i]);
        if(i==mx)
            cnt++;
    }
    return cnt;
}
