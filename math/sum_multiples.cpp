#include <iostream>
using namespace std;

// https://leetcode.com/problems/sum-multiples/

int sum_of_multiples(int number){
    int ans = 0;
    for(int i = 1;i <= number;i++){
        if(i%3 == 0||i%5 == 0||i%7 == 0){
            ans += i;
        }
    }return ans;
}

int main(){
    int number;
    cin>>number;
    cout<<sum_of_multiples(number)<<endl;
    return 0;
}
