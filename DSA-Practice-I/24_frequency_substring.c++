#include<bits/stdc++.h>
using namespace std;
int countFreq(string word, string subs){
    int l1 = word.length();
    int l2 = subs.length();
    int j;
    int count = 0;
        for(int i = 0; i<= l1-l2;i++){
            for(j=0;j<l2;j++){
                if(word[i+j] != subs[j]) break;
            }
            if(j==l2) count++;
            
        }
    return count;

}
int main(){
    string word = "dumdum";
    string subs = "dum";
    cout << countFreq(word,subs);
    return 0;
}