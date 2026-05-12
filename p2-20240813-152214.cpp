// FINDING DISTANCE BETWEEN TWO POINTS
#include<iostream>
#include<math.h>
using namespace std;

int main()
{
 float x1,x2,y1,y2,dis;
 cout<<"Input the values of 1st point: ";
 cin>>x1>>y1;
 
 cout<<"Input 2nd point's value: ";
 cin>>x2>>y2;
 
 dis= sqrt(pow((x2-x1),2)+pow((y2-y1),2));
 cout<<"Distance="<<dis;
 return 0;
}