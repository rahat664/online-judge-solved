#include <iostream>
using namespace std;

int main() 
{
    int n;
	cin >> n;
	while(n) 
    {
	    int ambiguous = 0, arr1[n], arr2[n];
	    for (int i = 0; i < n; i++)
	        cin >> arr1[i];
	
	    for (int i = 0; i < n; i++)
        {
	        arr2[arr1[i] - 1] = i + 1;
        }
	    for (int i = 0; i < n; i++) 
        {
	        if(arr1[i] != arr2[i]) 
            {
	            ambiguous = 1;
	            break;
	        }
	    }
	    
	    if(ambiguous == 1)
	        cout << "not ambiguous\n";
	    else
	        cout << "ambiguous\n";
	    cin >> n;    
	}
	
	return 0;
}