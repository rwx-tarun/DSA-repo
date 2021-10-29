//Given an integer A, find and return the Ath magic number.

//A magic number is defined as a number which can be expressed as a power of 5 or sum of unique powers of 5.

//First few magic numbers are 5, 25, 30(5 + 25), 125, 130(125 + 5), ….




int Solution::solve(int A) {
    int i=1,ans=0;
    while(A>0)
    {   
        i = i*5;
        if(A%2==1)
            ans = ans+i;
        A=A/2;
    }
    return ans;
}
