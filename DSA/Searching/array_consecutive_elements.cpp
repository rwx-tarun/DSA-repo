int Solution::solve(vector<int> &A) {
    sort(A.begin(),A.end());
    for(int i=1;i<A.size();i++)
    {
        if(A[i-1]!=A[i]-1)
            return 0;
    }
    return 1;

}
