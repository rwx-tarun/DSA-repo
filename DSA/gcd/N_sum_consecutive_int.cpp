// Given a positive integer A.

// Return the number of ways it can be written as a sum of consecutive positive integers.

int Solution::solve(int A) {
    int cnt =0;
    for(int i =1;i*(i-1)<2*A;i++)
    {
        int d = A- (i*(i-1))/2;
        if(d%i == 0)
            cnt++;
    }
    return cnt;
}
