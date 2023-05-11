#include <iostream>
#include <vector>
using namespace std;

// https://leetcode.com/problems/convert-the-temperature/

vector<double> convert_temp(double celsius){
    double kelvin = celsius+273.15;
    double fahrenheit = (celsius*1.8)+32.0;
    vector<double> answer;
    answer.push_back(kelvin);
    answer.push_back(fahrenheit);
    return answer;
}

void display(vector<double> &temps){
    vector<double>::iterator iter;
    for(iter = temps.begin();iter != temps.end();iter++){
        cout<<*iter<<" ";
    }cout<<endl;
}

int main(){
    int temp;
    cin>>temp;
    vector<double> array = convert_temp(temp);
    display(array);
    return 0;
}
