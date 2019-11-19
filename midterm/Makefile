.SUFFIXES:.cpp .o
OBJECTS = human.o student.o smart_obj.o weak_pointer.o shared_ref.o 
TEST_FILE =test.o $(OBJECTS)
CXX = g++
TEST = test
$(TEST) : $(TEST_FILE)
	$(CXX) -o $(TEST) $(TEST_FILE)

clean:
	rm -rf $(TEST) $(TEST_FILE)

test.o:test.cpp

human.o : human.cpp

student.o : student.cpp

smart_obj.o : smart_obj.cpp

shared_ref.o : shared_ref.cpp

weak_pointer.o : weak_pointer.cpp




