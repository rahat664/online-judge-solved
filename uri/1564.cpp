#include <iostream>
#include<stdio.h>
#include<stdio.h>
using namespace std;

int main ()
{
    int n;

    while(scanf("%d\n",&n)!=EOF) {
        if(n==0) {
            cout << "vai ter copa!" << endl;
        } else {
             cout << "vai ter duas!" << endl;
        }
    }
}

