#include <iostream>
#include <vector>
using namespace std;

// https://leetcode.com/problems/binary-search/

int search(vector<int> &array,int target){
    int start = 0;
    int end = array.size();
    if(array.size() == 1){
        if(array[0] != target){
            return -1;
        }
    }
    while(start <= end){
        int mid = start+(end-start)/2;
        if(array[mid] == target){
            return mid;
        }else if(array[mid] > target){
            end = mid - 1;
        }else if(array[mid] < target){
            start = mid + 1;
        }
    }return -1;
}

int main(){
    vector<int> array = {-1,0,3,5,9,12};
    int target;
    cin>>target;
    cout<<search(array,target)<<endl;
    return 0;
}
