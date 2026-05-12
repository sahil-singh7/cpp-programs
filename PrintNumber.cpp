#include<iostream>
using namespace std;

void zero(char);
void one(char);
void two(char);
void three(char);
void four(char);
void five(char);
void six(char);
void seven(char);
void eight(char);
void nine(char);

int main()
{
   int num,rem,rev=0;
   char ch='a';
   
   cout << "Enter Any Small Number: ";
   cin>> num;
   
   if(num==0)
   zero('0');

   while(num !=0)
   {  
    rem=num%10;
	rev=rev*10+rem;
	num=num/10;
   }
    
   num=rev;
   rem=0;
   
	while(num != 0)
	{	
     rem=num%10;
	 
     if(rem==0)
     zero('0');
     else if(rem==1)
     one('1');
     else if(rem==2)
     two('2');
     else if(rem==3)
     three('3');
     else if(rem==4)
     four('4');
     else if(rem==5)
     five('5');
     else if(rem==6)
     six('6');
     else if(rem==7)
     seven('7');
     else if(rem==8)
     eight('8');
     else if(rem==9)
     nine('9');
    
	 num=num/10;
    }
	
    return 0;
}

void zero(char ch)
{
  for(int i=1; i<=5; i++)
  {
    for(int j=1; j<=3; j++)
    {
      if((i==1||i==5) && (j==1||j==2||j==3))
       cout<<"*";		  
      else if((i==2||i==3||i==4) && (j==1||j==3))
      cout<<"*";
      else
	  cout <<" ";
	}
   cout << "\n";
  }
 cout << "\n";
}

void one(char ch)
{
  for(int i=1; i<=5; i++)
  {
    for(int j=1; j<=3; j++)
    {
      if((i==1 || i==2 || i==3 || i==4) && j==2)
       cout<<"*";
      else if(i==2 && j==1)
	   cout<<"*";
      else if(i==5)
       cout<<"*";
      else
       cout <<" ";
    }
   cout << "\n"; 
  }  
 cout << "\n";
}

void two(char ch)
{
  for(int i=1; i<=5; i++)
  {
    for(int j=1; j<=3; j++)
    {
      if(i==1||i==3||i==5)
       cout <<"*";		  
      else if((i==2 && j==3) || (i==4 && j==1))
      cout<<"*";
      else
	  cout <<" ";
	}
   cout << "\n";
  }
 cout << "\n";
}

void three(char ch)
{
  for(int i=1; i<=5; i++)
  {
    for(int j=1; j<=3; j++)
    {
      if(i==1||i==3||i==5)
       cout <<"*";	  
      else if((i==2||i==4) && j==3)
      cout<<"*";
      else
	   cout <<" ";
	}
   cout << "\n";
  }
 cout << "\n";
}

void four(char ch)
{
  for(int i=1; i<=5; i++)
  {
    for(int j=1; j<=3; j++)
    {
      if((i==1||i==2) && (j==1 || j==3))
       cout <<"*";	  
      else if(i==3)
      cout<<"*";
      else if((i==4 || i==5) && j==3)
      cout<<"*";
      else
	   cout <<" ";
	}
   cout << "\n";
  }
 cout << "\n";
}

void five(char ch)
{
  for(int i=1; i<=5; i++)
  {
    for(int j=1; j<=3; j++)
    {
      if(i==1||i==3||i==5)
       cout <<"*";	  
      else if((i==2&&j==1) || (i==4 && j==3))
      cout<<"*";
      else
	   cout <<" ";
	}
   cout << "\n";
  }
 cout << "\n";
}

void six(char ch)
{
  for(int i=1; i<=5; i++)
  {
    for(int j=1; j<=3; j++)
    {
      if(i==1||i==3||i==5)
       cout <<"*";	  
      else if((i==2 && j==1) || (i==4 && (j==1 || j==3)))
      cout<<"*";
      else
	   cout <<" ";
	}
   cout << "\n";
  }
 cout << "\n";
}

void seven(char ch)
{
  for(int i=1; i<=5; i++)
  {
    for(int j=1; j<=3; j++)
    {
      if(i==1||i==3)
       cout <<"*";	  
      else if((i==2||i==4 || i==5) && j==3)
      cout<<"*";
      else
	   cout <<" ";
	}
   cout << "\n";
  }
 cout << "\n";
}

void eight(char ch)
{
  for(int i=1; i<=5; i++)
  {
    for(int j=1; j<=3; j++)
    {
      if(i==1||i==3||i==5)
       cout <<"*";	  
      else if((i==2||i==4) && (j==1 || j==3))
      cout<<"*";
      else
	   cout <<" ";
	}
   cout << "\n";
  }
 cout << "\n";
}

void nine(char ch)
{
  for(int i=1; i<=5; i++)
  {
    for(int j=1; j<=3; j++)
    {
      if(i==1||i==3||i==5)
       cout <<"*";	  
      else if(i==2 && (j==1 || j==3) || (i==4 && j==3))
      cout<<"*";
      else
	   cout <<" ";
	}
   cout << "\n";
  }
 cout << "\n";
}