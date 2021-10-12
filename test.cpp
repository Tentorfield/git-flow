#include "c-echo.h"
#include "c-count.h"

#include "gtest/gtest.h"

TEST(EchoTest, HelloWorld) {
    char* test_val[3]; 
    test_val[0] = "./c-echo-count"; 
    test_val[1] = "hello"; 
    test_val[2] = "world";
    EXPECT_EQ("hello world", echo(3,test_val));
}

TEST(EchoTest, EmptyString) {
    char* test_val[1]; 
    test_val[0] = "./c-echo-count";
    EXPECT_EQ("", echo(1,test_val));
}

//the following 3 tests are copied from the instructions
TEST(CountTest, HelloWorld) {
    std::string test_str = "hello world";
    EXPECT_EQ(2, count(test_str));
}

TEST(CountTest, EmptyString) {
    std::string test_str = "";
    EXPECT_EQ(0, count(test_str));
}

TEST(CountTest, ManySpaces) {
    std::string test_str = "   this   string has     weird   spacing";
    EXPECT_EQ(5, count(test_str));
}

// these 2 tests are from Harrioson's lab 1
TEST(EchoTest, SpecialChars) {
    char* test_val[6];
    test_val[0] = "./c-echo-count";
    test_val[1] = "!";
    test_val[2] = "@";
    test_val[3] = "#";
    test_val[4] = "$";
    test_val[5] = "%";
    EXPECT_EQ("! @ # $ %", echo(6,test_val));
}

TEST(EchoTest, AlphaNumericStrings) {
    char* test_val[3];
    test_val[0] = "./c-echo-count";
    test_val[1] = "F1gur471v3ly";
    test_val[2] = "5p34k1ng";
    EXPECT_EQ("F1gur471v3ly 5p34k1ng", echo(3,test_val));
}


int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}


