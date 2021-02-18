#include<bits/stdc++.h>
using namespace std;

 bool isPal(string s)
 {
    string res= string(s.rbegin(),s.rend());
    if(res==s)
        return true;
    return false;
 }
int main ()
{
    string s;
    getline(cin,s);
    if(isPal(s))
        cout<<true;
    else 
        cout<<false;

    return 0;
}

