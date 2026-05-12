// Program to calculate area of the circle
#include<iostream>
#include<math.h>
#define PI 3.14
using namespace std;
int main()
{
  float r,Area;
  cout<<" Input the value of the radius of the circle: ";
  cin>>r;
  
  Area=PI*pow((r),2);
  
  cout<<" Area = "<<Area;
  return 0;
}