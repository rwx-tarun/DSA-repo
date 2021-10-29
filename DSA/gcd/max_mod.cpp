//Given an array of integers A, calculate the sum of A [ i ] % A [ j ] for all possible i, j pairs. Return sum % (109 + 7) as an output.




int Solution::solve(vector<int> &A) {
    int a[1001]={0};
    long  ans = 0;
    for(int x:A)
        a[x]++;
    
    long mod = 1e9+7;
    for(int i =1;i<=1000;i++)
    {
        for(int j=1;j<=1000;j++)
        {
            long long  val = i%j;
            long long t = (val*a[i]*a[j])%mod;
            ans = ((ans%mod) + t) % mod;
        }
    }
    return ans;
}
