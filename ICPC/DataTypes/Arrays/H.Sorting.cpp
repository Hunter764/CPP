#include <bits/stdc++.h>
using namespace std;

void selection_sort(vector<int> &arr, int n)
{
    for (int i = 0; i <= n - 2; i++)
    {
        int min_index = i;
        for (int j = i+1; j <= n - 1; j++)
        {
            if (arr[j] < arr[min_index])
            {
                min_index = j;
            }
        }
        int temp = arr[min_index];
        arr[min_index] = arr[i];
        arr[i] = temp;
    }
}

int main()
{
    int n;
    cin >> n;
    vector <int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    selection_sort(arr, n);
    {
        for (int i = 0; i <= n - 1; i++)
        {
            cout << arr[i] << " ";
        }
    }
}