int Solution::singleNumber(const vector<int> &A) {
    int res =0;
    for(auto x:A)
        res= res^x;
    return res;
}
