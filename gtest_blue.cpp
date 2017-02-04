
#include "global_environment.h"
//#include "template_test.h"
//#include "primer/tracer_test.hpp"

int main(int argc, char* argv[]) {
	::testing::AddGlobalTestEnvironment(new GlobalEnvironment());
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
