#include "task01.h"
#include "task02.h"
#include "task03.h"
#include "task04.h"
#include "task05.h"
#include "task06.h"
#include <gtest/gtest.h>

TEST(BubbleSortTest, PositiveTest) {
  int arr[] = {5, 2, 8, 1, 9};
  int expected[] = {1, 2, 5, 8, 9};
  int size = sizeof(arr) / sizeof(arr[0]);

  bubblesort(arr, size);

  for (int i = 0; i < size; ++i) {
    EXPECT_EQ(arr[i], expected[i]);
  }
}

TEST(BubbleSortTest, NegativeTest) {
  int arr[] = {9, 5, 2, 8, 1};
  int expected[] = {1, 2, 5, 8, 9};
  int size = sizeof(arr) / sizeof(arr[0]);

  bubblesort(arr, size);

  for (int i = 0; i < size; ++i) {
    EXPECT_EQ(arr[i], expected[i]);
  }
}

TEST(BubbleSortTest, EmptyArrayTest) {
  int arr[] = {};
  int expected[] = {};
  int size = sizeof(arr) / sizeof(arr[0]);

  bubbleSort(arr, size);

  for (int i = 0; i < size; ++i) {
    EXPECT_EQ(arr[i], expected[i]);
  }
}

TEST(BubbleSortTest, SingleElementTest) {
  int arr[] = {5};
  int expected[] = {5};
  int size = sizeof(arr) / sizeof(arr[0]);

  bubbleSort(arr, size);

  for (int i = 0; i < size; ++i) {
    EXPECT_EQ(arr[i], expected[i]);
  }
}

TEST(BubbleSortTest, AlreadySortedTest) {
  int arr[] = {1, 2, 3, 4, 5};
  int expected[] = {1, 2, 3, 4, 5};
  int size = sizeof(arr) / sizeof(arr[0]);

  bubbleSort(arr, size);

  for (int i = 0; i < size; ++i) {
    EXPECT_EQ(arr[i], expected[i]);
  }
}

TEST(SelectionSortTest, PositiveTest) {
    int arr[] = {5, 2, 8, 1, 9};
    int expected[] = {9, 8, 5, 2, 1};
    int size = sizeof(arr) / sizeof(arr[0]);

    selectionSort(arr, size);

    for (int i = 0; i < size; ++i) {
        EXPECT_EQ(arr[i], expected[i]);
    }
}

TEST(SelectionSortTest, NegativeTest) {
    int arr[] = {1, 2, 3, 4, 5};
    int expected[] = {1, 2, 5, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    selectionSort(arr, size);

    for (int i = 0; i < size; ++i) {
        EXPECT_NE(arr[i], expected[i]);
    }
}

TEST(insertionSortTest, PositiveTest) {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int expected[] = {11, 12, 22, 25, 34, 64};
    int size = sizeof(arr) / sizeof(arr[0]);

    insertionSort(arr, size);

    for (int i = 0; i < size; ++i) {
        EXPECT_EQ(arr[i], expected[i]);
    }
}

TEST(insertionSortTest, NegativeTest) {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int expected[] = {11, 12, 22, 25, 34, 64};
    int size = sizeof(arr) / sizeof(arr[0]);

    insertionSort(arr, size);

    for (int i = 0; i < size; ++i) {
        EXPECT_NE(arr[i], expected[i]);
    }
}

TEST(sortRowTest, PositiveTest) {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int expected[] = {11, 12, 22, 25, 34, 64};
    int size = sizeof(arr) / sizeof(arr[0]);

    sortRow(arr, size);

    for (int i = 0; i < size; ++i) {
        EXPECT_EQ(arr[i], expected[i]);
    }
}

TEST(sortRowTest, NegativeTest) {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int expected[] = {11, 12, 22, 25, 34, 64};
    int size = sizeof(arr) / sizeof(arr[0]);

    sortRow(arr, size);

    for (int i = 0; i < size; ++i) {
        EXPECT_NE(arr[i], expected[i]);
    }
}

TEST(sort2DArrayRowByRowTest, PositiveTest) {
    int arr[2][3] = {{4, 3, 2}, {7, 1, 5}};
    int expected[2][3] = {{2, 3, 4}, {1, 5, 7}};
    int size = sizeof(arr) / sizeof(arr[0]);

    sort2DArrayRowByRow(arr, size);

    for (int i = 0; i < size; ++i) {
        EXPECT_EQ(arr[i], expected[i]);
    }
}

TEST(sort2DArrayRowByRowTest, NegativeTest) {
    int arr[2][3] = {{4, 3, 2}, {7, 1, 5}};
    int expected[2][3] = {{2, 3, 4}, {1, 5, 7}};
    int size = sizeof(arr) / sizeof(arr[0]);

    sort2DArrayRowByRow(arr, size);

    for (int i = 0; i < size; ++i) {
        EXPECT_NE(arr[i], expected[i]);
    }
}

TEST(sort2DArrayColumnByColumnTest, PositiveTest) {
    int arr[2][3] = {{3, 1, 4}, {1, 5, 9}};
    int expected[2][3] = {{1, 1, 4}, {3, 5, 9}};
    int size = sizeof(arr) / sizeof(arr[0]);

    sort2DArrayColumnByColumn(arr, size);

    for (int i = 0; i < size; ++i) {
        EXPECT_EQ(arr[i], expected[i]);
    }
}

TEST(sort2DArrayColumnByColumnTest, NegativeTest) {
    int arr[2][3] = {{3, 1, 4}, {1, 5, 9}};
    int expected[2][3] = {{1, 1, 4}, {3, 5, 9}};
    int size = sizeof(arr) / sizeof(arr[0]);

    sort2DArrayColumnByColumn(arr, size);

    for (int i = 0; i < size; ++i) {
        EXPECT_NE(arr[i], expected[i]);
    }
}

TEST(sort2DArraySnakeTest, PositiveTest) {
    int arr[2][3] = {{3, 1, 4}, {1, 5, 9}};
    int expected[2][3] = {{1, 3, 4}, {9, 5, 1}};
    int size = sizeof(arr) / sizeof(arr[0]);

    sort2DArraySnake(arr, size);

    for (int i = 0; i < size; ++i) {
        EXPECT_EQ(arr[i], expected[i]);
    }
}

TEST(sort2DArraySnakeTest, NegativeTest) {
    int arr[2][3] = {{3, 1, 4}, {1, 5, 9}};
    int expected[2][3] = {{1, 3, 4}, {9, 5, 1}};
    int size = sizeof(arr) / sizeof(arr[0]);

    sort2DArraySnake(arr, size);

    for (int i = 0; i < size; ++i) {
        EXPECT_NE(arr[i], expected[i]);
    }
}

int main(int argc, char** argv) {
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}