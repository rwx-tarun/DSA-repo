//Given a positive integer A, return its corresponding column title as appear in an Excel sheet.

string Solution::convertToTitle(int A) {
    
    string s ="";

    while(A)
    {
        char t =(A-1)%26+'A';
        s=s+t;
        A=(A-1)/26;
    }
    reverse(s.begin(),s.end());
    return s;
}
