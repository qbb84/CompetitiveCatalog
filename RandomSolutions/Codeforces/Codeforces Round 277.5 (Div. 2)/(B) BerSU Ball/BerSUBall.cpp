#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int a;
    cin >> a;
    vector<int> boys(a);

    for(size_t i = 0; i < boys.size(); ++i){
        cin >> boys[i];
    }

    int b;
    cin >> b;
    vector<int> girls(b);

    for(size_t i = 0; i < girls.size(); ++i){
        cin >> girls[i];
    }

    sort(boys.begin(), boys.end());
    sort(girls.begin(), girls.end());

    int count = 0;
    vector<bool> matched_boys(boys.size(), false);
    vector<bool> matched_girls(girls.size(), false);

    for(int i = 0; i < boys.size(); i++){
        for(int j = 0; j < girls.size(); j++){
            if((!matched_boys[i] && !matched_girls[j]) &&
               (boys[i] == girls[j] || boys[i] == girls[j] - 1 || boys[i] == girls[j] + 1)){
                count++;
                matched_boys[i] = true;
                matched_girls[j] = true;
            }
        }
    }

    cout << count << "\n";

    return 0;
}