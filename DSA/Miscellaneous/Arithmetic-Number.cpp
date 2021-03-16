#include<bits/stdc++.h>
using namespace std;
arithmeticNum(int a,int b,int c)
{
    if(c==0)  return a==b;
    if((b-a)/c>=0 &&(b-a)%c==0)   return true;
  else
    return false;
}
int main()
{
  int a,b,c;
  cin>>a>>b>>c;
  cout<<arithmeticNum(a,b,c);
  return 0;
}
