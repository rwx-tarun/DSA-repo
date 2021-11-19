int Solution::singleNumber(const vector<int> &A) {
    int res =0;
    for(auto x:A)
        res= res^x;
    return res;
}


// int solve(vector<int>A)
// {
//     sort(A.begin(),A.end());
//     int n = A.size();
//     for(int i=1;i<n;i=i+2)
//     {
//         if(A[i-1]!=A[i])
//             return A[i];
//     }
//     return A[n-1];
// }
