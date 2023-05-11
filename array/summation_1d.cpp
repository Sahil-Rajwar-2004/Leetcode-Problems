#include <iostream>
#include <vector>
using namespace std;

// https://leetcode.com/problems/running-sum-of-1d-array/

vector<int> running_sum(vector<int> &array){
    int sum = 0;
    vector<int> result;
    vector<int>::iterator iter;
    for(iter = array.begin(); iter != array.end();iter++){
        sum += *iter;
        result.push_back(sum);
    }return result;
}

void display(vector<int> &array){
    vector<int>::iterator iter;
    for(iter = array.begin(); iter != array.end();iter++){
        cout<<*iter<<" ";
    }cout<<endl;
}

int main(){
    vector<int> array = {1,2,3,4};
    vector<int> result = running_sum(array);
    display(result);
    return 0;
}
