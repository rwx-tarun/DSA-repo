int Solution::solve(int A, int B, int C) {
    long long dp[A+1][B+1];
    for(int i =0;i<=A;i++)
    {
        for(int j = 0;j<=min(i,B);j++)
        {
            if(j==0 || i==j)
            {   
                dp[i][j]=1;
            }
            else{
                dp[i][j]=(dp[i-1][j-1]%C+dp[i-1][j]%C)%C;
            }
        }
    }
    return dp[A][B];
}
