#include <bits/stdc++.h>

using namespace std;

template<typename A, typename B> ostream& operator<<(ostream &os, const pair<A, B> &p) { return os << '(' << p.first << ", " << p.second << ')'; }
template<typename T_container, typename T = typename enable_if<!is_same<T_container, string>::value, typename T_container::value_type>::type> ostream& operator<<(ostream &os, const T_container &v) { os << '{'; string sep; for (const T &x : v) os << sep << x, sep = ", "; return os << '}'; }
void dbg_out() { cerr << endl; }
template<typename Head, typename... Tail> void dbg_out(Head H, Tail... T) { cerr << ' ' << H; dbg_out(T...); }
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
    int a, small;

    cin >> a;
    vec<int> v(a);

    for (int& i : v) {
        cin >> i;
    }

    map<int, vector<int>> answer;

    //see why 41 is being printed
    //loop through map to see what is being added
    //could always convert all values to map as an absolute value !<0and get cloest to zero that way
if(answer.size() > 1) {
    for (int i = 0; i < v.size(); i++) {
        int mini = v[i] - v[i + 1];
        vector<int> ans = {};
        ans.push_back(i + 1);
        ans.push_back(i + 2);
        answer[mini] = ans;
    }
}

    vec<int> ve; ve.push_back(1); ve.push_back(v.size());
    answer[v[0] - v[v.size() - 1]] = ve;

    vec<int> ve1; ve1.push_back(1); ve1.push_back(v.size());
    answer[v[v.size() - 1] - v[0]] = ve1;

    int smallest = INF; int smallestN = -INF;
    for(auto& [k, v1] : answer){
        if(k  >= 0 && k < smallest){
            smallest = k;
        }else if(k < 0 && k > smallestN){
            smallestN = k;
        }

          small = ::min(smallest, smallestN);



    }
    (smallest != INF) ? (cout << answer[small][1] << ' ' << answer[small][0]) : (cout << answer[small][0] << ' ' << answer[small][1]);
}



    int main() {
        setup_io();
        solve();

        return 0;
    }



