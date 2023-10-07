#include<bits/stdc++.h>
using namespace std;

int closestPairIndex1, closestPairIndex2;

// Function to find the pair of elements in the array whose sum is closest to 'target'
void findClosestPair(int arr[], int size, int target)
{
    int left = 0;
    int right = size - 1;
    int closestDifference = INT_MAX;

    while (left < right)
    {
        int sum = arr[left] + arr[right];
        int currentDifference = abs(sum - target);

        if (currentDifference < closestDifference)
        {
            closestPairIndex1 = left;
            closestPairIndex2 = right;
            closestDifference = currentDifference;
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

    cout << arr[closestPairIndex1] << " + " << arr[closestPairIndex2] << " = " << arr[closestPairIndex1] + arr[closestPairIndex2]
         << " is closest to " << target << endl;
}

int main()
{
    int t, n, x, i;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) cin >> arr[i];
        sort(arr, arr + n);
        cin >> x;

        // Find and print the pair with the sum closest to x
        findClosestPair(arr, n, x);
    }
    return 0;
}
