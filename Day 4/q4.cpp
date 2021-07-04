#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector <string> words;
    string str;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>str;
        words.push_back(str);
    }
    vector <string> codes{".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
    set<string> unique;
    for(int i=0;i<words.size();i++)
    {
        string morse="";
        for(int j=0;j<words[i].length();j++)
        {
            int index= words[i][j]-'a';
            morse=morse+codes[index];
        }
        unique.insert(morse);
    }
    cout<<unique.size();
    return 0;
}