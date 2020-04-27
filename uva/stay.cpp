#include<bits/stdc++.h>
#include<conio.h>
using namespace std;

int main()
{
    int s[12] = {34,83,84,65,89,32,32,72,79,77,69,34};
    int t[12] = {34,83,84,65,89,32,32,83,65,70,69,34};
    printf("\t  ");

    for(int i = 0; i < 12; i++)
    {
        printf("%c",s[i]);
    }

    printf("\n\t\t");

    for(int i = 0; i < 12; i++)
    {
        printf("%c",t[i]);
    }
    getch();
}
