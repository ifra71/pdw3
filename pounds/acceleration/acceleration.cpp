#include<iostream>
using namespace std;
main()
{
int ini_vel;
int acceleration;
int time;
float fin_vel;
cout <<" enter ini_vel ";
cin>> ini_vel;
cout << " enter acceleration ";
cin>> acceleration;
cout<< " enter time ";
cin>> time;
fin_vel=(acceleration*time)+ini_vel;
cout<<" fin_vel is :" <<fin_vel<<endl;
}