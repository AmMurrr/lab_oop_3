#include <gtest/gtest.h>
#include "Trapezoid.hpp"
#include "Rombus.hpp"
#include "Pentagon.hpp"
#include "array.hpp"

TEST(Trap,c_default) {
    Trapezoid tr;
    EXPECT_DOUBLE_EQ(tr.area(), 0.0);
    EXPECT_EQ(tr.center(), std::pair(0.0,0.0));
}

TEST(Romb,c_default) {
    Rombus rb;
    EXPECT_DOUBLE_EQ(rb.area(), 0.0);
    EXPECT_EQ(rb.center(), std::pair(0.0,0.0));
}

TEST(Penta,c_default) {
    Pentagon pt;
    EXPECT_DOUBLE_EQ(pt.area(), 0.0);
    EXPECT_EQ(pt.center(), std::pair(0.0,0.0));
}


// Еще точки нужно получать как-то