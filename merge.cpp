#include <bits/stdc++.h>
using namespace std;

int merge_ops = 0;

void mergeParts(vector<int> &v, int l, int m, int r) {
    vector<int> res;
    int p1 = l, p2 = m + 1;

    while(p1 <= m && p2 <= r) {
        merge_ops++;
        if(v[p1] < v[p2]) {
            res.push_back(v[p1]);
            p1++;
        } else {
            res.push_back(v[p2]);
            p2++;
        }
    }

    while(p1 <= m) {
        res.push_back(v[p1]);
        p1++;
    }

    while(p2 <= r) {
        res.push_back(v[p2]);
        p2++;
    }

    for(int i = 0; i < res.size(); i++) {
        v[l + i] = res[i];
    }
}

void divide(vector<int> &v, int l, int r) {
    if(l >= r) return;

    int mid = l + (r - l) / 2;

    divide(v, l, mid);
    divide(v, mid + 1, r);
    mergeParts(v, l, mid, r);
}

int mergeSort(vector<int> &v) {
    merge_ops = 0;
    divide(v, 0, v.size() - 1);
    return merge_ops;
}
