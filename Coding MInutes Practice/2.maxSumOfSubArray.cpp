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
            curr = 0;
            for (int k = i; k <= j; k++)
            {
                curr += arr1[k];
                if (curr > maxVal)
                    maxVal = curr;
                cout << arr1[k] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }
    cout << "Max Value is : " << maxVal;
}