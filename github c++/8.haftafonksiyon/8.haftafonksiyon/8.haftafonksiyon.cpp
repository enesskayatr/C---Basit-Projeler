// 8.haftafonksiyon.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>
#include<ctime>
using namespace std;
void dizi_yaz(int*, int);
void dizi_buyuk(int*, int, char);
void dizi_kuck(int*, int, char);


int main()
{
	////bitap
a1:;
	srand(time(NULL));
	const int b = 10;
	int a[b];
	for (int i = 0; i < b; i++)
	{
		a[i] = rand() % 100;
	}
	dizi_yaz(a, b);

	char e;
	cout << "Karakter giriniz..:";
	cin >> e;
	if (e=='k')
	{
		dizi_kuck(a, b, e);
		dizi_yaz(a, b);
		goto a1;
	}
	else if (e=='b')
	{
		dizi_buyuk(a, b, e);
		dizi_yaz(a, b);
		goto a1;
	}





}
void dizi_yaz(int* dizi, int boy)
{
	for (int i = 0; i < boy; i++)
	{
		cout << dizi[i]<<endl;

	}
}void dizi_buyuk(int* dizi, int boy, char b)
{
	int gecici;
	for (int i = 0; i < boy; i++)
	{
		for (int j = i+1; j < boy; j++)
		{
			if (dizi[i]<dizi[j])
			{
				gecici = dizi[i];
				dizi[i] = dizi[j];
				dizi[j] = gecici;
			}
		}

	}
}
void dizi_kuck(int* dizi, int boy, char k)
{
	int gecici;
	for (int i = 0; i < boy; i++)
	{
		for (int j = i + 1; j < boy; j++)
		{
			if (dizi[i] > dizi[j])
			{
				gecici = dizi[i];
				dizi[i] = dizi[j];
				dizi[j] = gecici;
			}
		}

	}

}

// Programı çalıştır: Ctrl + F5 veya Hata Ayıkla > Hata Ayıklamadan Başlat menüsü
// Programda hata ayıkla: F5 veya Hata Ayıkla > Hata Ayıklamayı Başlat menüsü

// Kullanmaya Başlama İpuçları: 
//   1. Dosyaları eklemek/yönetmek için Çözüm Gezgini penceresini kullanın
//   2. Kaynak denetimine bağlanmak için Takım Gezgini penceresini kullanın
//   3. Derleme çıktısını ve diğer iletileri görmek için Çıktı penceresini kullanın
//   4. Hataları görüntülemek için Hata Listesi penceresini kullanın
//   5. Yeni kod dosyaları oluşturmak için Projeye Git > Yeni Öğe ekle veya varolan kod dosyalarını projeye eklemek için Proje > Var Olan Öğeyi Ekle adımlarını izleyin
//   6. Bu projeyi daha sonra yeniden açmak için Dosya > Aç > Proje'ye gidip .sln uzantılı dosyayı seçin
