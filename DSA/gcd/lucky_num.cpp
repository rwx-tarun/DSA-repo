// A lucky number is a number which has exactly 2 distinct prime divisors.

// You are given a number A and you need to determine the count of lucky numbers between the range 1 to A (both inclusive).

int Solution::solve(int n) {
    vector<int>A(n+1,0);
    for(int i=0;i<=n;i++)
        A[i]=i;
    
    vector<int>res(n+1,0);

    for(int i=2;i<=n;i++)
    {
        if(res[i]==0)
        {
            for(int j = 2*i;j<=n;j=j+i)
            {
                res[j]=res[j]+1;
            }
        }
    }
    int cnt =0;
    for(auto x:res)
    {
        if(x==2)
            cnt++;
    }
    return cnt;
}
