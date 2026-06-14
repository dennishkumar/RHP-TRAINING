#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k, q;
    cin >> n >> k >> q;

    const int MAX = 200000;
    vector<int> diff(MAX + 2, 0);

    for (int i = 0; i < n; i++) {
        int l, r;
        cin >> l >> r;
        diff[l]++;
        diff[r + 1]--;
    }

    vector<int> cnt(MAX + 1, 0);
    cnt[0] = diff[0];

    for (int i = 1; i <= MAX; i++) {
        cnt[i] = cnt[i - 1] + diff[i];
    }

    vector<int> good(MAX + 1, 0);

    for (int i = 1; i <= MAX; i++) {
        if (cnt[i] >= k)
            good[i] = 1;
    }

    vector<int> prefix(MAX + 1, 0);

    for (int i = 1; i <= MAX; i++) {
        prefix[i] = prefix[i - 1] + good[i];
    }

    while (q--) {
        int a, b;
        cin >> a >> b;
        cout << prefix[b] - prefix[a - 1] << '\n';
    }

    return 0;
}