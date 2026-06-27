# Compiler
CXX = g++

# Compiler flags
CXXFLAGS = -std=c++17 -Wall -Iincludes

# Source files
SRC = src/main.cpp \
      src/board.cpp \
      src/Input.cpp \
      src/Tic_tac_toe.cpp

# Object files
OBJ = main.o board.o Input.o Tic_tac_toe.o

# Executable
TARGET = Tic_tac_toe.exe

# Default target
all: $(TARGET)

$(TARGET): $(OBJ)
	$(CXX) $(OBJ) -o $(TARGET)

main.o:
	$(CXX) $(CXXFLAGS) -c src/main.cpp

board.o:
	$(CXX) $(CXXFLAGS) -c src/board.cpp

Input.o:
	$(CXX) $(CXXFLAGS) -c src/Input.cpp

Tic_tac_toe.o:
	$(CXX) $(CXXFLAGS) -c src/Tic_tac_toe.cpp

clean:
	del /Q *.o *.exe

run: $(TARGET)
	.\$(TARGET)