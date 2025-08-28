#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> boys(n);
    for (int i = 0; i < n; ++i) {
        cin >> boys[i];
    }
    
    int m;
    cin >> m;
    vector<int> girls(m);
    for (int i = 0; i < m; ++i) {
        cin >> girls[i];
    }
    
    // Sort both arrays
    sort(boys.begin(), boys.end());
    sort(girls.begin(), girls.end());
    
    int pairs = 0;
    int i = 0, j = 0;
    
    while (i < n && j < m) {
        if (abs(boys[i] - girls[j]) <= 1) {
            pairs++;
            i++;
            j++;
        } else if (boys[i] < girls[j]) {
            i++;
        } else {
            j++;
        }
    }
    
    cout << pairs << endl;
    return 0;
}
