# Khai bao bien de de thay doi sau nay
CXX = g++
CXXFLAGS = -Wall -g

# Muc tieu mac dinh khi go 'make'
all: program

# Cach tao ra file thuc thi 'program' tu cac file .o
program: main.o GioPhutGiay.o
	$(CXX) $(CXXFLAGS) main.o GioPhutGiay.o -o program

# Cach tao ra file main.o
main.o: main.cpp GioPhutGiay.h
	$(CXX) $(CXXFLAGS) -c main.cpp

# Cach tao ra file GioPhutGiay.o
GioPhutGiay.o: GioPhutGiay.cpp GioPhutGiay.h
	$(CXX) $(CXXFLAGS) -c GioPhutGiay.cpp

# Lenh don dep cac file tam
clean:
	rm -f *.o program

#cd "/Users/capthanhphong/Desktop/dv/ky2-nam1/oopLab2/bai4"