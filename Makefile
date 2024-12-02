CPP_FILES := $(wildcard *.cpp)
OBJ_FILES := $(CPP_FILES:.cpp=.o)
TARGET := revercpp
TEST := test

$(TARGET): $(filter-out test.o, $(OBJ_FILES))
	c++ -std=c++20 -o $@ $^

$(TEST): $(filter-out main.o, $(OBJ_FILES))
	c++ -std=c++20 -o $@ $^

%.o: %.cpp
	c++ -std=c++20 -c $< -o $@

clean:
	rm -vf $(OBJ_FILES) $(TARGET) $(TEST)
