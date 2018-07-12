#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int nilai1, nilai2, max;
	cout<<"\t\tMencari Nilai Terbesar\n";
	cout<<"Input Bilangan 1 :";
	cin>>nilai1;
	cout<<"Input Bilangan 2 :";
	cin>>nilai2;
	
	if(nilai1>nilai2){
		max= nilai1;
	}
	else{
		max= nilai2;
	}
	cout<<"\nBilangan terbesar = "<<max;
	
	getch();
	
}
