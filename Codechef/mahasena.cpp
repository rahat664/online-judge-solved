#include<bits/stdc++.h>
using namespace std;
int main()
{
	
	int i=0,num,even=0,odd=0,w;
	
	cin >> num;  
	while(i < num &&cin >> w)
    {
		i++;
		if(w%2 == 0)
            even++;
		else 
            odd++;
	}
	
	if(even > odd) 
        cout << "READY FOR BATTLE";
	else 
        cout << "NOT READY";
	
	return 0;
}