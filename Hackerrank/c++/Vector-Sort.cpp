#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    long long int n;
    cin>>n;
    vector<int> vec;
    for (int i=0;i<n;i++){
        long long int temp;
        cin>>temp;
        vec.push_back(temp);
    }
    sort(vec.begin(),vec.end());
    for (int i=0;i<n;i++){
        cout<<vec[i]<<" ";
    }
    return 0;
}