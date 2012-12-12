// ForceOfGravityMissingDistance.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

const float G=6.67e-11;

int _tmain(int argc, _TCHAR* argv[])
{
	float r;
	float m1;
	float m2;
	float g;

	cout<<"Input the Force of Gravity"<<endl;
		cin>>g;
	cout<<"Input mass 1"<<endl;
		cin>>m1;
	cout<<"Input mass 2"<<endl;
		cin>>m2;
	cout<<"The Distance is "<<sqrt((G*m1*m2/g))<<endl;


	system("PAUSE");
	return 0;

}

