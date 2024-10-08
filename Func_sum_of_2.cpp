#include <iostream>
using namespace std;
void sum(int a, int b)
{
    int sum = a + b;
    cout << "sum = " << sum << endl;
}
int main()
{
    int x, y;
    cout << "enter two numbers" << endl;
    cin >> x >> y;
    sum(x, y);
    return 0;
}