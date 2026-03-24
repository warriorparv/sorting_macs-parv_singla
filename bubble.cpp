#include <bits/stdc++.h>
using namespace std;

int bubble_sort(vector<int> &v) {
    int n = v.size();
    int count = 0;

    for(int i = n - 1; i > 0; i--) {
        for(int j = 0; j < i; j++) {
            count++;
            if(v[j] > v[j + 1]) {
                int temp = v[j];
                v[j] = v[j + 1];
                v[j + 1] = temp;
            }
        }
    }
    return count;
}
