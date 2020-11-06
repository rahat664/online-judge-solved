#include<bits/stdc++.h> 
using namespace std; 
int deleted(int arr[], int n, int x) 
{ 
   int i; 
   for (i=0; i<n; i++) 
      if (arr[i] == x) 
      {
          break;
      }
   if (i < n) 
   { 

     n = n - 1; 
     for (int j=i; j<n; j++) 
        arr[j] = arr[j+1]; 
   } 
  
   return n; 
} 
int* add(int n, int arr[], 
             int x, int pos) 
{ 
    int i; 
        n++; 
  
    for (i = n; i >= pos; i--) 
        arr[i] = arr[i - 1]; 
  
    arr[pos - 1] = x; 
  
    return arr; 
}
int main() 
{ 
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int element;
    cin >> element;
    n = deleted(arr, n, element); 
    cout << "After deleting " << element << endl; 
    for (int i=0; i<n; i++) 
       cout << arr[i] << " ";
       cout << endl;
    int position;
    cin >> element;
    cin >> position;
    add(n, arr, element, position);
    cout << "After adding " << element << endl; 
        for (int i=0; i<=n; i++)
            cout << arr[i] << " ";
    return 0; 
} 