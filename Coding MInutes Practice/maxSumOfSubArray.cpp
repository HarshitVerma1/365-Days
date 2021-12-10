#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cout << "Enter size of Array1 : ";
    cin >> n;
    int arr1[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr1[i] << " ";
    }
}