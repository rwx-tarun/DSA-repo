int Solution::findMinXor(vector<int> &A) {
    int x =INT_MAX;
    sort(A.begin(),A.end());
    for(int i=0;i<A.size()-1;i++)
    {
        x=min(x,A[i]^A[i+1]);
    }
    return x;
}
