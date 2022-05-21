
#include <cmath>
#include <cstdio>
#include <vector>
#include <climits>
#include <iostream>
#include <algorithm>
using namespace std;


int main() 
{
    int num_of_integer,num_of_leftrotation;
    int temp;
    cin>>num_of_integer>>num_of_leftrotation;
    int arr[num_of_integer];
    for(int i=0;i<num_of_integer;i++)
    {
        cin>>arr[i];
    }
    for(int i = 0; i < num_of_leftrotation; i++){  
        int j;  
        arr[num_of_integer+1] = arr[0];  
      
        for(j = 0; j < num_of_integer-1; j++){  
            arr[j] = arr[j+1];  
        } 
        arr[j] = arr[num_of_integer+1];  
    }
    for(int k=0;k<num_of_integer;k++)
    {
        cout<<arr[k]<<" ";
    } 
    
    return 0;
}
