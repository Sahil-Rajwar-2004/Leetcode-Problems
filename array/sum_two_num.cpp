#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/

vector<int> find_sum(vector<int> &array,int target){
    sort(array.begin(),array.end());
    vector<int> answer;
    int start = 0;
    int end = array.size()-1;
    while(start < end){
        int sum = array[start]+array[end];
        if(sum == target){
            answer.push_back(start+1);
            answer.push_back(end+1);
            return answer;
        }else if(sum < target){
            start++;
        }else{
            end--;
        }
    }answer.push_back(-1);
    answer.push_back(-1);
    return answer;
}

void display(vector<int> &array){
    vector<int>::iterator iter;
    for(iter = array.begin();iter != array.end();iter++){
        cout<<*iter<<" ";
    }cout<<endl;
}

int main(){
    int target;
    vector<int> array = {2,7,11,15};
    cin>>target;
    vector<int> answer = find_sum(array,target);
    display(answer);
    return 0;
}
