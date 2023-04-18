#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
#define max 100

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int arr[max];
    int arrlen;
    cin>>arrlen;
    for(int i = 0;i<arrlen;i++){
        cin>>arr[i];
    }
    int num_find;
    cin>>num_find;
    for(int i = 0;i<arrlen;i++){
        if(arr[i]==num_find){
            cout<<i<<' ';
        }
    }
    
    return 0;
}
