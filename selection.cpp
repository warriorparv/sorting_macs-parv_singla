#include <bits/stdc++.h>
using namespace std;

int selection_sort(vector<int> &v) {
    int n = v.size();
    int count = 0;

    for(int i = 0; i < n; i++) {
        int pos = i;

        for(int j = i + 1; j < n; j++) {
            count++;
            if(v[j] < v[pos]) {
                pos = j;
            }
        }

        if(pos != i) {
            int temp = v[i];
            v[i] = v[pos];
            v[pos] = temp;
        }
    }

    return count;
}
