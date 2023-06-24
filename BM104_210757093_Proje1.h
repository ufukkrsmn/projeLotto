/*
UFUK
KIRISMAN
BILGISAYAR MUHENDISLIGI
PROJE 1
*/
class BM104_210757093_Proje1
{
public:

	void OyunOyna();

private:
	int dogruSayisi = 0;//kullanicinin dogru tahminleri icin 
	int tahmin;//kullanicinin tahminini yazdigi eleman
	int dizi[20]{ 0 };
	int dizi2[20]{ -1 };
	int kacEleman;//2 ile 20 arasi degerler girilir
	int kacAdim;//Eleman sayisinin 2 kati kadar tahmin hakki bulunacak
	int altLimit;//hangi sayi araliginda sayi uretmek isteniyorsa alt limitinin saklandigi degisken
	int ustLimit;//Hangi sayi araliginda sayi uretmek isteniyorsa ust limitinin saklandigi degisken
	void DiziEleman(int,int,int);//Diziye hangi elemanlarin atanacagini belirleyen fonksiyon
	void Yazdir(int,int,int);//tahminin dogru veya yanlis oldugunu yazdiran fonksiyon
	int Kaydir(int[],int);
};
