#include <bits/stdc++.h>

using namespace std;

int main() {

    int n, height;
    cin >> n;
    vector<int> numbers(n);

    for(auto& nu : numbers){
        cin >> nu;
    }


    int closest = 0;
    vector<int> array; array.resize(2);

    for(int i = 0; i < n ; i++){
        if(i+1 < n) {
            int height = (numbers[i]) - (numbers[i+1]);
            if(height == 0){  array.insert(array.begin(), i); array.insert(array.begin() + 1, i+1); break;}
            if (closest == 0) {
                closest = height;
                array.insert(array.begin(), i); array.insert(array.begin() + 1, i+1);
            } else if (height > 0 && height <= abs(closest)) {
                closest = height;
                array.insert(array.begin(), i); array.insert(array.begin() + 1, i+1);
            } else if (height < 0 && -height < abs(closest)) {
                closest = height;
                array.insert(array.begin(), i); array.insert(array.begin() + 1, i+1);
            }
        }
    }


    (abs(abs(numbers[0]) - abs(numbers[numbers.size()-1])) <= abs(closest)) ? cout << '1' << ' ' << numbers.size() : cout <<  array[0]+1 << ' ' << array[1]+1;






    return 0;
}