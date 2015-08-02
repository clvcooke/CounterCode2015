#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    int t;
    int n;
    cin >> t;
    vector<int> players;
    for(int i = 0; i < t; i++){
        cin >> n;
        for(int j = 0; j < n/2; j++){
            players.insert(players.begin(),(n - j));
            players.insert(players.begin(),j+1);
        }
        if(players.size() != n){
            players.insert(players.begin(),n/2 + 1);
        }
        for(int k = 0; k < n; k++){
            cout << players.at(k) << " ";
        }
        cout << endl;
        players.clear();
    }

    return 0;
}