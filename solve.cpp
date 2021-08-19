#include<bits/stdc++.h>
using namespace std;
int main(){
	int x[4], y[4], d[4];
	//Input
	//Painter
	for( int i=0 ; i<4 ; ++i) cin >>x[i] >> y[i];
	for( int i=0; i<4 ; ++i) cin >> d[i];
		//Solver
		//One side
		double a1 = sqrt( ((x[0]-x[1])*(x[0]-x[1])) + ((y[0]-y[1])*(y[0]-y[1])) );
		//second side
		double a2 = sqrt( ((x[2]-x[1])*(x[2]-x[1])) + ((y[2]-y[1])*(y[2]-y[1])) );

		double area1 = a1*a2 + a1*( d[0] + d[2] ) + a2*( d[1] + d[3] ) + d[0]*d[1] + d[1]*d[2] + d[2]*d[3] + d[3]*d[0];

	//Robot
	for( int i=0 ; i<4 ; ++i) cin >> x[i] >> y[i];
	for( int i=0; i<4 ; ++i) cin >> d[i];

		//Solver
		//One side
		double a3 = sqrt( ((x[0]-x[1])*(x[0]-x[1])) + ((y[0]-y[1])*(y[0]-y[1])) );
		//second side
		double a4 = sqrt( ((x[2]-x[1])*(x[2]-x[1])) + ((y[2]-y[1])*(y[2]-y[1])) );

		double area2 = a3*a4 + a3*( d[0] + d[2] ) + a4*( d[1] + d[3] ) + d[0]*d[1] + d[1]*d[2] + d[2]*d[3] + d[3]*d[0];


		if( area1 >= area2) cout << "BIG";
		else cout << "SMALL";

	return 0;
}