#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, len;
    cout << "Enter size of Array1 : ";
    cin >> n;
    int arr1[n];
    len = sizeof(arr1) / sizeof(arr1[0]);
    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr1[i] << " ";
    }
    cout << endl;
    sort(arr1, arr1 + len);
    for (int i = 0; i < n; i++)
    {
        cout << arr1[i] << " ";
    }
}