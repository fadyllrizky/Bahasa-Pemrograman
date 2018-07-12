#include<iostream>
#include<conio.h>
using namespace std;

int main()
{ 
	int banyak; 
	float avg1, avg2, avg3, avg4, avg5, avg6, avg7, avg8, avg9;
	float indos3[50], indos4[50], indos5[50], indous[50], indoun[50];
	float indonr, indons, indona;
	float ings3[50], ings4[50], ings5[50], ingus[50], ingun[50];
	float ingnr, ingns, ingna;
	float maths3[50], maths4[50], maths5[50], mathus[50], mathun[50];
	float mathnr, mathns, mathna;
	float fiss3[50], fiss4[50], fiss5[50], fisus[50], fisun[50];
	float fisnr, fisns, fisna;
	float kims3[50], kims4[50], kims5[50], kimus[50], kimun[50];
	float kimnr, kimns, kimna;
	float bios3[50], bios4[50], bios5[50], bious[50], bioun[50];
	float bionr, bions, biona;
	cout<<"\t==============================="<<endl;
	cout<<"\tProgram Perhitungan Nilai Akhir"<<endl;
 	cout<<"\tFadyl Rizki Maolana (20170801020)"<<endl;
 	cout<<"\t==============================="<<endl;
	cout<<"Masukan Banyak Data = ";
	cin>>banyak;
	
	for(int i=0; i<banyak; i++)
	{
		cout<<"Masukan Data " <<i+1 <<endl<<endl;
		cout<<"1. Bahasa Indonesia"<<endl;
		cout<<"Bahasa Indonesia Kelas 1 = ";
		cin>>indos3[i];
		cout<<"Bahasa Indonesia Kelas 2 = ";
		cin>>indos4[i];
		cout<<"Bahasa Indonesia Kelas 3 = ";
		cin>>indos5[i];
		indonr= (indos3[i] + indos4[i] + indos5[i])/3;
		cout<<"Nilai Rapot = "<< indonr <<endl<<endl;
		cout<<"Bahasa Indonesia Ujian Sekolah = ";
		cin>>indous[50];
		indons=(0.7*indonr)+(0.3*indous[50]);
		cout<<"Nilai Ujian Sekolah = "<< indons << endl<<endl;
		cout<<"Bahasa Indonesia Ujian Nasional = ";
		cin>>indoun[50];
		indona=(0.4*indons)+(0.6*indoun[50]);
		cout<<"Nilai Akhir = "<< indona << endl<<endl;
		if(indona>=40)
		cout<<"Lulus"<<endl;
		else
		cout<<"Tidak Lulus"<<endl;
		cout<<"==============================================="<<endl<<endl;
	}
	{
		cout<<"2. Bahasa Inggris"<<endl;
		cout<<"Bahasa Inggris Kelas 1 = ";
		cin>>ings3[50];
		cout<<"Bahasa Inggris Kelas 2 = ";
		cin>>ings4[50];
		cout<<"Bahasa Inggris Kelas 3 = ";
		cin>>ings5[50];
		ingnr= (ings3[50] + ings4[50] + ings5[50])/3;
		cout<<"Nilai Rapot = "<< ingnr <<endl<<endl;
		cout<<"Bahasa Inggris Ujian Sekolah = ";
		cin>>ingus[50];
		ingns=(0.7*ingnr)+(0.3*ingus[50]);
		cout<<"Nilai Ujian Sekolah = "<< ingns << endl<<endl;
		cout<<"Bahasa Inggris Ujian Nasional = ";
		cin>>ingun[50];
		ingna=(0.4*ingns)+(0.6*ingun[50]);
		cout<<"Nilai Akhir = "<< ingna << endl;
		if(ingna>=40)
		cout<<"Lulus"<<endl;
		else
		cout<<"Tidak Lulus"<<endl;
		cout<<"==============================================="<<endl<<endl;
	}
{
	{
		cout<<"3. MATEMATIKA"<<endl;
		cout<<"MTK Kelas 1 = ";
		cin>>maths3[50];
		cout<<"MTK Kelas 2 = ";
		cin>>maths4[50];
		cout<<"MTK Kelas 3 = ";
		cin>>maths5[50];
		mathnr= (maths3[50] + maths4[50] + maths5[50])/3;
		cout<<"Nilai Rapot = "<< mathnr <<endl<<endl;
		cout<<"MTK Ujian Sekolah = ";
		cin>>mathus[50];
		mathns=(0.7*mathnr)+(0.3*mathus[50]);
		cout<<"Nilai Ujian Sekolah = "<< mathns << endl<<endl;
		cout<<"MTK Ujian Nasional = ";
		cin>>mathun[50];
		mathna=(0.4*mathns)+(0.6*mathun[50]);
		cout<<"Nilai Akhir = "<< mathna << endl;
		if(mathna>=40)
		cout<<"Lulus"<<endl;
		else
		cout<<"Tidak Lulus"<<endl;
		cout<<"==============================================="<<endl<<endl;
	}
}
{
	{
		cout<<"4. FISIKA"<<endl;
		cout<<"Fisika Kelas 1 = ";
		cin>>fiss3[50];
		cout<<"Fisika Kelas 2 = ";
		cin>>fiss4[50];
		cout<<"Fisika Kelas 3 = ";
		cin>>fiss5[50];
		fisnr= (fiss3[50] + fiss4[50] + fiss5[50])/3;
		cout<<"Nilai Rapot = "<< fisnr <<endl<<endl;
		cout<<"Fisika Ujian Sekolah = ";
		cin>>fisus[50];
		fisns=(0.7*fisnr)+(0.3*fisus[50]);
		cout<<"Nilai Ujian Sekolah = "<< fisns << endl<<endl;
		cout<<"Fisika Ujian Nasional = ";
		cin>>fisun[50];
		fisna=(0.4*fisns)+(0.6*fisun[50]);
		cout<<"Nilai Akhir = "<< fisna << endl;
		if(fisna>=40)
		cout<<"Lulus"<<endl;
		else
		cout<<"Tidak Lulus"<<endl;
		cout<<"==============================================="<<endl<<endl;
	}
}
{
	{
		cout<<"5. KIMIA"<<endl;
		cout<<"Kimia Kelas 1 = ";
		cin>>kims3[50];
		cout<<"Kimia Kelas 2 = ";
		cin>>kims4[50];
		cout<<"Kimia Kelas 3 = ";
		cin>>kims5[50];
		kimnr= (kims3[50] + kims4[50] + kims5[50])/3;
		cout<<"Nilai Rapot = "<< kimnr <<endl<<endl;
		cout<<"Kimia Ujian Sekolah = ";
		cin>>kimus[50];
		kimns=(0.7*kimnr)+(0.3*kimus[50]);
		cout<<"Nilai Ujian Sekolah = "<< kimns << endl<<endl;
		cout<<"Kimia Ujian Nasional = ";
		cin>>kimun[50];
		kimna=(0.4*kimns)+(0.6*kimun[50]);
		cout<<"Nilai Akhir = "<< kimna << endl;
		if(kimna>=40)
		cout<<"Lulus"<<endl;
		else
		cout<<"Tidak Lulus"<<endl;
		cout<<"==============================================="<<endl<<endl;
	}
}
	{
		cout<<"6. BIOLOGI"<<endl;
		cout<<"Biologi Kelas 1 = ";
		cin>>bios3[50];
		cout<<"Biologi Kelas 2 = ";
		cin>>bios4[50];
		cout<<"Biologi Kelas 3 = ";
		cin>>bios5[50];
		bionr= (bios3[50] + bios4[50] + bios5[50])/3;
		cout<<"Nilai Rapot = "<< bionr <<endl<<endl;
		cout<<"Biologi Ujian Sekolah = ";
		cin>>bious[50];
		bions=(0.7*bionr)+(0.3*bious[50]);
		cout<<"Nilai Ujian Sekolah = "<< bions << endl<<endl;
		cout<<"Biologi Ujian Nasional = ";
		cin>>bioun[50];
		biona=(0.4*bions)+(0.6*bioun[50]);
		cout<<"Nilai Akhir = "<< biona << endl;
		if(biona>=40)
		cout<<"Lulus"<<endl;
		else
		cout<<"Tidak Lulus"<<endl;
		cout<<"==============================================="<<endl<<endl;
	}
{
	avg1=(indos3[50]+ings3[50]+maths3[50]+fiss3[50]+kims3[50]+bios3[50])/6;
	cout<<"Rata-rata Mata Pelajaran Kelas 1 adalah = "<< avg1 <<endl<<endl;
	avg2=(indos4[50]+ings4[50]+maths4[50]+fiss4[50]+kims4[50]+bios4[50])/6;
	cout<<"Rata-rata Mata Pelajaran Kelas 2 adalah = "<< avg2 <<endl<<endl;
	avg3=(indos5[50]+ings5[50]+maths5[50]+fiss5[50]+kims5[50]+bios5[50])/6;
	cout<<"Rata-rata Mata Pelajaran Kelas 3 adalah = "<< avg3 <<endl<<endl;
	avg4=(indonr+ingnr+mathnr+fisnr+kimnr+bionr)/6;
	cout<<"Rata-rata Nilai Rapot Semua Ma adalah = "<< avg4 <<endl<<endl;
	avg5=(indous[50]+ingus[50]+mathus[50]+fisus[50]+kimus[50]+bious[50])/6;
	cout<<"Rata-rata Ujian Sekolah Semua MaPel adalah = "<< avg5 <<endl<<endl;
	avg6=(indons+ingns+mathns+fisns+kimns+bions)/6;
	cout<<"Rata-rata Nilai Sekolah Semua MaPel adalah = "<< avg6 <<endl<<endl;
	avg7=(indoun[50]+ingun[50]+mathun[50]+fisun[50]+kimun[50]+bioun[50])/6;
	cout<<"Rata-rata Ujian Nasional Semua MaPel adalah = "<< avg7 <<endl<<endl;
	avg8=(indona+ingna+mathna+fisna+kimna+biona)/6;
	cout<<"Rata-rata Nilai Akhir Semua MaPel adalah = "<< avg8 <<endl<<endl;
	avg9=(avg1+avg2+avg3+avg4+avg5+avg6+avg7+avg8)/8;
	if(avg9>=5.5)
	cout<<"ANDA LULUS!!!"<<endl;
	else
	cout<<"MAAF ANDA TIDAK LULUS.."<<endl;
}
getch();
}

