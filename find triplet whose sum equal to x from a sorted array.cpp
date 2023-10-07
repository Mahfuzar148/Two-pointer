#include<bits/stdc++.h>
using namespace std;

// Function to find and print all unique triplets in the sorted array whose sum is equal to 'target'
void findTriplets(int sortedArr[], int size, int target)
{
    for(int i = 0; i < size; i++)
    {
        int left = i + 1;
        int right = size - 1;
        
        while(left < right)
        {
            int sum = sortedArr[i] + sortedArr[left] + sortedArr[right];
            
            if(sum == target)
            {
                cout << "( " << sortedArr[i] << " , " << sortedArr[left] << " , " << sortedArr[right] << " )" << endl;
            }
            
            if(sum > target)
            {
                right--;
            }
            else
            {
                left++;
            }
        }
    }
}

int main()
{
   int n;
   cin >> n;
   int arr[n];
   
   for(int i = 0; i < n; i++)
   {
       cin >> arr[i];
   }
   
   // Sort the array in ascending order
   sort(arr, arr + n);
   
   int target;
   cout << "Enter the target sum for finding triplets: ";
   cin >> target;
   
   // Find and print all unique triplets in the sorted array whose sum is equal to 'target'
   findTriplets(arr, n, target);
   
   return 0;
}
