int Solution::sqrt(int A) {
    if(A==0)    return 0;
    int l= 1;
    int h = A;
    int res =0;
    while(l<=h)
    {
        int m = l+(h-l)/2;
        if(m<=A/m)
        {
            res = m;
            l=m+1;
        }
        else{
            h=m-1;
        }
    }
    return res;
}
