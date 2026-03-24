#include <bits/stdc++.h>
using namespace std;

int insertion_sort(vector<int> &v) {
    int n = v.size();
    int count = 0;

    for(int i = 0; i < n; i++) {
        int temp = v[i];
        int j = i;

        while(j > 0 && v[j - 1] > temp) {
            v[j] = v[j - 1];
            j--;
            count++;
        }
        v[j] = temp;
    }

    return count;
}
