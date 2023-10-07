#include<bits/stdc++.h>
using namespace std;

// Function to find and print all unique triplets in the array whose sum is zero
void findTriplets(int arr[], int n)
{
    int x; // Variable to store the third element of the triplet
    for (int i = 0; i < n; i++)
    {
        unordered_set<int> us; // Create a set to store unique elements seen so far
        for (int j = i + 1; j < n; j++)
        {
            x = -(arr[i] + arr[j]); // Calculate the third element to make the sum zero
            if (us.find(x) != us.end())
            {
                // If x is found in the set, it means a triplet is found
                cout << arr[i] << " " << arr[j] << " " << x << endl;
            }
            else
            {
                us.insert(arr[j]); // Insert arr[j] into the set to check for it later
            }
        }
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Find and print all unique triplets in the array whose sum is zero
    findTriplets(arr, n);

    return 0;
}
