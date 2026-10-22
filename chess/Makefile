CXX = g++
DEBUG ?= false

ifeq ($(DEBUG),true)
    CXXFLAGS = -std=c++17 -Wall -Wextra -g -O0 -DDEBUG
else
    CXXFLAGS = -std=c++17 -Wall -Wextra -O2
endif

TARGET = build/chess
SOURCE = src/main.cpp

.PHONY: all clean run

all: $(TARGET)

$(TARGET): $(SOURCE)
	mkdir -p build
	$(CXX) $(CXXFLAGS) $(SOURCE) -o $(TARGET)

run: all
	./$(TARGET)

clean:
	rm -rf build
