#include <stdio.h>

// make Celcius
double f_to_c(int f){
 double c = (5/9*(f-32));
 return c;
}
double k_to_c(int k){
 double c = k - 273.15;
 return c;
}

// make Fahrenheit
double c_to_f(int c){
 double f = (c * 1.8)+32;
 return f;
}

double k_to_f(int k){
 double c = k_to_c(k);
 double f = c_to_f(c);
 return f;
}

// make Kelvin
double c_to_k(int c){
 double k = c + 273.15;
 return k;
}

int f_to_k(int f){
 double c = f_to_c(f);
 double k = c+ 273.15;
 return k;
}

// Debug
double dbg(int f, int c, int k){
 return f,c,k;
}


int main(){
 double fOut = c_to_f(50);
 printf("Calculator Compiled and Running \n");
 printf("ALSO! 50 degrees Celcius is %f degrees Fahrenheit", fOut );

 return 0;
}
