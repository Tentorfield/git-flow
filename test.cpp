#include "c-echo.h"

#include "gtest/gtest.h"

TEST(EchoTest, HelloWorld) {
    char* test_val[3]; 
    test_val[0] = "./c-echo"; 
    test_val[1] = "hello"; 
    test_val[2] = "world";
    EXPECT_EQ("hello world", echo(3,test_val));
}

TEST(EchoTest, EmptyString) {
    char* test_val[1]; 
    test_val[0] = "./c-echo";
    EXPECT_EQ("", echo(1,test_val));
}


TEST(EchoTest, LongString) {
    char* test_val[7]; 
    test_val[0] = "./c-echo";
    test_val[1] = "Hello";
    test_val[2] = "world,";
    test_val[3] = "once";
    test_val[4] = "again";
    test_val[5] = "we";
    test_val[6] = "meet.";
    EXPECT_EQ("Hello world, once again we meet.", echo(7,test_val));
}

TEST(EchoTest, SpecialChars) {
    char* test_val[6];
    test_val[0] = "./c-echo";
    test_val[1] = "!";
    test_val[2] = "@";
    test_val[3] = "#";
    test_val[4] = "$";
    test_val[5] = "%";
    EXPECT_EQ("! @ # $ %", echo(6,test_val));
}

TEST(EchoTest, AlphaNumericStrings) {
    char* test_val[3];
    test_val[0] = "./c-echo";
    test_val[1] = "F1gur471v3ly";
    test_val[2] = "5p34k1ng";
    EXPECT_EQ("F1gur471v3ly 5p34k1ng", echo(3,test_val));
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}


