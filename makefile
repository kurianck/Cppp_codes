CXX=/usr/local/bin/g++
CXXFLAGS= -std=c++11 

.cpp:
	$(CXX) $(CXXFLAGS) $@.cpp -o $@

