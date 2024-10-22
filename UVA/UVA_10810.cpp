#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int c = 0;

void merge(int f, int mid, int e, vector<int> &v)
{
    // including mid in the left     //right starts from mid+1
    int l = mid - f + 1, r = e - mid;
    int L[l + 1], R[r + 1];

    for (int i = 0; i < l; ++i)
        L[i] = v[f + i];

    for (int i = 0; i < r; ++i)
        R[i] = v[mid + i + 1]; // right starts from mid+1

    L[l] = R[r] = INT16_MAX;

    int l_i = 0, r_i = 0;
    for (int i = f; i <= e; ++i)
        if (L[l_i] < R[r_i])
        {
            v[i] = L[l_i];
            l_i++;
        }
        else
        {
            c += (l - l_i+1);
            v[i] = R[r_i];
            r_i++;
        }
}

void merge_sort(int f, int e, vector<int> &v)
{
    if (f == e)
        return;
    int mid = (f + e) / 2;
    merge_sort(f, mid, v);
    merge_sort(mid + 1, e, v);
    merge(f, mid, e, v);
}

int main()
{
    // srand(time(0));
    int n;
    while (cin >> n && n)
    {
        vector<int> v;
        for (int i = 0; i < n; ++i)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }
        merge_sort(0, v.size() - 1, v);

        cout << c << endl;
        c = 0;
    }
}