#include<iostream>
using namespace std;
main()
{ 
string name;
float matric_marks;
float inter_marks;
float ecat_marks;
float matric_per;
float inter_per;
float ecat_per;
float matric_wht;
float inter_wht;
float ecat_wht;
float aggregate;
cout << " enter matric marks= ";
cin>> matric_marks;
cout << " enter inter marks= ";
cin>> inter_marks;
cout << " enter ecat marks= ";
cin>> ecat_marks;
matric_per=(matric_marks/1100)*100;
inter_per=(inter_marks/550)*100;
ecat_per=(ecat_marks/400)*100;
matric_wht=(10*matric_per)/100;
inter_wht=(40*inter_per)/100;
ecat_wht=(50*ecat_per)/100;
aggregate=matric_wht+inter_wht+ecat_wht;
cout << "aggregate is : " << aggregate <<endl;
}








