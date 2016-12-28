#include <gtest/gtest.h>

class TemplateTest : public ::testing::Test
{
protected:
    virtual void SetUp();
    virtual void TearDown();
};
