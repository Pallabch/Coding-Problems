//https://www.codechef.com/problems/CHN09


#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
int counter(string s,char c)
{
    int count=0;
    int len=s.size();
    for(int i=0;i<len;i++)
    {
        if(s[i]==c)
            count++;
    }
    return count;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int acount=counter(s,'a');
        int bcount=counter(s,'b');
        cout<<min(acount,bcount)<<endl;

    }
}