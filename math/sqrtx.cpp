#include <iostream>
using namespace std;

// https://leetcode.com/problems/sqrtx/

int sqrt(int number){
    if(number == 0||number == 1){
        return number;
    }
    int start = 0,end = number,root = 0;
    while(start <= end){
        long int mid = start+(end-start)/2;
        if(mid*mid == number){
            return mid;
        }else if(mid*mid > number){
            start = mid+1;
            root = mid;
        }else{
            end = mid-1;
        }
    }return root;
}

int main(){
    int number;
    cin>>number;
    cout<<sqrt(number)<<endl;
    return 0;
}
