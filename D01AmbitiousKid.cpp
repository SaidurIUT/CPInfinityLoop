#include <iostream>
#include <vector>
#include <cstdlib>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int ans = abs(arr[0]);

    for (int i = 0; i < n; i++) {
        if (arr[i] == 0) {
            ans = 0;
            break;
        }
        if (abs(arr[i]) < ans) {
            ans = abs(arr[i]);
        }
    }

    cout << ans << endl;
    return 0;
}
