#include<bits/stdc++.h>
using namespace std;

string  mobileseq (string s, string a[])
{   string res="";
    for(int i=0;i<s.length();i++)
    {
        if(s[i]==' ')
        {
            res=res+"0";
        }
        else 
        {
            int index=s[i]-'A';
            res=res+a[index];
        }
    }
    return res;

}

int main()
{ 
    string a[]=     {"2","22","222", 
                    "3","33","333", 
                    "4","44","444", 
                    "5","55","555", 
                    "6","66","666", 
                    "7","77","777","7777", 
                    "8","88","888", 
                    "9","99","999","9999"};

    string s;
    getline(cin,s);
    cout<<mobileseq(s,a);
    return 0;

}