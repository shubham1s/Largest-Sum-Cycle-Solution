#include <bits/stdc++.h>
using namespace std;
bool isCycle(vector<int> arr, int curr, vector<bool> &visited, vector<int> &path)
{
    if (curr == -1)
    {
        return false;
    }
    if (visited[curr])
    {
        return true;
    }
    visited[curr] = true;
    path.emplace_back(curr);
    if (isCycle(arr, arr[curr], visited, path))
        return true;
    return false;
}

int largestSumCycle(vector<int> arr)
{
    int n = arr.size();
    int sum = INT_MIN;
    vector<bool> visited(n, false);
    for (int i = 0; i < n; i++)
    {
        visited[i] = true;

        vector<int> path;

        if (isCycle(arr, arr[i], visited, path))
            sum = max(sum, accumulate(path.begin(), path.end(), 0));

        visited[i] = false;
    }
    if (sum == INT_MIN)
        return -1;
    return sum;
}

int main() {
    int n;
    cin>>n;
    vector<int> a(n,0);
    for(int i=0;i<n;i++)
        cin>>a[i];
    cout<<largestSumCycle(a);
    
    return 0;
}
