#include <iostream>
#include <string>
#include <cmath>
using namespace std;
#define PI 3.14159265
int main()
{
	double V, theta;
	double Hmax, T, g;
	double Vx, Vy, S, C;

	g = 10;

	V = 30;
	theta = 30;

	/*
	//if you need to take values from the user
	cout<<"Enter the Velocity: ";
	cin>>V;
	cout<<"Enter the Theta angle: ";
	cin>>theta;
	*/

	S = sin(theta * PI / 180);
	C = cos(theta * PI / 180);
	/*
	 cout<<"sin: "<<S<<endl;
	 cout<<"cos: "<<C<<endl;
	*/
	Vx = V * C;
	Vy = V * S;
	/*
	 cout<<"Vx= "<<Vx<<endl;
	 cout<<"Vy= "<<Vy<<endl;
	*/
	Hmax = (pow(Vy, 2) / (2 * g));
	T = (2 * Vy) / g;

	// cout<<"pow: "<<pow(Vy,2)<<endl;
	cout << "The Maximum Height is: " << Hmax << endl;
	cout << "The total time of flight is: " << T << endl;
}
