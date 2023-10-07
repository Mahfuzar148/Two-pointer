#include<bits/stdc++.h>
using namespace std;

// Function to find the pair with the sum closest to x
void findClosestPair(int arr1[], int arr2[], int size1, int size2, int target)
{
    int index1, index2;
    int minDifference = INT_MAX;
    int i = 0;
    int j = size2 - 1;

    // Iterate through both arrays to find the pair with the closest sum to x
    while (i < size1 && j >= 0)
    {
        int sum = arr1[i] + arr2[j];
        int currentDifference = abs(sum - target);

        // Update the indices and minimum difference if a closer pair is found
        if (currentDifference < minDifference)
        {
            index1 = i;
            index2 = j;
            minDifference = currentDifference;
        }

        // Adjust the pointers based on the current sum
        if (sum > target)
        {
            j--;
        }
        else
        {
            i++;
        }
    }

    // Print the pair and their sum
    cout << "(" << arr1[index1] << ", " << arr2[index2] << ") = " << arr1[index1] + arr2[index2] << endl;
}

int main()
{
    int t, n, m, x, i;
    cin >> t;
    while (t--)
    {
        cout << "Enter the size of arr1[]: ";
        cin >> n;
        int arr1[n];
        cout << "Enter the elements of arr1[]:\n";
        for (i = 0; i < n; i++) cin >> arr1[i];

        cout << "Enter the size of arr2[]: ";
        cin >> m;
        int arr2[m];
        cout << "Enter the elements of arr2[]:\n";
        for (i = 0; i < m; i++) cin >> arr2[i];

        cout << "Enter the value of x: ";
        cin >> x;

        // Find and print the pair with the sum closest to x
        findClosestPair(arr1, arr2, n, m, x);
    }
    return 0;
}
