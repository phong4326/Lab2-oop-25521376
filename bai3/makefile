# Khai bao bien de de thay doi sau nay
CXX = g++
CXXFLAGS = -Wall -g

# Muc tieu mac dinh khi go 'make'
all: program

# Cach tao ra file thuc thi 'program' tu cac file .o
program: main.o SoPhuc.o
	$(CXX) $(CXXFLAGS) main.o SoPhuc.o -o program

# Cach tao ra file main.o
main.o: main.cpp SoPhuc.h
	$(CXX) $(CXXFLAGS) -c main.cpp

# Cach tao ra file SoPhuc.o
SoPhuc.o: SoPhuc.cpp SoPhuc.h
	$(CXX) $(CXXFLAGS) -c SoPhuc.cpp

# Lenh don dep cac file tam
clean:
	rm -f *.o program

#cd "/Users/capthanhphong/Desktop/dv/ky2-nam1/oopLab2/bai1"