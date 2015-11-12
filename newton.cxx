#include <iostream>
#include <complex>
#include <cmath>

using namespace std;

int main(){
  int i,n=400;
  // Example how to declare a single complex variable:
  complex<double> z0,z1;
  
  for(double re=-2; re<=2; re+=0.01){
    
    for(double im=-2; im<=2; im+=0.01){
     z0 = complex<double>(re,im);
      
      for(i=0;i<=n;i++){
	z1=z0-(z0*z0*z0-1.0)/(3.0*z0*z0);
	if (abs(z1-z0)<1e-8) break;
	z0 = z1;
      }
      cout << re << "\t" << im << "\t" << i << endl;//das Programm kann nicht wissen, dass n die obere Grenze ist!
    }
  }  
  
  
  return 0;
}
