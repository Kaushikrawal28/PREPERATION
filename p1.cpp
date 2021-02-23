#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n , maxi = INT_MIN ,sum =0;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];   
    }
    for(int i=0;i<n;i++)
    {
        sum = max(arr[i],sum+arr[i]);
        maxi = max(maxi ,sum);
    }
    cout<<maxi;
    return 0;
}
