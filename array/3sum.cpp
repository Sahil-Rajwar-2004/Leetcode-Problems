#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/3sum/

vector<vector<int>> three_sum(vector<int> &array){
    sort(array.begin(), array.end());
    vector<vector<int>> result;
    int len = array.size();
    for(int i = 0;i < len-2;++i){
        if(i > 0 && array[i] == array[i-1])
            continue;
        int left = i+1;
        int right = len-1;
        while(left < right){
            int total = array[i]+array[left]+array[right];
            if (total < 0){
                left++;
            }else if(total > 0){
                right--;
            }else{
                result.push_back({array[i],array[left],array[right]});
                while(left < right && array[left] == array[left+1]){
                    left++;
                }
                while(left < right && array[right] == array[right-1]){
                    right--;
                }
                left++;
                right--;
            }
        }
    }
    return result;
}

void display(vector<vector<int>> &array){
    for(int row = 0;row < array.size();row++){
        for(int i = 0;i < array[row].size();i++){
            cout<<array[row][i]<<" ";
        }cout<<endl;
    }
}

int main(){
    vector<int> array = {-1,0,1,2,-1,-4};
    vector<vector<int>> result = three_sum(array);
    display(result);
    return 0;
}
