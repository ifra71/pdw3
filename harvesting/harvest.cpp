#include<iostream>
using namespace std;
main()
{
float vegperkg;
float fruitsperkg;
float totalkgsofveg;
float totalkgsoffruits;
float costofveg;
float costoffruits;
float costincoins;
float costinrupees;
cout<< " enter veg price per kg ";
cin>> vegperkg;
cout<< "  enter fruits price per kg ";
cin>> fruitsperkg;
cout << " total kgs of veg ";
cin>>totalkgsofveg;
cout<< " total kgs of fruits ";
cin>>totalkgsoffruits;
costofveg=vegperkg*totalkgsofveg;
costoffruits=fruitsperkg*totalkgsoffruits;
costincoins=costofveg+costoffruits;
costinrupees=costincoins*1.94;
cout<< " the earnings of harvest in rupees are: " <<costinrupees;
}