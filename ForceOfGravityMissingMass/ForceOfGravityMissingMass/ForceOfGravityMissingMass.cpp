// ForceOfGravityMissingMass.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

const float G = 6.67e-11;
int _tmain(int argc, _TCHAR* argv[])
{
	float r;
	float m [1];
	float g;
	cout<<"Input Distance between the objects"<<endl;
	cin>>r;
	cout<<"Input Known Mass"<<endl;
	cin>>m[0];
	cout<<"Input the Known force of gravity"<<endl;
	cin>>g;
	cout<<"The mass is"<<(r*r*g)/(G*m[0])<<endl;
	
	system("PAUSE");
	return 0;
}

