#include <bits/stdc++.h>
#include<fstream>
using namespace std;
int main()
{
   vector<int> final;
   string input="/home/kavya/Advent-of-code-2021/Day-01/input.txt";
   fstream in(input);
   string line;
   int current;
   while(getline(in,line))
   {
       current=stoi(line);
       final.push_back(current);
   }
   int sum1=0,count=-1;
   for(int i=0;i<final.size();i++)
   {
       int sum2=0;
       for(int j=i;j<i+3;j++)
       {
           //cout<<final[j]<<" ";
           sum2=sum2+final[j];
       }
       //cout<<sum1<<" "<<sum2<<endl;
       if(sum2>sum1) count++;
       sum1=sum2;
       //cout<<endl;       
   }
  cout<<count;
}
