#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,flag,cnt=0;
    string str;
    getline (cin,str);
    cin>>n;
    for(int i=0;i<str.length();i++)
    {
        if(str[i]==' ')
        cnt++;
        if(cnt==n)
        { 
            flag=i;
            break;
        }
    }
    str = str.substr(0,flag);
    cout<<str;
    return 0;
}