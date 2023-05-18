#include <iostream>
#include <vector>

using namespace std;

int main() {
    int a, length, tempN  = 0, total = 0;
    vector<int> arr;
    cin >> a;

    while(a--){
        cin >> length;
        vector<int> temp(length);
        int input2;

        for(int i = 0; i < length; i++){
            cin >> temp[i];
        }



        for(int i = 0; i < temp.size(); i++){
            if(temp.at(i) == 0){
                tempN++;
                total = (tempN >= total) ? tempN : total;

            }else tempN = 0;



        }


        arr.insert(arr.end(), total);
        total=0; tempN = 0;



    }

    for(int i = 0; i < arr.size(); i++)	{
        cout << arr.at(i) << " \n";
    }



    return 0;
}