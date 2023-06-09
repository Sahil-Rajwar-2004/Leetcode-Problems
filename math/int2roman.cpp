#include <iostream>
#include <vector>
using namespace std;

string int2string(int number){
    string roman = "";
    vector<pair<int,string>> roman_numbers = {
        {1000,"M"},
        {900,"CM"},
        {500,"D"},
        {400,"CD"},
        {100,"C"},
        {90,"XC"},
        {50,"L"},
        {40,"XL"},
        {10,"X"},
        {9,"IX"},
        {5,"V"},
        {4,"IV"},
        {1,"I"}
    };

    for(int i = 0;i < roman_numbers.size();i++){
        while(number >= roman_numbers[i].first){
            roman += roman_numbers[i].second;
            number -= roman_numbers[i].first;
        }
    }
    return roman;
}

int main(){
    int number;
    cin>>number;
    string result = int2string(number);
    cout<<result<<endl;
    return 0;
}

