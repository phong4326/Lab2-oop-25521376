# Khai bao bien de de thay doi sau nay
CXX = g++
CXXFLAGS = -Wall -g

# Muc tieu mac dinh khi go 'make'
all: program

# Cach tao ra file thuc thi 'program' tu cac file .o
program: main.o PhanSo.o
	$(CXX) $(CXXFLAGS) main.o PhanSo.o -o program

# Cach tao ra file main.o
main.o: main.cpp PhanSo.h
	$(CXX) $(CXXFLAGS) -c main.cpp

# Cach tao ra file PhanSo.o
PhanSo.o: PhanSo.cpp PhanSo.h
	$(CXX) $(CXXFLAGS) -c PhanSo.cpp

# Lenh don dep cac file tam
clean:
	rm -f *.o program

#cd "/Users/capthanhphong/Desktop/dv/ky2-nam1/oopLab2/bai2"