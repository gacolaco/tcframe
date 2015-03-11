#include "gtest/gtest.h"

#include "tcframe/exception.hpp"

#include <vector>

using std::vector;
using tcframe::Failure;
using tcframe::IOFormatException;
using tcframe::ParsingException;
using tcframe::PrintingException;

TEST(ParsingException, Construction) {
    ParsingException e("foo");

    EXPECT_EQ((vector<Failure>{Failure("foo", 0)}), e.getFailures());
    EXPECT_EQ("foo", e.getMessage());
}

TEST(PrintingException, Construction) {
    PrintingException e("foo");

    EXPECT_EQ((vector<Failure>{Failure("foo", 0)}), e.getFailures());
    EXPECT_EQ("foo", e.getMessage());
}

TEST(IOFormatException, Construction) {
    IOFormatException e("foo");

    EXPECT_EQ((vector<Failure>{Failure("foo", 0)}), e.getFailures());
    EXPECT_EQ("foo", e.getMessage());
}