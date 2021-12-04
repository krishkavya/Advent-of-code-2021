#include <bits/stdc++.h>
#include<fstream>
using namespace std;
int main()
{
   ifstream f("/home/kavya/Advent-of-code-2021/Day-02/input.txt");
    int number;
    string direction;
    int depth=0,position=0;
    while(f>>direction>>number)
    {
        if(direction=="forward")
        position+=number;
        else if(direction =="down")
        depth+=number;
        else 
        depth-=number;
    }
    cout<<position*depth;
}
