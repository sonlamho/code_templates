
#include <iostream>
#include <cstdio>
#include <cmath>

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

double absoluteValue(const double a) {
  return std::abs(a);
}

double cubed(const double a) {
  auto arr1 = xt::xarray<double>({a});
  return xt::pow(arr1, 3)(0);
}
