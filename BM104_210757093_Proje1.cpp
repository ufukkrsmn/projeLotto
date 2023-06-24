/*
UFUK
KIRISMAN
BILGISAYAR MUHENDISLIGI

PROJE 1

*/

#include "BM104_210757093_Proje1.h"//header dosyadaki degiskenlere ulasmak icin
#include <iostream>//cout ve cin icin
#include <cstdlib>//srand ve rand fonksiyonlari icin
#include <ctime>//time(0) fonksiyonu icin
#include <iomanip>//setfill ve setw i�in
using namespace std;

void BM104_210757093_Proje1::OyunOyna()
{
	cout << "Lutfen kac sayi ile oynamak istediginizi giriniz" << endl;
	cin >> kacEleman;
	kacAdim = 2 * kacEleman;//adim sayisini eleman sayisinin 2 katina cikarmamizi saglar
	cout << "Lutfen alt limit ve ust limit degerlerini giriniz " << endl;
	cin >> altLimit >> ustLimit;
	DiziEleman(kacEleman,altLimit,ustLimit);//fonksiyonu voidin icinden cagirmamizi saglar 
	Yazdir(kacAdim,kacEleman,dogruSayisi);//fonksiyonu voidin icinden cagirmamizi saglar
	Kaydir(dizi2,kacEleman);
}

void BM104_210757093_Proje1::DiziEleman(int kacEleman,int altLimit,int ustLimit)
{
	srand(time(0));//uygulamayi her calistirdigimizda farkli random sayilar uretmemizi saglar
	for (int i = 0; i < kacEleman; i++)
	{
		dizi[i] = rand() % (ustLimit - altLimit) + altLimit;//alt ve ust limite gore random sayilar ureterek dizinin i�ine yazar
	}
}

void  BM104_210757093_Proje1::Yazdir(int kacAdim,int kacEleman,int dogruSayisi)
{
	for (int i = 0; i < kacAdim; i++)//Kac adim devam edecegini belirlemek icin
	{
		int dizi3[20]{ 0 };
		int ciktiSayaci=0;
		cout << "Lutfen bir sayi tahmin ediniz" << endl;
		cin >> dizi2[kacAdim - i];
		for(int b=0;b<kacEleman;b++)
		{ 
			ciktiSayaci = 0;
			if (dizi[b] == dizi2[kacAdim - i])
			{
				dizi2[b] = dizi[b];
				cout << "Girdiginiz sayi bulundu" << endl;
				Kaydir(dizi2, i);
				cout << setfill('X') << setw(kacEleman) << dizi2[kacAdim - i] << endl;
				dogruSayisi++;
				ciktiSayaci++;
				break;
			}
		}
		if (dogruSayisi == kacEleman)
		{
			cout << "Tebrikler kazandiniz :D" << endl;
			break;
		}
		if (ciktiSayaci == 0)
			cout << "Girdiginiz sayi maalesef bulunamadi. Lutfen tekrar deneyiniz: " << endl;
	}
	if (dogruSayisi != kacEleman)
	{
		cout << "Maalesef oyunu kaybettiniz :(  Daha sonra tekrar deneyiniz." << endl;
	}
}
int BM104_210757093_Proje1::Kaydir(int dizi2[],int b)
{
	for (int a = 0; a < b ; a++)
	{
		int temple=0;

		temple = dizi2[kacAdim];
		dizi2[kacAdim] = dizi2[kacAdim - b];
		dizi[kacAdim - b] = temple;

	}
	return 0;
}

	
