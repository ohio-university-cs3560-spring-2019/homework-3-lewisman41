// Nathan Lewis
// 3/2/2019
// This is the implementation file for HW7

#include <iostream>
#include <cmath>
#include <stdarg.h>
#include "HW7.h"

double stddev(int n, ...)
{
  va_list args;
  double sum = 0.0;
  
  va_start(args, n);

  for(int i = 0; i < n; i++)
    {
      sum += va_arg(args, int);
    }

  double mean = sum / n;
  double stddev = 0.0;
  va_list arg;
  va_start(arg, n);
  
  for(int i = 0; i <= n - 1; i++)
    {
      int x = va_arg(arg, int);
      stddev += (x - mean) * (x - mean);
    }

  stddev /= n;
  if(stddev == 0)
    {
      std::cout << "Sigma is zero." << std::endl;
    }

  double fin = sqrt(stddev);
  return fin;
}
