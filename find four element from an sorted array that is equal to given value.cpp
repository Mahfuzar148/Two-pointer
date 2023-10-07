
#include<bits/stdc++.h>
using namespace std;
void findFourElement(int arr[],int n,int x)
{
    int f = 0;
    for(int i=0;i<n;i++)
    {
       for(int j=i+1;j<n;j++)
       {
            int l = j+1;
            int r = n-1;
            while(l<r)
            {
                int sum = arr[i]+arr[j]+ arr[l]+arr[r];
                if(sum==x)
                {
                    cout<<"( "<< arr[i]<<" ,"<<arr[j]<<" ,"<<arr[l]<<" ,"<<arr[r]<<" )"<<endl;
                    f = 1;
                }
                if(sum>x)
                {
                    r--;
                }
                else
                {
                    l++;
                }
            }
       }
    }
    if(f!=1) cout<<"Four element not found "<<endl;

}
int main()
{
   int n;
   cin>>n;
   int arr[n] ;
   for(int i=0;i<n;i++)
   {
       cin>>arr[i];
   }
   sort(arr,arr+n);
   int x;
   cout<<"Enter value for finding triplet : ";
   cin>>x;
   findFourElement(arr,n,x);
   return 0;

}
