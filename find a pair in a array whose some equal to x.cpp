#include<bits/stdc++.h>
using namespace std;

bool isPairSumEqualToX(int arr[], int size, int target);

int main()
{
    int t, n, x, i;
    cin >> t;
    while (t--)
    {
        cin >> n >> x;
        int arr[n];
        for (i = 0; i < n; i++) cin >> arr[i];
        sort(arr, arr + n);
        bool result = isPairSumEqualToX(arr, n, x);
        if (result == true)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}

bool isPairSumEqualToX(int arr[], int size, int target)
{
    int left = 0, right = size - 1;
    while (left < right)
    {
        int sum = arr[left] + arr[right];
        if (sum == target)
        {
            return true;
        }
        if (sum > target)
        {
            right--;
        }
        else
        {
            left++;
        }
    }
    return false;
}
