#include <iostream>
#include <vector>
using namespace std;

// https://leetcode.com/problems/sum-of-all-odd-length-subarrays/

int sum_odd_length_subarrays(vector<int> &array){
    int sum = 0;
    int len = array.size();
    for(int i = 0;i < len;i++){
        for(int j = 1;i+j <= len;j += 2){
            for(int k = i;k < i+j;k++){
                sum += array[k];
            }
        }
    }return sum;
}

int main(){
    vector<int> array = {1,4,2,5,3};
    cout<<sum_odd_length_subarrays(array)<<endl;
    return 0;
}
