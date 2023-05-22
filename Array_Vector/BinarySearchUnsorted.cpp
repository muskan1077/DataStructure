#include <bits/stdc++.h>
using namespace std;
/*
    https://practice.geeksforgeeks.org/problems/kth-smallest-element5635/1
*/
int cnt(int arr[], int l, int r, int mid)
{
    int c = 0;
    for (int i = l; i <= r; i++)
    {
        if (arr[i] <= mid)
            c++;
    }
    return c;
}
int kthSmallest(int arr[], int l, int r, int k)
{

    // code here
    int mnm = arr[l];
    int mxm = arr[l];
    for (int i = l + 1; i <= r; i++)
    {
        mnm = min(mnm, arr[i]);
        mxm = max(mxm, arr[i]);
    }
    while (mnm < mxm)
    {
        int mid = (mnm + mxm) / 2;
        if (cnt(arr, l, r, mid) == k)
        {
            // bool  tel = false;
            // for(int i=l;i<=r;i++){
            //   if(arr[i]==mid){
            //       tel = true;
            //   }
            // }
            // if(tel==true)return mid;
            // else{
            int ans = 0;

            for (int i = l; i <= r; i++)
            {
                if (arr[i] == mid)
                    return mid;
                if (arr[i] < mid && mid - arr[i] < mid - ans)
                {
                    ans = arr[i];
                }
            }
            return ans;
            //}
        }

        if (cnt(arr, l, r, mid) > k)
        {
            mxm = mid;
        }
        else
        {
            mnm = mid + 1;
        }
    }
}
int main()
{
    int n, k;
    cin >> n >> k;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int x = kthSmallest(arr, 0, n - 1, k);
    cout << x << endl;
    return 0;
}