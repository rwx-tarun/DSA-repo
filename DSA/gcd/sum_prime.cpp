Given an even number A ( greater than 2 ), return two prime numbers whose sum will be equal to given number.

If there are more than one solutions possible, return the lexicographically smaller solution.


vector<int> Solution::primesum(int A) {
    vector<bool>v(A+1,true);
    v[0]=v[1]=false;
    for(int i=2;i*i<=A;i++)
    {
        if(v[i]==true)
        {
            for(int j= i*i;j<=A;j=j+i)
                v[j]=false;
        }
    }

    vector<int>res;
    for(int i=2;i<=A;i++)
    {   
        int t = A-i;
        if(v[t] && v[i])
        {
            res.push_back(i);
            res.push_back(t);
            return res;
        }
    }

}

