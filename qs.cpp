#include <bits/stdc++.h>
using namespace std;

int cnt = 0;

void combine(vector<int> &a, int start, int mid, int end) {
    int i = start, j = mid + 1;
    vector<int> temp;

    while(i <= mid && j <= end) {
        cnt++;
        if(a[i] <= a[j]) {
            temp.push_back(a[i++]);
        } else {
            temp.push_back(a[j++]);
        }
    }

    while(i <= mid) temp.push_back(a[i++]);
    while(j <= end) temp.push_back(a[j++]);

    for(int k = start; k <= end; k++) {
        a[k] = temp[k - start];
    }
}

void split(vector<int> &a, int start, int end) {
    if(start == end) return;

    int mid = (start + end) >> 1;

    split(a, start, mid);
    split(a, mid + 1, end);
    combine(a, start, mid, end);
}

int mergeSort(vector<int> &a) {
    cnt = 0;
    split(a, 0, (int)a.size() - 1);
    return cnt;
}
