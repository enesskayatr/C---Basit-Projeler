// diziyeüretilensayılarısıralama.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>
using namespace std;


int main()
{   
	/*cout << "Diziye random sayı üretme" << endl;*/
	/*int satır;
	cout << "Satir sayisini giriniz..:";
	
	cin >> satır;
	int sutun;
	cout << "Sutun sayisini giriniz...:";
	
	cin >> sutun;

	int  dizi[100][100];
		
	srand(time(NULL));
	for (int i = 0; i < satır; i++)
	{
		for (int j = 0; j < sutun; j++)
		{
			dizi[i][j] = rand() % 10;
			
		}
	}
	for (int i = 0; i < satır; i++)
	{
		for (int j = 0; j < sutun; j++)
		{
			cout << dizi[i][j]<<" ";

		}
		cout << endl;

	}*/
	/*cout << "Dizi Sıralama"<<endl;
	int  dizi2[5];

	
	for (int i = 0; i < 5; i++)
	{
			dizi2[i] = rand() % 50;
			cout << dizi2[i]<<endl;
	}
	for (int i = 0; i < 5; i++)
	{
		for (int j = i+1; j < 5; j++)
		{
			if (dizi2[i]>dizi2[j])
			{
				int gecici = dizi2[i];
				dizi2[i] = dizi2[j];
				dizi2[j] = gecici;
			}

		}
	}
	cout << "SIRALANMIŞ HALİ" << endl;
	for (int  i = 0; i < 5; i++)
	{
		cout << dizi2[i]<<endl;
		
	}*/

	/*cout << "Matrisleri Toplama-------"<<endl;
	int dizi2[5][5];
	int dizi[5][5];
	int dizileritoplama[5][5];
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			dizi[i][j] = rand() % 10;
			dizi2[i][j] = rand() % 20;

		}
	}
	cout << "Dizi1----------------"<<endl;
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			cout << dizi[i][j]<<" ";
		}
		cout << endl;
	}
	cout << "Dizi2-------------------"<<endl;
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			
			cout << dizi2[i][j]<<" ";

		}
		cout <<endl;
	}

	cout << "Diziler Toplami---------"<<endl;
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			dizileritoplama[i][j] = dizi[i][j] + dizi2[i][j];
			cout << dizileritoplama[i][j]<<" ";
		}
		cout << "\n";
	}
	cout << "Diziler Çarpma---------" << endl;
	int dizilerçarpım[5][5];
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			dizilerçarpım[i][j] = dizi[i][j] * dizi2[i][j];
			cout << dizilerçarpım[i][j] << " ";
		}
		cout << "\n";
	}*/

          cout << "Dizinin Icindeki sayilari Toplama-------"<<endl;
		  int emin[5]={};
		  srand(time(NULL));
		  int toplam {};
		 
		  for (int i = 0; i < 5; i++)
		  {
			  emin[i] = rand() % 50;
		  }
		  for (int i = 0; i < 5; i++)
		  {
			  cout<<emin[i]<<endl;
		  }

		  for (int j = 0; j < 5; j++)
		  {
			   toplam+= emin[j];
		  }
		  cout << "Toplam: "<<toplam<<endl;
		  
		  int gecici;
		  int gecici1;
		  for (int i = 0; i < 5; i++)
		  {
			  for (int j = i+1; j <5; j++)
			  {
               if (emin[i]<emin[j])
			  {
				    gecici = emin[i];
				   emin[i] = emin[j];
				   emin[j] = gecici;  

			  }
			   else if (emin[i] > emin[j])
			   {
				   gecici1 = emin[i];
				   emin[i] = emin[j];
				   emin[j] = gecici1;
				   
			   }
			  

			   
			  }
			  
		  }
               cout << "Kucuk..:"<<gecici<<endl;
              cout << "Buyuk..:" << gecici1;		
      /*    cout << "KARE YAPIMI-------------" << endl;
		  int satır;
		  int sutun;
		  cout << "Satir sayisini giriniz...:"<<endl;
		  cin >> satır;
		  cout << "Sutun sayisini giriniz..:" << endl;
		  cin >> sutun;
		  
		  for (int i = 1; i <= satır; i++)
		  {
			  
				  if (i==1||i==satır)
				  {
					  cout << "*****"<<endl;
				  }
				  else
				  {
					  cout << "*   *"<<endl;
				  }
			  
		  }*/
      
	

	return 0;
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
