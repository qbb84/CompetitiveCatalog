#include <bits/stdc++.h>

using namespace std;

template<typename T_container, typename T = typename enable_if<!is_same<T_container, string>::value, typename T_container::value_type>::type>
ostream &operator<<(ostream &os, const T_container &v) {
    os << '{';
    string sep;
    for (const T &x: v) os << sep << x, sep = ", ";
    return os << '}';
}

void dbg_out() { cerr << endl; }

template<typename Head, typename... Tail>
void dbg_out(Head H, Tail... T) {
    cerr << ' ' << H;
    dbg_out(T...);
}

#ifdef LOCAL
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)
#else
#define dbg(...)
#endif

#define ar array
#define vec vector
#define ll long long
#define ld long double
#define sza(x) ((int)x.size())
#define all(a) (a).begin(), (a).end()

const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;

void setup_io() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

void solve() {

    int tableX, tableY;
    cin >> tableX >> tableY;
    vec<string> input(tableX);

    for (auto &s: input) {
        cin >> s;
    }

    vec<char32_t> passable = {'v', 'i', 'k', 'a'};
    vec<char32_t> passable1 = {'v', 'i', 'k', 'a'};
    string hasPassed = "";
    int m = 0, m1 = 0;
    if (tableX > 3) {
        for (int i = 0; i <= tableY; i++) {
            for (int k = 0; k < tableX; k++) {
                if (input[k][i] == passable[m]) {
                    hasPassed += input[k][i];
                    m++;
                    break;
                }

            }


        }
    }
    for (int i = 0; i < input.size(); i++) {
        m1 = 0;
        passable1 = {'v', 'i', 'k', 'a'};
        for (int j = 0; j < input[i].size(); j++) {
            if (passable1.empty()) break;
            if (input[i][j] == passable1[m1]) {
                passable1.erase(passable1.begin() + m1);
            }
        }
    }

    cout << ((hasPassed == "vika" || passable1.empty()) ? "YES\n" : "NO\n");

}

int main() {
    setup_io();
    int n;
    cin >> n;

    while (n--) {
        solve();
    }

    return 0;
}