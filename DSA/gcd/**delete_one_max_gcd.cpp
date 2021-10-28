// Given an integer array A of size N. You have to delete one element such that the GCD(Greatest common divisor) of the remaining array is maximum.


int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}


 
int Solution::solve(vector<int> &A) {
    
    
    int n =A.size();
    vector<int>lf(n),rt(n);
    
    
    
    lf[0]=A[0];
    for(int i=1;i<n;i++)
    {
        lf[i]=gcd(lf[i-1],A[i]);
    }
    
    
    rt[n-1]=A[n-1];
    for(int i=n-2;i>=0;i--)
    {
        rt[i]=gcd(rt[i+1],A[i]);
    }
    
    
    int res=max(lf[n-2],rt[1]);
    for(int i=1;i<n-2;i++)
    {
        res = max(res,gcd(lf[i-1],rt[i+1]));
    }
    return res;
    
    
}
