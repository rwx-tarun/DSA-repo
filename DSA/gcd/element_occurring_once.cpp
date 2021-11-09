// Problem Description

// Given an array of integers, every element appears thrice except for one which occurs once.

// Find that element which does not appear thrice.

int Solution::singleNumber(const vector<int> &A) {
    int res =0;
    int sum=0;
    int x=0;
    for(int i=0;i<32;i++)
    {
        sum =0;
        x = (1<<i);
        for(int j =0;j<A.size();j++)
        {
            if(A[j] & x)
                sum++;
        }
        if(sum%3!=0)
                res = res | x;
    }
    return res; 
}
