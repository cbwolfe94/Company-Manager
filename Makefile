OBJECTS = main.o employee.o company.o
CXX = g++
FLAGS = -Wall -Werror -Wextra

company: $(OBJECTS)
	$(CXX) -o company $(OBJECTS) $(FLAGS)

company.o: company.cpp company.h
	$(CXX) -c company.cpp

employee.o: employee.cpp employee.h
	$(CXX) -c employee.cpp

main.o: main.cpp employee.h company.h
	$(CXX) -c main.cpp

.PHONY = clean
clean:
	rm -f company *.o
	

