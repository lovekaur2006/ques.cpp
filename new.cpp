#include <iostream>
using namespace std;

int main()
{
    // Compliment of base 10 integer
    int n;
    cout << "Enter an integer \n";
    cin >> n;
    int m = n;
    int mask = 0;
    if (n == 0)
        cout<<"1";
    while (m != 0)
    {
        mask = (mask << 1) | 1;
        m = m >> 1;
    }
    int ans = (~n) & mask;
    cout << "The ans is " << ans;
    return 0;
}