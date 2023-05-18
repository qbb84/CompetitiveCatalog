#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

    int a;
    vector<int> answer;
    cin >> a;

    while(a--){
        string b;
        cin >> b;

        string copy = b;
        reverse(b.begin(), b.end());

        for(int i = 0; i < b.length(); i++){
            string er = b.erase(i, 1);
            string rev = er;
            reverse(er.begin(), er.end());

            if(er != rev && er.length() > 1){
                answer.push_back(er.length()-i);
                break;
            }else  answer.push_back(-1); break;

        }
    }
    for(int i : answer){
        cout << i << " \n";
    }

    return 0;
}
