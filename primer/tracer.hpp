/*
 * tracer.hpp
 *
 *  Created on: 2017年2月3日
 *      Author: blue
 */

#ifndef PRIMER_TRACER_HPP_
#define PRIMER_TRACER_HPP_


#include <iostream>

class SortTracer {
private:
	int value;
	int generation;

	static long n_created;
	static long n_destroyed;
	static long n_assigned;
	static long n_compared;
	static long n_max_live;

	static void update_max_live() {
		if (n_created - n_destroyed > n_max_live) {
			n_max_live = n_created - n_destroyed;
		}
	}

public:
	static void init() {
		n_created = 0;
		n_destroyed = 0;
		n_max_live = 0;
		n_assigned = 0;
		n_compared = 0;
	}

	static long creations() {
		return n_created;
	}

	static long destructions() {
		return n_destroyed;
	}

	static long assignments() {
		return n_assigned;
	}

	static long comparisons() {
		return n_compared;
	}

	static long max_live() {
		return n_max_live;
	}

public:
	SortTracer(int v = 0) : value(v),
							generation(1) {
		++n_created;
		update_max_live();
		std::cerr << "new SortTracer(value) # " << n_created
				  << ", created generation " << generation
				  << " (total: " << n_created - n_destroyed
				  << ")\n";
	}

	SortTracer(SortTracer const& b) : value(b.value),
									  generation(b.generation + 1) {
		++n_created;
		update_max_live();
		std::cerr << "new SortTracer(SortTracer) #" << n_created
				  << ", copied as generation " << generation
				  << "(total: " << n_created - n_destroyed
				  << ")\n";
	}

	~SortTracer() {
		++n_destroyed;
		update_max_live();
		std::cerr << "SortTracer generation " << generation
				  << " destroyed (total: " << n_created - n_destroyed
				  << ")\n";
	}

	SortTracer& operator=(SortTracer const& b) {
		++n_assigned;
		std::cerr << "SortTracer operator= #" << n_assigned
				  << " = " << b.generation
				  << ")\n";
		value = b.value;
		return *this;
	}

	friend bool operator<(SortTracer const& a, SortTracer const& b) {
		++n_compared;
		std::cerr << "SortTracer operator< #" << n_compared
				  << " (generation " << a.generation
				  << " < " << b.generation
				  << ")\n";
		return a.value < b.value;
	}

	int val() const {
		return value;
	}
};


#endif /* PRIMER_TRACER_HPP_ */
