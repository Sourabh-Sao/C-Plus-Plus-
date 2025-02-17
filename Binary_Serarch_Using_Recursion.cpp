#include <bits/stdc++.h>
using namespace std;

int search(vector<int> &arr, int target, int st, int end)
{
    if (st <= end)
    {

        int mid = st + (end - st) / 2;

        if (arr[mid] == target)
            return mid;

        else if (arr[mid] > target)
        {
            return search(arr, target, st, mid - 1);
        }
        else
        {
            return search(arr, target, mid + 1, end);
        }
    }

    return -1;
}

int main()
{
    vector<int> arr = {-1, 0, 3, 5, 9, 12};
    int target = 5;
    cout << search(arr, target, 0, arr.size() - 1);
    return 0;
}