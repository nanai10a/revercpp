CPP_FILES := $(wildcard *.cpp)
OBJ_FILES := $(CPP_FILES:.cpp=.o)
TARGET := revercpp

$(TARGET): $(OBJ_FILES)
	clang++ -std=c++20 -o $@ $^

%.o: %.cpp
	clang++ -std=c++20 -c $< -o $@
