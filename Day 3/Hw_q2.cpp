#include <iostream>
#include<string>
#include<vector>
using namespace std;

int countConsistentStrings(string allowed, vector<string>& words) {
        int allow[26]={0},count=0;
        int n = allowed.length();
        for(int i=0;i<n;i++){
            allow[allowed[i]-97]+=1;
        }
        for(auto it=words.begin();it!=words.end();it++){
            string word = *it;
            int len = word.length();
            int w[26]={0};
            for(int i=0;i<len;i++){
                w[word[i]-97]+=1;
            }
            int flag=0;
            for(int i=0;i<26;i++){
                if((allow[i]==0)&&(w[i]!=0)){
                    flag=1;
                    break;
                }
            }
            if(flag==0){
                count++;
            }
        }
        return count;
    }

int main() {
	int n;
	vector <string> words;
	string allowed,word;
	cin>>allowed;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>word;
		words.push_back(word);
	}
	int c = countConsistentStrings(allowed,words);
	cout<<c;
	return 0;
}