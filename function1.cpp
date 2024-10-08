#include <iostream>
using namespace std;
int sumN(int n)
{
    int i, sum = 0;
    for (i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    return sum;
}
int main()
{
    cout << sumN(5) << endl;
    cout << sumN(10) << endl;
    return 0;
}