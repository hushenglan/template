/*
 * tracer.cc
 *
 *  Created on: 2017年2月3日
 *      Author: blue
 */

#include "tracer.hpp"

long SortTracer::n_created = 0;
long SortTracer::n_destroyed = 0;
long SortTracer::n_max_live = 0;
long SortTracer::n_assigned = 0;
long SortTracer::n_compared = 0;

