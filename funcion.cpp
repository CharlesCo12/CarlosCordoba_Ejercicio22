#include <iostream>
#include <cstdlib>
#include <math.h>  

using std::cout;
using std::endl;

void McMc(int N);
double f(double x);
double min(double x, double y);

int main(){
  int N=10000;
  McMc(N);
  return 0;
}

void McMc(int N){
  int i;
  srand48(time(0));  
  double valor= 2*drand48()-1;
  cout << valor << endl;
  for(i=1;i<N;i++){  
  double propuesta = valor + (2*drand48()-1);
  double r = min(1,f(propuesta)/f(valor));
  if(drand48()<r){
      valor = propuesta;
  }
  else{
      valor=valor;
  }      
  cout << valor<< endl;
  }    
}

double f(double x){
    double y = (x*x)/2;
    return (exp(-y));
}

double min(double x, double y){
    if(x>y){
        return(y);
    }
    else{
        return(x);
    }
}