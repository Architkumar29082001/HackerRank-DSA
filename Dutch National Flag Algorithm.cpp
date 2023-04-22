/*
You have been given a integer array/list(ARR) of size N. In the array you are only having 0, 1 and 2 elements. Write a function to sort the array using this algorithm.

Input Format

First line of each test case or query contains an integer 'N' representing the size of the first array/list.
Second line contains 'N' single space separated integers representing the elements in the array/list.
Constraints

No

Output Format

Return Sorted Array

Sample Input 0

3
0 1 0
Sample Output 0

0 0 1
Sample Input 1

9
0 0 1 1 2 2 2 0 1
Sample Output 1

0 0 0 1 1 1 2 2 2

*/



#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

#define MAX 100


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int num_ele,temp=0;
    cin>>num_ele;
    int arr[MAX];
    for(int i=0;i<num_ele;i++){
        cin>>arr[i];
    }
    for (int i = 0; i < num_ele; i++) {
        for (int j = i + 1; j < num_ele; j++) {
            if (arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for(int i=0;i<num_ele;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
