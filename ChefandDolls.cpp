//https://www.codechef.com/problems/MISSP/

#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
int t;
cin>>t;
while(t--){
    long long int n,x;
    cin>>n;
    long long int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    for(int i=0;i<n;i=i+2){
        x=a[i];
        if(x==a[i+1]){
            continue;
        }
        else{
            cout<<a[i]<<endl;
            break;
        }
    }
}
return 0;
}

