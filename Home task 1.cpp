#include <iostream>
#include<cmath>
using namespace std;
int main ()
{
	//QUESTION 1
	int factorial = 1;
	factorial = 6*5*4*3*2*1;
	cout<<"factorial is: "<< factorial <<endl;
	
	//QUESTION 2
	float d, x1,y1,x2,y2;
	cout<<"x1=";
	cin>>x1;
	cout<<"x2=";
	cin>>x2;
	cout<<"y1=";
	cin>>y1;
	cout<<"y2=";
	cin>>y2;
	d=sqrt(pow((x2-x1),2)+pow((y2-y1),2));
	cout<<"distance is :"<< d << endl;
	
	//QUESTION 3
	float cm, m, km;
	cout<<"length in centimeters is :";
	cin>>cm;
	m=cm/100;
	km=m/100000;
	cout<<"length in meters is :"<<m<<endl;
	cout<<"length in kilometers is :"<<km<<endl;

	//QUESTION 4
	float a,b;
	cout<<"value of a is ";
	cin>>a;
	cout<<"value of b is ";
	cin>>b;
	cout<<"polynomial a^2 +2ab+b^2 is:"<<a*a +2*a*b+ b*b<<endl;
	
	return 0;
	
}
