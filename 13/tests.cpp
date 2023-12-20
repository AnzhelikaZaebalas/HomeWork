#include "task01.h"
#include "task02.h"
#include "task03.h"
#include "task04.h"
#include <gtest/gtest.h>

void print(const std::string& message) {
    std::cout << message << std::endl;
}

TEST(factTest, PositiveTest) {
    std::stringstream buffer;
    std::streambuf* oldCoutBuffer = std::cout.rdbuf(buffer.rdbuf());
    std::string ans = "120";

    print(std::to_string(fact(5, 1)));

    std::string output = buffer.str();
    EXPECT_EQ(output, ans + "\n");

    std::cout.rdbuf(oldCoutBuffer);
}

TEST(factTest, NegativeTest) {
    std::stringstream buffer;
    std::streambuf* oldCoutBuffer = std::cout.rdbuf(buffer.rdbuf());
    std::string ans = "121";

    print(std::to_string(fact(5, 1)));

    std::string output = buffer.str();
    EXPECT_NE(output, ans + "\n");

    std::cout.rdbuf(oldCoutBuffer);
}

TEST(powTest, PositiveTest) {
    std::stringstream buffer;
    std::streambuf* oldCoutBuffer = std::cout.rdbuf(buffer.rdbuf());
    std::string ans = "125";

    print(std::to_string(pow(5, 3)));

    std::string output = buffer.str();
    EXPECT_EQ(output, ans + "\n");

    std::cout.rdbuf(oldCoutBuffer);
}

TEST(powTest, NegativeTest) {
    std::stringstream buffer;
    std::streambuf* oldCoutBuffer = std::cout.rdbuf(buffer.rdbuf());
    std::string ans = "126";

    print(std::to_string(pow(5, 3)));

    std::string output = buffer.str();
    EXPECT_NE(output, ans + "\n");

    std::cout.rdbuf(oldCoutBuffer);
}

TEST(fibTest, PositiveTest) {
    std::stringstream buffer;
    std::streambuf* oldCoutBuffer = std::cout.rdbuf(buffer.rdbuf());
    std::string ans = "21";

    print(std::to_string(fib(8)));

    std::string output = buffer.str();
    EXPECT_EQ(output, ans + "\n");

    std::cout.rdbuf(oldCoutBuffer);
}

TEST(fibTest, NegativeTest) {
    std::stringstream buffer;
    std::streambuf* oldCoutBuffer = std::cout.rdbuf(buffer.rdbuf());
    std::string ans = "13";

    print(std::to_string(fib(8)));

    std::string output = buffer.str();
    EXPECT_NE(output, ans + "\n");

    std::cout.rdbuf(oldCoutBuffer);
}

TEST(fibNoRecTest, PositiveTest) {
    std::stringstream buffer;
    std::streambuf* oldCoutBuffer = std::cout.rdbuf(buffer.rdbuf());
    std::string ans = "21";

    print(std::to_string(fibNoRec(8)));

    std::string output = buffer.str();
    EXPECT_EQ(output, ans + "\n");

    std::cout.rdbuf(oldCoutBuffer);
}

TEST(fibNoRecTest, NegativeTest) {
    std::stringstream buffer;
    std::streambuf* oldCoutBuffer = std::cout.rdbuf(buffer.rdbuf());
    std::string ans = "13";

    print(std::to_string(fibNoRec(8)));

    std::string output = buffer.str();
    EXPECT_NE(output, ans + "\n");

    std::cout.rdbuf(oldCoutBuffer);
}

int main(int argc, char** argv) {
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}