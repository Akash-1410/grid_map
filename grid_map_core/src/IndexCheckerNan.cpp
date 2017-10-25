/*
 * IndexCheckerNan.cpp
 *
 *  Created on: Oct 16, 2017
 *      Author: Perry Franklin
 */

#include "grid_map_core/IndexCheckerNan.hpp"
#include <iostream>
namespace grid_map {

IndexCheckerNan::IndexCheckerNan(const GridMap& map, const std::string& layer):
    IndexChecker(map),
    layer_(layer){}

bool IndexCheckerNan::check(const Index& index) const{
  return std::isnan(map_.at(layer_, index));
}

}  // namespace grid_map

