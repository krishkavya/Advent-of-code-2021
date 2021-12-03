#include <bits/stdc++.h>
#include<fstream>
using namespace std;
int main()
{
    string input = "/home/kavya/adc/input.txt";
    int count=0;
    string line; 
    fstream f(input);
    getline(f,line);
    int first,second;
    second =stoi(line);
    first=second;
    while(getline(f,line))
    {
        first = second;
        second = stoi(line);
        if(second>first) count++;
    }
    cout<<count;

}
