#include <gtest/gtest.h>
#include <string>
#include "swap_a_b.h" 


TEST(normalSituation_Test, test1)
{
    std::string test_str = "acb";      
    EXPECT_TRUE(swap_a_b(test_str));
    EXPECT_EQ(test_str, "bca");
}

TEST(normalSituation_Test, test2)
{
    std::string test_str = "aabacbaa"; 
    EXPECT_TRUE(swap_a_b(test_str));
    EXPECT_EQ(test_str, "bbabcabb");
}

TEST(boundarySituation_Test, test1)
{
    std::string test_str = "   ";
    EXPECT_FALSE(swap_a_b(test_str));
    EXPECT_EQ(test_str, "   ");
}

TEST(boundarySituation_Test, test2)
{
    std::string test_str = "";
    EXPECT_FALSE(swap_a_b(test_str));
    EXPECT_EQ(test_str, "");
}

TEST(incorrectDataSituation_Test, test1)
{
    std::string test_str = "geeguih";
    EXPECT_FALSE(swap_a_b(test_str));
    EXPECT_EQ(test_str, "geeguih");
}

TEST(incorrectDataSituation_Test, test2)
{
    std::string test_str = "2k1k0f-f019r_-=1209`jjfpok";
    EXPECT_FALSE(swap_a_b(test_str));
    EXPECT_EQ(test_str, "2k1k0f-f019r_-=1209`jjfpok");
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}