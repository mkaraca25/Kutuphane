

#ifndef KITAPLIK_H //ifndef, define ve endif  önişlemci direktifleri Polinom Sınıfı tanımının projenin 
#define KITAPLIK_H //birden fazla dosyası içerisinde kullanımının nesne kodu (object code) bünyesinde tekrarını engeller.

#include "Kitap.h"
class Kitaplik  //kitaplık sınıfımın adı
{
public:

	Kitaplik();  //yapıcı constructor
	void addKitap(Kitap& input); //kitapları ekleme fonksiyonu çağırma

	unsigned int getKitapSayisi(); //kitapları sayısı fonksiyonu çağırma

	void print();  //kitapları yazdırma fonksiyonu çağırma
private:

	Kitap* kitaplar = new Kitap[10];  //komposizyon

	static unsigned int index; 
};
#endif
