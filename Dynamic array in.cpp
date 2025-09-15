#include <iostream>
using namespace std;
#include<vector>
int main() {
vector<int>arr={3,5,7};
arr.push_back(1);
arr.push_back(6);
arr.pop_back();
for(int val:arr){
    cout<<val<<" ";
}
}
