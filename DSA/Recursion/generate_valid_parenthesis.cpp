// A = 3
// [ "((()))", "(()())", "(())()", "()(())", "()()()" ]



void solve(int open,int close,int N,string temp, vector<string> &res)
{
    if(open<close)
        return ;
    if(open==close && N == 0)
    {
        res.push_back(temp);
        return;
    }
    if(N==0)
        return ;
    solve(open+1,close,N-1,temp+"(",res);
    solve(open,close+1,N-1,temp+")",res);
}

vector<string> Solution::generateParenthesis(int A) {
    vector<string> res;
    string temp ="";
    solve(0,0,2*A,temp,res);
    return res;
}
