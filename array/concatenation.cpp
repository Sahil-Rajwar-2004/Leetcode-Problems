#include <iostream>
#include <vector>
using namespace std;

// https://leetcode.com/problems/concatenation-of-array/

vector<int> concatenation(vector<int> &array){
    vector<int> ans(2*array.size());
    for(int i = 0;i < array.size();i++){
        ans[i] = array[i];
        ans[i+array.size()] = array[i];
    }return ans;
}

int main(){
    vector<int> array = {1,2,1};
    vector<int> ans = concatenation(array);
    vector<int>::iterator iter = ans.begin();
    while(iter != ans.end()){
        cout<<*iter<<" ";
        iter++;
    }cout<<endl;
    return 0;
}
