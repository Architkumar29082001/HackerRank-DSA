#include <bits/stdc++.h>

using namespace std;

int main(){
    string str1,str2;
    cin>>str1;
    cin>>str2;
    int lenstr = str1.length();
    int lenstr2 = str2.length();
    for(int i = 0;i<lenstr;i++){
        for(int j = 0;j<lenstr2;j++){
            if(str1[i]==str2[j]){
                str1[i]='.';
                str2[j]='.';
            }
        }
    }
    int ans=0;
    
    for(int k=0;k<lenstr;k++){
        if(str1[k]!='.'){
            ans++;
        }
    }
    for(int k=0;k<lenstr2;k++){
        if(str2[k]!='.'){
            ans++;
        }
    }
    cout<<ans;
}
