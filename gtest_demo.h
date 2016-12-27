#include <string.h>
#include <stdint.h>
#include <unistd.h>
#include <vector>
#include <cstring>
#include <string>
#include <arpa/inet.h>
#include <tr1/functional>
#include <tr1/unordered_map>
#include <tr1/memory>
#include <gtest/gtest.h>

class TemplateTest : public ::testing::Test
{
protected:
    virtual void SetUp();
    virtual void TearDown();
};
