
#include <iostream>
#include <cstdio>
#include <math.h>

#include "module0.h"
#include "xtensor/xmath.hpp"
#include "xtensor/xarray.hpp"
#include "xtensor/xio.hpp"
#include "xtensor/xview.hpp"

double squareRoot(const double a) {
  double b = sqrt(a);
  if(b!=b) { //Nan check
    return -1.0;
  }else{
    return b;
  }
}

double absolute_value(const double a) {
  return abs(a);
}

double cubed(const double a) {
  auto arr1 = xt::xarray<double>({a});
  return xt::pow(arr1, 3)(0);
}
