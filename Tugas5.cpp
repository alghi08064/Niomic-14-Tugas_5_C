#include <iostream>
#include <conio.h>
#include <math.h>
#include <iomanip>
#include <string.h>
#include <time.h>
#include <windows.h>
#include <stdlib.h>

using namespace std;
void setcolor(unsigned short color)
{
HANDLE hCon = GetStdHandle(STD_OUTPUT_HANDLE);
SetConsoleTextAttribute(hCon,color);
}


int main()
{
	int a, b,c;
    setcolor(5);
	cout<<"Inputkan Nilai Ynag Ingin Dipangkatkan: ";
	cin>>a;
	setcolor(3);
	cout<<"Inputkan Nilai Pangkat : ";
	cin>>b;
	c = pow(a,b);
	cout<<"Hasil Perpangkatan : "<<c<<endl;
    return 0;
}
