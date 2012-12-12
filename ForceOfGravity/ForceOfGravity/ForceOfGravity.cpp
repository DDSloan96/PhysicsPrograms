// ForceOfGravity.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

const float G = 6.67e-11;

int _tmain(int argc, _TCHAR* argv[])
{
	float m [2];
	float r;
	cout<<"Input the Distance between the 2 masses"<<endl;
	cin>>r;
	cout<<"Input Mass 1"<<endl;
	cin>>m[0];
	cout<<"Input Mass 2"<<endl;
	cin>>m[1];
	cout<<"The gravitational force is"<<(G*m[0]*m[1])/(r*r)<<endl;

	system("PAUSE");
	return 0;
}

