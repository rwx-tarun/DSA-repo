
//Given a positive integer A. Return an array of minimum length whose elements represent the powers of 3 and the sum of all the elements is equal to A.


vector<int> Solution::solve(int A) {
    vector<int>v;
    int i =1;
    while(A!=0)
    {
        v.push_back(A%3);
        A=A/3;
    }

    vector<int>res;
    for(int k=0;k<v.size();k++)
    {
        while(v[k]!=0)
        {
            res.push_back(pow(3,k));
            v[k]=v[k]-1;
        }
    }
    return res;
}
