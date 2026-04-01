# Khai bao bien de de thay doi sau nay
CXX = g++
CXXFLAGS = -Wall -g

# Muc tieu mac dinh khi go 'make'
all: program

# Cach tao ra file thuc thi 'program' tu cac file .o
program: main.o NgayThang.o
	$(CXX) $(CXXFLAGS) main.o NgayThang.o -o program

# Cach tao ra file main.o
main.o: main.cpp NgayThang.h
	$(CXX) $(CXXFLAGS) -c main.cpp

# Cach tao ra file NgayThang.o
NgayThang.o: NgayThang.cpp NgayThang.h
	$(CXX) $(CXXFLAGS) -c NgayThang.cpp

# Lenh don dep cac file tam
clean:
	rm -f *.o program

#cd "/Users/capthanhphong/Desktop/dv/ky2-nam1/oopLab2/bai1"