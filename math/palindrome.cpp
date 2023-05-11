#include <iostream>
using namespace std;

// https://leetcode.com/problems/palindrome-number/

bool is_palindrome(int number){
    int org = number;
    long int rem,rev = 0;
    if(org < 0){
        return false;
    }
    while(number != 0){
        rem = number%10;
        rev = rev*10+rem;
        number /= 10;
    }
    if(org == rev){
        return true;
    }return false;
}

int main(){
    int number;
    cin>>number;
    cout<<is_palindrome(number)<<endl;
    return 0;
}
