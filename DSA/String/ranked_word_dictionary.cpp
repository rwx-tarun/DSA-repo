// Given a string A. Find the rank of the string amongst its permutations sorted lexicographically.
// Assume that no characters are repeated.

// Note: The answer might not fit in an integer, so return your answer % 1000003

int Solution::findRank(string A) {
    int a[256]={};
    int n = A.length();
    for(int i=0;i<n;i++)
    {
        a[A[i]]++;
    }
    long long mod = 1000003;

    long long fact[256];   
    fact[0]=fact[1]=1;
    for(int i=2;i<256;i++)
    {
        fact[i]=(i*fact[i-1])%mod;
    }
    long long res =0;
    int num =0;
    for(int i=0;i<n;i++)
    {   
        num=0;
        for(int j=0;j<256;j++)
        {
            if(j==A[i])
                break;
            if(a[j])
                num++;
        }
        a[A[i]]=0;
        res  =(res + (num * fact[n-1-i])%mod)%mod;
    }
    res =  (res+1)%mod;
    if(res<0)   
        res = res + mod;
    return res;
}
