#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    // number of arrays elements 
    int n;
    // number of queries 
    int q;

    cin >> n >> q;
    vector<vector<int>> a (n);

    for (auto index=0;  index < n; ++index){
        int n_insert; 
        // vector<int> temp;
        cin >> n_insert;
        for (auto i=0; i < n_insert; ++i){
            int temp;
            cin >> temp;
            a.at(index).push_back(temp);
        }
    }
    // a.insert(0,);

    // cout << a.size() << endl;
    // cout << a.at(0).at(0) << endl;
    // cout<< a.at(0) << endl;
    //

    for (auto i=0; i < 10; ++i){
        cout << "vector 0 " << a.at(0).at(i) << " ";
    }
    for (auto i=0; i < 10; ++i){
        cout << "vector 1 " << a.at(1).at(i) << " ";
    }


    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}