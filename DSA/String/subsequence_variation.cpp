// Given a array of integers A of size N and an integer B.

// Return number of non-empty subsequences of A of size B having sum <= 1000.

int ans =0;
void rec(vector<int>&A,int B,int cnt ,int idx,int sm){
    
    if(sm >1000)             return ;
    if(cnt == B){    ans++;  return ; }
    if(idx == A.size())    return ;
    
    rec(A,B,cnt+1,idx+1,sm+A[idx]);
    rec(A,B,cnt,idx+1,sm);
}

int Solution::solve(vector<int> &A, int B) {
    ans =0;
    rec(A,B,0,0,0);
    return ans;
}
