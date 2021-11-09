// Problem Description

// We define f(X, Y) as number of different corresponding bits in binary representation of X and Y.
// For example, f(2, 7) = 2, since binary representation of 2 and 7 are 010 and 111, respectively. The first and the third bit differ, so f(2, 7) = 2.

// You are given an array of N positive integers, A1, A2 ,..., AN. Find sum of f(Ai, Aj) for all pairs (i, j) such that 1 ≤ i, j ≤ N. Return the answer modulo 109+7.




int Solution::cntBits(vector<int> &A) {
    int cnt =0;
    long long res =0;
    int mod =1e9+7;
    for(int i=0;i<32;i++)
    {   
        cnt =0;
        for(int j=0;j<A.size();j++)
        {
            if(A[j]&(1<<i))
                cnt++;
        }
        res = res + 2*cnt*(A.size()-cnt);
        res = res % mod;
    }
    return (int)res;
}
