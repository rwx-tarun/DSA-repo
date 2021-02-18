#include<bits/stdc++.h>
using namespace std;


int main() 
{
	
	string s;
    cin>>s;
    int l=s.length();
    if((l%2)!=0)
            cout<<"-1"<<endl;
    else
    {
        int cntOpen,cntClose;
        cntOpen=cntClose=0;
        stack <char>st;
        for(int i=0;i<l;i++)
        {   char a=s[i];
            if(a=='{')
            {
                st.push(a);
                cntOpen++;
            }
            else if(a=='}' and  !st.empty() and st.top()=='{')
            {
                st.pop();
                cntOpen--;
            }
            else 
            cntClose++;         //if stack empty & encounter closing bracket    }
        }
        if((cntOpen%2)!=0) cntOpen=(cntOpen/2)+1;
        else cntOpen=cntOpen/2;
        if((cntClose%2)!=0) cntClose=(cntClose/2)+1;
        else cntClose=cntClose/2;
        cout<< cntClose+cntOpen<<endl;

	}
	
	return 0;
}