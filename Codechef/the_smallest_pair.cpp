#include <bits/stdc++.h>
using namespace std;

int main() 
{
    
    int test;
    cin >>test;
    while(test--)
    {
    int size;
    cin >> size;
    
    int arr[size];
    for(int j = 0;j < size; j++)
    {
    	cin>>arr[j];
}
	sort (arr,arr+size);
	cout<<arr[0] + arr[1]<<endl;
	}
    return 0;
}