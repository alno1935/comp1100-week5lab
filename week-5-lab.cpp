#include <iostream>
#include <fstream>
#include <math.h>
using namespace std;

int main()
{
int a;
int b;
cout << "please enter the two shorter sides of your triangle" << endl;
cin >>a >>b;
auto c= pow(a,2)+pow(b,2);
auto f=sqrt(c);
cout << "Your third and longest side of your triangle will be " << f;
cout << endl;
ofstream output;
output.open ("output.txt");
output << "The longest side of a triangle with the smaller sides of "<< a <<" and " << b <<" will be "<<f <<"\n";
output.close();
return 0;
}