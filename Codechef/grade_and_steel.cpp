#include <iostream>

using namespace std;

int grader(int h, float cc, int ts)
 {
    int grade;
    if (h > 50 && cc < 0.7 && ts > 5600)
     {
        grade = 10;
    }
    else if (h > 50 && cc < 0.7 && ts <= 5600) 
    {
        grade = 9;
    }
    else if (h <= 50 && cc < 0.7 && ts > 5600)
     {
        grade = 8;
    }
    else if (h > 50 && cc >= 0.7 && ts > 5600)
     {
        grade = 7;
    }
    else if (h > 50 || cc < 0.7 || ts > 5600)
     {
        grade = 6;
    }
    else 
    {
        grade = 5;
    }
    return grade;
}

int main() 
{
    int test;
    cin >> test;
    while (test --) 
    {
        int hardness, tensile_strength;
        float carbon_content;
        cin >> hardness >> carbon_content >> tensile_strength;
        cout << grader(hardness, carbon_content ,tensile_strength) << endl;
    }
    return 0;
}