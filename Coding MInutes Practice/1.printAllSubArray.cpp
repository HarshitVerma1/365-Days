#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, len;
    int curr = 0, maxVal = INT64_MIN;
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
        for (int j = i; j < n; j++)
        {
            for (int k = i; k <= j; k++)
            {
                cout << arr1[k] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }
}