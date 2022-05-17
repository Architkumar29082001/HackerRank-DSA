#include<bits/stdc++.h>
using namespace std;

int main(){
    int s;
    cin>>s;
    string str[s];
    for(int i=0;i<s;i++){
        cin>>str[i];
    }
    int q;
    cin>>q;
    string qr[q];
    for(int j=0;j<q;j++){
        cin>>qr[j];
    }
    for(int k=0;k<q;k++){
        int count=0;
        for(int l=0;l<s;l++){
            if(qr[k]==str[l]){
                count+=1;
            }
        }
        cout<<count<<endl;
    }
}
