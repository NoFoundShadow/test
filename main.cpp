#include <iostream>
using namespace std;
int main()
{
    int n, a[10000]={},x,k;
    cin >> n;
    for (int i=0 ; i<n ; i++)
    {
        cin >> a[i];
    }
    cin >> x >> k;
    chen(a, n, x, k);
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
}
