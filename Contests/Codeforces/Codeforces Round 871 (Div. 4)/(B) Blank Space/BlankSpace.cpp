#include <iostream>
#include <vector>

using namespace std;

int main() {
    int a, indices = 0;
    string s = "", comp = "codeforces";
    vector<int> n;
    cin >> a;

    while(a--){
        cin >> s;

        for(int i = 0; i < s.length(); i++){
            if(s.at(i) != comp.at(i)) indices++;
        }
        n.insert(n.end(), indices);
        indices=0;

    }
    for(int i : n)	{
        cout << i << " \n";
    }

    return 0;
}