// program for finding area of the triangle by  Hero's formula
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
float a,b,c,s, area;
cout <<" Input the value of all three sides of the triangle:";
cin>>a>>b>>c;

s=(a+b+c)/2;
area=sqrt(s*(s-a)*(s-b)*(s-c));

cout<<"Area= "<<area;
return 0;
}