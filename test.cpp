#include<bits/stdc++.h>
#include<fstream>
using namespace std;
int main(){

	ofstream MyFile("test.txt");
	srand(time(0));
	if( rand() %2 == 0){
		int a = rand()%10000;
		int b = rand()%10000;

		int c = rand()%10000;
		while( c ==0 ) c = rand()%10000;
		int d = rand()%10000;
		while( d ==0 ) d = rand()%10000;
		MyFile << a << " " << b << endl;
		MyFile << a+c   << " " << b << endl;
		MyFile << a+c << " " <<  b+d << endl;
		MyFile << a  << " " <<  b+d << endl;
		MyFile << rand()%10000 << " " << rand()%10000 << " " <<rand()%10000<< " " <<rand()%10000 << endl;

		a = rand()%10000;
		b = rand()%10000;

		c = rand()%10000;
		while( c ==0 ) c = rand()%10000;
		d = rand()%10000;
		while( d ==0 ) d = rand()%10000;
		MyFile << a << " " << b << endl;
		MyFile << a+c   << " " << b << endl;
		MyFile << a+c << " " <<  b+d << endl;
		MyFile << a  << " " <<  b+d << endl;
		MyFile << rand()%10000 << " " << rand()%10000 << " " <<rand()%10000 << " " <<rand()%10000 << endl;


	}
	else if( rand() %3 == 0 && rand()%2!=0){
		
		MyFile << "0 2000" << '\n' << "2000 0" << '\n' << "4000 2000"<< '\n' <<"2000 4000"<< '\n' ;
		MyFile << rand()%10000 << " " << rand()%10000 << " " <<rand()%10000 << " " <<rand()%10000 << endl;
		int x =rand()%10000;
		if( x==0 ) x = 0;
		int y= rand()%10000;
		if( y==0 ) y= 2000;
		int z = 2*y -x;

		MyFile << x << " " << y << endl;
		MyFile << y  << " " << x << endl;
		MyFile << z << " " <<  y << endl;
		MyFile << y  << " " <<  z << endl;
		MyFile << rand()%10000 << " " << rand()%10000 << " " <<rand()%10000 << " " <<rand()%10000 << endl;

	}
	else {
		MyFile << "6 10" << '\n' << " 8 8" << '\n' << " 10 10" << '\n' << "8 12" << '\n';
		MyFile << rand()%10000 << " " << rand()%10000 << " " <<rand()%10000 << " " <<rand()%10000 << endl;
		MyFile << "6 10" << '\n' << " 11 5" << '\n' << " 16 10" << '\n' << "11 15" << '\n';
		MyFile << rand()%10000 << " " << rand()%10000 << " " <<rand()%10000 << " " <<rand()%10000 << endl;
	}
	




	return 0;
}