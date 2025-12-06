#include <iostream>
using namespace std;

void chen(int a[], int &n, int x, int k)
{
    for (int i=n ; i>=k ; i--)
    {
        a[i]=a[i-1];
    }
    a[k]=x;
    n++;
}
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
