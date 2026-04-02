#include <stdbool.h>
#include <stdio.h>

// make Celcius
double f_to_c(double f) {
  double c = (double)5 / 9 * (f - 32);
  printf("%d \n", c);
  return c;
}
float k_to_c(float k) {
  float c = k + 273.15;
  return c;
}

// make Fahrenheit
float c_to_f(float c) {
  float f = (c * 1.8) + 32;
  return f;
}

float k_to_f(float k) {
  float c = k_to_c(k);
  float f = c_to_f(c);
  return f;
}

// make Kelvin
float c_to_k(float c) {
  float k = c + 273.15;
  return k;
}

float f_to_k(float f) {
  float c = f_to_c(f);
  float k = c - 273.15;
  return k;
}

int main() {
  int checkcont = true;
  int conty = ' ';
  bool cont = true;
  while (cont == true) {

    int valIn;
    float outVal;
    char outType = ' ';
    char inType = ' ';
    char inTypeFull[2] = "";
    char outTypeFull[2] = "";
    while (inType != 'F' && inType != 'C' && inType != 'K') {
      printf("Enter the input type you want | F , C, K \n");
      scanf("%s", &inType);
    }

    if (inType == 'F') {
      inTypeFull[0] = *"Fahrenheit";
    } else if (inType == 'C') {
      inTypeFull[0] = *"Celcius";
    } else {
      inTypeFull[0] = *"Kelvin";
    }

    while (outType != 'F' && outType != 'C' && outType != 'K') {
      printf("Enter the result type you want | F , C, K \n");
      scanf("%s", &outType);
    }
    if (outType == 'F') {
      outTypeFull[0] = *"Fahrenheit";
    } else if (outType == 'C') {
      outTypeFull[0] = *"Celcius";
    } else {
      outTypeFull[0] = *"Kelvin";
    }

    printf("Enter a value in %s \n", inTypeFull);
    scanf("%d", &valIn);

    if (inTypeFull[0] == 'F') { // From F
      if (outTypeFull[0] == 'C') {
        outVal = f_to_c(valIn);
      } else if (outTypeFull[0] == 'K') {
        outVal = f_to_k(valIn);
      }
    } else if (inTypeFull[0] == 'K') { // From K
      if (outTypeFull[0] == 'C') {
        outVal = k_to_c(valIn);
      } else if (outTypeFull[0] == 'F') {
        outVal = k_to_f(valIn);
      }
    } else if (inTypeFull[0] == 'C') { // From C
      if (outTypeFull[0] == 'F') {
        outVal = c_to_f(valIn);
      } else if (outTypeFull[0] == 'K') {
        outVal = c_to_k(valIn);
      }
    }

    // outVal = f_to_c(valIn);
    printf("%d degrees %s is %f degrees %s \n", valIn, inTypeFull, outVal, outTypeFull);
    printf(" Enter 0 to continue, and 1 to quit \n");
    scanf("%i", &conty);
    while (checkcont  == true) {
      if (conty == 0) {
        cont = true;
        checkcont = false;
        printf("\n \n------------------------------------------------------        \n \n");
      }
      else if(conty == 1){
        checkcont = false;
        cont = false;
      }
      else{
        printf("either 1 or 0 \n");
        checkcont = true;
      }
    }
  }
  return 0;
}
