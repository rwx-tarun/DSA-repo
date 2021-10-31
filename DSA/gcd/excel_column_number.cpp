
//Given a column title as appears in an Excel sheet, return its corresponding column number.

int Solution::titleToNumber(string A) {
    int res =0;
    int j =A.length()-1;
    int i =0;
    while(j>=0)
    {   
        res = res + (A[j] - 'A'+1)*pow(26,i);
        j--;
        i++;
    }
    return res;
}
