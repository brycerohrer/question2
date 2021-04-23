build:
	g++ -o count main.cpp

doc:
	doxygen config
check:
	cppcheck main.cpp