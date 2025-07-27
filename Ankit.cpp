#include <bits/stdc++.h>
using namespace std;

struct FT {
    int n;
    vector<int> bit;
    FT(int _n) : n(_n), bit(n + 1, 0) {}

    void add(int i, int v) {
        while (i <= n) {
            bit[i] += v;
            i += i & -i;
        }
    }

    void range_add(int l, int r, int v) {
        add(l, v);
        add(r + 1, -v);
    }

    int query(int i) {
        int res = 0;
        while (i > 0) {
            res += bit[i];
            i -= i & -i;
        }
        return res;
    }
};

int n, LG, t;
vector<vector<int>> g;
vector<int> in, out, d;
vector<vector<int>> up;

void dfs(int u, int p) {
    in[u] = ++t;
    up[0][u] = p;
    for (int v : g[u]) {
        if (v != p) {
            d[v] = d[u] + 1;
            dfs(v, u);
        }
    }
    out[u] = t;
}

int jump(int u, int k) {
    for (int i = 0; i < LG; ++i) {
        if ((k >> i) & 1)
            u = up[i][u];
    }
    return u;
}

bool check(int H, int K, const vector<int>& ord) {
    FT ft(n);
    int cnt = 0;
    for (int u : ord) {
        if (d[u] <= H) break;
        if (ft.query(in[u]) > 0) continue;
        int anc = jump(u, d[u] - (H - 1));
        cnt++;
        if (cnt > K) return false;
        ft.range_add(in[anc], out[anc], 1);
    }
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int m, K;
    cin >> n >> m;
    g.assign(n + 1, {});
    for (int i = 0; i < m; ++i) {
        int u, v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    cin >> K;

    LG = log2(n) + 1;
    up.assign(LG, vector<int>(n + 1));
    in.assign(n + 1, 0);
    out.assign(n + 1, 0);
    d.assign(n + 1, 0);
    t = 0;

    dfs(1, 1);

    for (int i = 1; i < LG; ++i)
        for (int u = 1; u <= n; ++u)
            up[i][u] = up[i - 1][up[i - 1][u]];

    vector<int> ord(n);
    iota(ord.begin(), ord.end(), 1);
    sort(ord.begin(), ord.end(), [](int a, int b) {
        return d[a] > d[b];
    });

    int lo = 1, hi = *max_element(d.begin(), d.end()), ans = hi;
    while (lo <= hi) {
        int mid = (lo + hi) / 2;
        if (check(mid, K, ord)) {
            ans = mid;
            hi = mid - 1;
        } else {
            lo = mid + 1;
        }
    }

    cout << ans << '\n';
    return 0;
}
