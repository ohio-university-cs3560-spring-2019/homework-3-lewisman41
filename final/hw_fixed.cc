#include <iostream>
#include <vector>
#include <cmath>


/**
  \file hw_fixed.cc
  \brief this function finds the standard deviation of a list of numbers
  \param int* a which is the list of numbers
  \param int n which is the size of the list
  \return returns the standard deviation as a double
 */
double deviation( int* a, int n )
{
	double sum = 0.0;
	for(size_t i = 0; i < n; i++)
	{
		sum += a[i];
	} 
	double mean = sum / n;
	double stddev = 0.0;
	for(size_t i = 0; i <= n -1; i++)
	{
		stddev += (a[i] - mean) * (a[i] - mean);
	}
	stddev /= n;
	if( stddev == 0)
		std::cout << "Sigma is zero." << std::endl;
	double fin = sqrt(stddev);
	return fin;
}
