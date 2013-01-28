#include <limits>

#include "gmock/gmock.h"
#include "gtest/gtest.h"

#include "dizzy.h"

TEST(MinTest, Value) {
    dizzy::Buffer<4> a={404474.46875,-575393.0625,-752941.1875,-584019.0625};

    dizzy::Sample b = dizzy::min(a);

    EXPECT_THAT(b, testing::FloatEq(-752941.1875));
}

TEST(MaxTest, Value) {
    dizzy::Buffer<4> a={351644.40625,470965.71875,299256.40625,-387536.375};

    dizzy::Sample b = dizzy::max(a);

    EXPECT_THAT(b, testing::FloatEq(470965.71875));
}

TEST(SumTest, Value) {
    dizzy::Buffer<4> a={389725.78125,265101.59375,-884485.625,655265.5};

    dizzy::Sample b = dizzy::sum(a);

    EXPECT_THAT(b, testing::FloatEq(425607.25));
}

int main(int argc, char** argv) {
    testing::InitGoogleMock(&argc, argv);
    return RUN_ALL_TESTS();
}
