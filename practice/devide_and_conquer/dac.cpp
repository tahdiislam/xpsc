#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 7;
int nums[N];

void merge(int l, int r, int mid)
{
    int left_side = mid - l + 1;
    int right_side = r - mid;
    int L[left_side + 1], R[right_side + 1];

    for (int i = l, j = 0; i <= mid; i++, j++)
        L[j] = nums[i];

    for (int i = mid + 1, j = 0; i <= r; i++, j++)
        R[j] = nums[i];

    L[left_side] = INT_MAX;
    R[right_side] = INT_MAX;

    int lp = 0, rp = 0;
    for (int i = l; i <= r; i++)
        if (L[lp] <= R[rp])
        {
            nums[i] = L[lp];
            lp++;
        }
        else
        {
            nums[i] = R[rp];
            rp++;
        }
}

void mergesort(int l, int r)
{
    if (l == r)
        return;
    int mid = (l + r) / 2;
    mergesort(l, mid);
    mergesort(mid + 1, r);
    merge(l, r, mid);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    // sort(nums, nums+n);
    mergesort(0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << nums[i] << ' ';
    }
    return 0;
}