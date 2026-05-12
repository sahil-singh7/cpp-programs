// ask questions and show the correct no of reply
#include<iostream>
using namespace std;
int main()
{
 char aans[3]={'y', 'y', 'n'}, uans[5];
 char requiz, showans; 
 
 s:
 cout<<"\nAnswer in y or n.\n";
 cout<<"\nQ1. Is Donald Trump Ex-President of US?\nAns:";
 cin >> uans[0];
 cout <<"\nQ2. Is Trump Recently Being attacked?\nAns:";
 cin >> uans[1];
 cout <<"\nQ3. Is Lotus National Flower of US?\nAns:";
 cin >> uans[2];
 
 cout<<"\nDo you wanna know answers of the questions?";
 cin>>showans;
 
 if(showans == 'y')
 {
  for(int i=0; i<=3; i++)
  {
   cout<<"\n"<<aans[i];
  }
 }
 cout<<"\nDo you wanna give quiz again?(y/n):";
 cin>>requiz;
 if(requiz == 'y')
 {
  goto s;
 }
 
 return 0;
 
}