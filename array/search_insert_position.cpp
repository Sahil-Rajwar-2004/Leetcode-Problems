#include <iostream>
#include <vector>
using namespace std;

// https://leetcode.com/problems/search-insert-position/

int search_insert(vector<int>& array, int target){
    int start = 0;
    int end = array.size();
    int mid;
    if(target>array[end-1]){
        return end;
    }
    while(start <= end){
        mid=(start + end)/2;
        if(array[mid] == target){  
            return mid;
        }
        if(target < array[mid]){     
        end=mid-1;    
        }else{
            start = mid+1;        
        }
    }return start; 
}

int main(){
    int target;
    vector<int> array = {1,3,5,6};
    cin>>target;
    cout<<search_insert(array,target)<<endl;
    return 0;
}
