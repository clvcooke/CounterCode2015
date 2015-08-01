#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n,k;
    cin >> n >> k;
    vector<int> snipers;
    for(int i = 0; i < k; i++){
        int temp;
        cin >> temp;
        snipers.push_back(temp);
    }

    sort(snipers.begin(), snipers.end());
    int count = 0;
    int snipNumber = snipers.back();
    snipers.pop_back();
    for(int i = n; i > 0; i-=2){
        if(snipNumber != -1){
            if( i - snipNumber < 2){
                i = snipNumber;
                if(snipers.empty()){
                    snipNumber = -1;
                }else{
                    snipNumber = snipers.back();
                    snipers.pop_back();
                }
            }
        }
        count++;
    }
    cout << count;
    return 0;
}
