#include <iostream>
#include <vector>
using namespace std;

void prints(int idx, vector<int> &ds, int s, int sum, vector<int> &arr, int n)
{
    if (idx == n)
    {
        if (s == sum)
        {
            for (auto it : ds)
            {
                cout << it << " ";
            }
            cout << endl;
        }
        return;
    }
    ds.push_back(arr[idx]);
    s += arr[idx];

    prints(idx + 1, ds, s, sum, arr, n);
    s -= arr[idx];
    ds.pop_back();
    prints(idx + 1, ds, s, sum, arr, n);
}

int main()
{
    vector<int> arr = {1, 2, 1};
    int n = 3;
    int sum = 2;
    vector<int> ds;
    prints(0, ds, 0, sum, arr, n);
}