.SUFFIXES: .cpp .o
OBJECTS = Complex.o Float.o Integer.o

TEST_FILE = test.o $(OBJECTS)

CXX = g++

TEST = test

$(TEST) : $(TEST_FILE)
	$(CXX) -o $(TEST) $(TEST_FILE)

clean:
	rm -rf $(TEST_FILE)

Complex.o : Complex.cpp

Float.o : Float.cpp

Integer.o : Integer.cpp

test.o : test.cpp
