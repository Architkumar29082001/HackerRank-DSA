#include<bits/stdc++.h>
using namespace std;


int main() 
{
    int N;
    cin>>N;
    int p[N],d[N];
    for(int i=0;i<N;i++){
        cin>>p[i]>>d[i];
    }
    int ret = 0, amount = 0, sum = 0;
    for (int i = 0; i < N; ++i) {
        p[i] -= d[i];
        sum += p[i];
        if (amount + p[i] < 0) {
            amount = 0;
            ret = i + 1;
        } else amount += p[i];
    }
    int final=sum>= 0 ? ret : -1;
    cout<<final ;
} 
