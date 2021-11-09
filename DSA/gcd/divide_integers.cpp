int Solution::divide(int A, int B) {
    long long  res = 0;
    int flag1 =0,flag2=0;
    if(A == INT_MIN && B == -1)
        return INT_MAX;
    long long a = A;
    if(a<0){
        a=0-a;
        flag1 =1 ;
    }
    if(B<0){
        B=0-B;
        flag2 =1;
    }

        for(int i=31;i>=0;i--)
        {
            long long p = pow(2,i);
            long long x = B*p;
            if(a-x>=0){
                res = res+p;
                a=a-x;
            }
        }

    if(flag1==1 || flag2==1){
        if(flag1 && flag2)
            return res;
        res = 0-res;
    }
    return res;
}
