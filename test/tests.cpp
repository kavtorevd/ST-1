// Copyright 2025 UNN-CS

#include <gtest/gtest.h>
#include <cstdint>
#include "alg.h"

TEST(st1, sumPrime1) {
  uint64_t res = sumPrime(2000000);
  uint64_t expected = 142913828922;
  EXPECT_EQ(expected, res);
}

TEST(st1, sumPrime2) {
  uint64_t res = sumPrime(10);
  uint64_t expected = 17;
  EXPECT_EQ(expected, res);
}

TEST(st1, checkPrime1) {
  EXPECT_TRUE(checkPrime(2));
}

TEST(st1, checkPrime2) {
  EXPECT_TRUE(checkPrime(3));
}

TEST(st1, checkPrime3) {
  EXPECT_FALSE(checkPrime(4));
}

TEST(st1, checkPrime4) {
  EXPECT_TRUE(checkPrime(5));
}

TEST(st1, checkPrime5) {
  EXPECT_FALSE(checkPrime(1));
}

TEST(st1, checkPrime6) {
  EXPECT_FALSE(checkPrime(0));
}

TEST(st1, nPrime1) {
  uint64_t res = nPrime(1);
  uint64_t expected = 2;
  EXPECT_EQ(expected, res);
}

TEST(st1, nPrime2) {
  uint64_t res = nPrime(2);
  uint64_t expected = 3;
  EXPECT_EQ(expected, res);
}

TEST(st1, nPrime3) {
  uint64_t res = nPrime(3);
  uint64_t expected = 5;
  EXPECT_EQ(expected, res);
}

TEST(st1, nPrime4) {
  uint64_t res = nPrime(4);
  uint64_t expected = 7;
  EXPECT_EQ(expected, res);
}

TEST(st1, nPrime5) {
  uint64_t res = nPrime(5);
  uint64_t expected = 11;
  EXPECT_EQ(expected, res);
}

TEST(st1, nextPrime1) {
  uint64_t res = nextPrime(2);
  uint64_t expected = 3;
  EXPECT_EQ(expected, res);
}

TEST(st1, nextPrime2) {
  uint64_t res = nextPrime(3);
  uint64_t expected = 5;
  EXPECT_EQ(expected, res);
}

TEST(st1, nextPrime3) {
  uint64_t res = nextPrime(5);
  uint64_t expected = 7;
  EXPECT_EQ(expected, res);
}

TEST(st1, nextPrime4) {
  uint64_t res = nextPrime(11);
  uint64_t expected = 13;
  EXPECT_EQ(expected, res);
}

TEST(st1, nextPrime5) {
  uint64_t res = nextPrime(13);
  uint64_t expected = 17;
  EXPECT_EQ(expected, res);
}

TEST(st1, sumPrime3) {
  uint64_t res = sumPrime(5);
  uint64_t expected = 10;
  EXPECT_EQ(expected, res);
}

TEST(st1, sumPrime4) {
  uint64_t res = sumPrime(20);
  uint64_t expected = 77;
  EXPECT_EQ(expected, res);
}

TEST(st1, sumPrime5) {
  uint64_t res = sumPrime(50);
  uint64_t expected = 328;
  EXPECT_EQ(expected, res);
}

TEST(st1, sumPrime6) {
  uint64_t res = sumPrime(100);
  uint64_t expected = 1060;
  EXPECT_EQ(expected, res);
}

TEST(st1, sumPrime_7) {
  uint64_t res = sumPrime(1000);
  uint64_t expected = 76127;
  EXPECT_EQ(expected, res);
}
