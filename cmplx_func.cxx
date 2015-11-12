#include <iostream>
#include <complex>
#include <cmath>//for M_PI

using namespace std;

//define a function z(phi)
complex<double> tangens(double phi, complex<double>ii){
  //complex<double>k=complex<double>()
  return tan((1.0+ii)*phi);
}

int main(){
  int N=400;
  //int ArraySize=N;
  complex<double>p[N];
  double phi;
  double dphi=2*M_PI/N;
  complex<double>ii=complex<double> (0.0,1.0);
  // Example how to declare a single complex variable:
  //complex<double> c;
  // d = 1 + 2i 
  //complex<double> d = complex<double>(1.0, 2.0); 
  
  for(int i=0;i<N;i++){//Array beginnt immer bei i=0!!!
    phi=i*dphi-M_PI;//because phi varies from -pi to +pi
    p[i]=tangens(phi,ii);
    //p[i]=exp(i*dphi*ii);
    //cout << i << "\t" << phi << "\t" << real(p[i]) << "\t" << imag(p[i]) << "\t" << abs(p[i]) << endl;//abs stands for absolute value of complex numbers
      cout << phi << "\t" << real(p[i]) << "\t" << imag(p[i]) << endl;
  }
  return 0;
}
