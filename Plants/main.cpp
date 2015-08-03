#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    int n;
    cin >> n;
    vector<int> plants;
    for(int i = 0; i < n; i++){
        int k;
        cin >> k;
        plants.push_back(k);
    }

    int* data = plants.data();
    int days = -1;
    bool dead = true;
    int end;
    int end2 = 0;
    while(dead){
        dead = false;
        for(int i = n-1; i > end2; i--){
            if(data[i-1] < data[i]){
                plants.erase(plants.begin()+i);
                n--;
                dead = true;
                end = i-1;
            }
        }
        end2 = end;
        days++;
    }

    cout << days;

    return 0;
}