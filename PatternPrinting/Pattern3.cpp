#include <bits/stdc++.h>
using namespace std;

void pattern3(int N)
{
    for (int i = 1; i <= N; i++)
    {

        for (int j = 1; j <=i; j++)
        {
            cout <<j<<" ";
        }
   
        cout << endl;
    }
}

int main()
{   

    int N = 5;

    pattern3(N);

    return 0;
}