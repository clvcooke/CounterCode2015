#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    int t;
    cin >> t;
    for(int h = 0; h < t; h++){
        int n, m;
        cin >> n >> m;
        int* toilets = new int[n];
        fill(toilets, toilets+n,0);
        int mid = (int)ceil(n/2.0) -1;
        int extra = n%2 ? 0 : 1;
        for(int i = 1; i < m; i++){

            if(i % 2 == 0){
                
                for(int j = n-1; j >= mid+extra; j--){
                    if(toilets[j] == toilets[mid+extra]){
                        toilets[j]++;
                        break;
                    }
                }
            }else{
                for(int j = 0; j <= mid;j++){
                    if(toilets[j] == toilets[mid]){
                        toilets[j]++;
                        break;
                    }
                }
            }
        }
        if(m % 2 == 0){
            for(int j = n-1; j >= mid+extra; j--){
                if(toilets[j] == toilets[mid+extra]){
                    cout << j+1 << " "<< toilets[j] << endl;
                    break;
                }
            }
        }else{
            for(int j = 0; j <= mid;j++){
                if(toilets[j] == toilets[mid]){
                    cout << j+1 << " "<< toilets[j] << endl;
                    break;
                }
            }
        }
    }
    return 0;
}