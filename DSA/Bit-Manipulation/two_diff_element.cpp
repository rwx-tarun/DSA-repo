Given an array of numbers A , in which exactly two elements appear only once and all the other elements appear exactly twice. Find the two elements that appear only once.

Note: Output array must be sorted.

vector<int> Solution::solve(vector<int> &A) {
    int x=A[0];
    int n =A.size();
    for(int i=1;i<n;i++)
        x = x ^ A[i];
    
    int comp= x & (x-1) ^ x;
    int x1=0,x2=0;
    for(int i=0;i<n;i++)
    {   
        if(comp & A[i])
            x1=x1^A[i];
        else
            x2=x2^A[i];
    }
    vector<int>v;
    v.push_back(min(x1,x2));
    v.push_back(max(x1,x2));
    return v;

}
