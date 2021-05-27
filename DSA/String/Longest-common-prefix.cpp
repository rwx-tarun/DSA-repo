#include<bits/stdc++.h>
using namespace std;


string match(string l,string r)
{
    int mn=min(l.length(),r.length());
    for(int i=0;i<mn;i++)
    {
        if(l[i]!=r[i])
            return l.substr(0,i);
    }
    return l.substr(0,mn);
}

string solve(vector<string>v,int low,int high)
{   
    if(low==high)
        return v[low];
    
    else{
    
        int mid=(low+high)/2;
    
        string lf=solve(v,low,mid);
        string rt=solve(v,mid+1,high);
        return match(lf,rt);
    }
}



int main()

{
    vector<string>v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        string s;
        cin>>s;
        v.push_back(s);
    }
    cout<<solve(v,0,n-1);
    return 0;
}