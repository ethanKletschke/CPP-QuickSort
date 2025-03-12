# Variables
CXX = g++
CXX_FLAGS = -Wall -std=c++20
SRC_DIR = src
BUILD_DIR = obj
BIN_DIR = bin
SRC_EXT = cpp
SRC = $(wildcard $(SRC_DIR)/*.$(SRC_EXT))
OBJ = $(SRC:$(SRC_DIR)/%.$(SRC_EXT)=$(BUILD_DIR)/%.o)
TARGET = main

# Rules
.PHONY: all c

all: $(BUILD_DIR) $(BIN_DIR) $(BIN_DIR)/$(TARGET)

$(BIN_DIR)/$(TARGET): $(OBJ)
	$(CXX) $(CXX_FLAGS) -o $@ $^

$(BUILD_DIR)/%.o: $(SRC_DIR)/%.$(SRC_EXT)
	$(CXX) $(CXX_FLAGS) -c $< -o $@

c:
	make clean

clean:
	if exist $(BUILD_DIR)\*.o del /Q $(BUILD_DIR)\*.o
	if exist $(BIN_DIR)\$(TARGET) del /Q $(BIN_DIR)\$(TARGET)
