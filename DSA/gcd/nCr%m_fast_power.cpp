long long BE(long long a , long long b , long long c)
{   
    a=a%c;
    long long res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a%c;
        a = a * a%c;
        b >>= 1;
    }
    return res;
}

long long fact[1000005];
int Solution::solve(int A, int B, int C) {
    fact[0]=1;    
    for(int i = 1;i<=A;i++)
        fact[i]=(fact[i-1]*i)%C;
    
    long long res = fact[A];

    res = (res*BE(fact[B],C-2,C))%C;
    res =(res*BE(fact[A-B],C-2,C))%C;
    return res;

}
