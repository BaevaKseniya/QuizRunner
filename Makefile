# Makefile for QuizRunner

CXX = g++
CXXFLAGS = -std=c++17 -Wall -Wextra -Werror
SRC_DIR = src
BUILD_DIR = build
TEST_DIR = tests

SRCS = $(wildcard $(SRC_DIR)/*.cpp)
OBJS = $(patsubst $(SRC_DIR)/%.cpp, $(BUILD_DIR)/%.o, $(SRCS))

TARGET = $(BUILD_DIR)/quizrunner

.PHONY: all clean

all: $(TARGET)

$(TARGET): $(OBJS)
 mkdir -p $(BUILD_DIR)
 $(CXX) $(CXXFLAGS) $^ -o $@

$(BUILD_DIR)/%.o: $(SRC_DIR)/%.cpp
 mkdir -p $(BUILD_DIR)
 $(CXX) $(CXXFLAGS) -c $< -o $@

clean:
 rm -rf $(BUILD_DIR)
