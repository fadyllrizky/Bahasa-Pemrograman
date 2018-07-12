#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int panjang, lebar;
	float luas;
	
	cout<<"Input panjang Persegi Panjang";
	cin>>panjang;
	cout<<"Input lebar persegi panjang";
	cin>>lebar;
	
	luas=panjang*lebar;
	
	cout<<"\nLuas dan keliling persegi panjang";
	cout<<"\nPanjang  : "<<panjang;
	cout<<"\nLebar    : "<<lebar;
	cout<<"\nLuas     : "<<luas;
	
	getch();
}
