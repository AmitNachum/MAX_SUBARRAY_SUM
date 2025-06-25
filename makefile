CXX = g++
CXXFLAGS = -std=c++17 -g -Wall -Werror 
SRC = main_max_sum_suba.cpp 
OBJ = $(SRC:.cpp=.o)
TARGET = main_sub_sum

all:$(TARGET)

$(TARGET): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(TARGET)



%.o:%.cpp 
	$(CXX) $(CXXFLAGS) -c $< -o $@


.PHONY: clean

clean:
	rm $(OBJ) $(TARGET)



