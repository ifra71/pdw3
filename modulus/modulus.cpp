#include<iostream>
using namespace std;
main()
{
int input;
int sum;
int reminder;
sum=0;

cout<< " enter five digit no. " ;
cin>> input;

reminder=input%10;
sum=sum+reminder;

input=input/10;
reminder=input%10;
sum=sum+reminder;

input=input/10;
reminder=input%10;
sum=sum+reminder;

input=input/10;
reminder=input%10;
sum=sum+reminder;

input=input/10;
reminder=input%10;
sum=sum+reminder;

cout<<" sum is = " <<sum;
}
