//There are N players each with strength A[i]. when player i attack player j, player j strength reduces to max(0, A[j]-A[i]). 
//When a player's strength reaches zero, it loses the game and the game continues in the same manner among other players until only 1 survivor remains.




int Solution::solve(vector<int> &A) {
    int gcd(int a, int b)
    {
        if (a == 0)
            return b;
        return gcd(b % a, a);
    }
    int res = A[0];
    for (int i = 1; i < A.size(); i++)
    {
        res = gcd(A[i], res);
 
        if(res == 1)
        {
           return 1;
        }
    }
    return res;
}
