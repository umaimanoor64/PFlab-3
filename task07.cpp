#include<iostream>
using namespace std;
main()
{
string name;
float matric ;
float inter;
float ecat;
float matric_agg;
float inter_agg;
float ecat_agg;
float aggregate;
cout<<"enter your name";
cin>>name;
cout<<" enter matric marks out of 1100= ";
cin>>matric;
cout <<" enter inter marks out of 550= ";
cin>> inter;
cout <<" enter ecat marks out of 400= ";
cin >> ecat;
matric_agg=(matric*100/1100)*0.1;
inter_agg=(inter*100/550)*0.4;
ecat_agg=(ecat*100/400)*0.5;
aggregate=matric_agg+inter_agg+ecat_agg;
cout<<" aggregate= "<<aggregate;
}