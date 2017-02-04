/*
 * tracer.cc
 *
 *  Created on: 2017年2月3日
 *      Author: blue
 */

#include "tracer_test.hpp"

TEST_F(TracerTest, TEST_TRACER_1) {
    SortTracer test(200);
    SortTracer test1(test);
    SortTracer test2 = test1;
    SortTracer test3;
    test3 = test2;
}

TEST_F(TracerTest, TEST_TRACER_2) {
    SortTracer *test = new SortTracer(100);
    SortTracer *test1 = new SortTracer(*test);
    SortTracer *test2 = new SortTracer();
    *test2 = *test1;

    delete test;
    delete test1;
    delete test2;
}

TEST_F(TracerTest, TEST_TRACER_3) {
    SortTracer input[] = { 7, 3, 5, 6, 4, 2, 0, 1, 9, 8 };

    for (int i = 0; i < 10; i++) {
        std::cerr << input[i].val() << ' ';
    }

    std::cerr << std::endl;

    long created_at_start = SortTracer::creations();
    long max_live_at_start = SortTracer::max_live();
    long assigned_at_start = SortTracer::assignments();
    long compared_at_start = SortTracer::comparisons();

    std::cerr << "---[ Start std::sort() ]---\n";
    std::sort<>(&input[0], &input[9] + 1);
    std::cerr << "---[ End std::sort() ]---\n";

    for (int i = 0; i < 10; ++i) {
        std::cerr << input[i].val() << ' ';
    }
    std::cerr << "\n\n";

    std::cerr << "std::sort() of 10 SortTracer's" << " was performed by:\n"
            << SortTracer::creations() - created_at_start
            << " temporary tracers\n " << "up to " << SortTracer::max_live()
            << " tracers at the same time (" << max_live_at_start
            << " before)\n " << SortTracer::assignments() - assigned_at_start
            << " assignments\n "
            << SortTracer::comparisons() - compared_at_start
            << " comparisons\n\n";
}

