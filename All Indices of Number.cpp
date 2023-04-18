/*
Given an array of length N and an integer x, you need to find all the indexes where x is present in the input array.
Do this recursively. Indexing in the array starts from 0.
Input Format

Line 1 : An Integer N i.e. size of array
Line 2 : N integers which are elements of the array, separated by spaces
Line 3 : Integer x
Constraints

1 <= N <= 10^3
Output Format

indexes where x is present in the array (separated by space)
Sample Input 0

5
9 8 10 8 8
8
Sample Output 0

1 3 4
Sample Input 1

5
9 8 10 8 8
9
Sample Output 1

0
*/

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
