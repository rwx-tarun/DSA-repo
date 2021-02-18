#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int n;
    cin>>n;
    vector<int>v;
    v.push_back(1);

    for(int i=2;i<=n;i++)                       
    {   int carry=0;
        for(int j=0;j<v.size();j++)
        {
            int mul=v[j]*i+carry;
            v[j]=mul%10;
            carry=mul/10;
        }
        while(carry)
        {
            v.push_back(carry%10);
            carry=carry/10;
        }
    }
    for(int i=v.size()-1;i>=0;i--)
        cout<<v[i];    
}