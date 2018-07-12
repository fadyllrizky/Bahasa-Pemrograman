#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int nilai ;
	
	cout<<"Input nilai matakuliah = ";
	cin>>nilai;
	
	if(nilai>=85 && nilai <= 100){
		cout<<"Lulus";
		cout<<"\nGrade A";
	}
	if(nilai>=75 && nilai <= 85){
		cout<<"Lulus";
		cout<<"\nGrade B";
	}
	if(nilai>=60 && nilai <= 75){
		cout<<"Lulus";
		cout<<"\nGrade C";
	}
	if(nilai>=45 && nilai <= 60){
		cout<<"Gagal";
		cout<<"\nGrade D";
	}
	if(nilai>=0 && nilai <= 45){
		cout<<"Gagal";
		cout<<"\nGrade E";
	}
	if(nilai<0 || nilai>100){
		cout<<"\nInput nilai antara 0 - 100";
	}
	
	getch();
}
	
