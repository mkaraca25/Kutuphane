/*Melik KARACA 190757079 Bil.Müh.(Ý.Ö) C grubu 
Nesneye Yönelik Programlama BIM-104-50-50-C Bahar 2020
PROJESÝ 3 Dr. Öðr. Üyesi Gülþah TÜMÜKLÜ ÖZYER*/

#ifndef KITAPLIK_H //ifndef, define ve endif  öniþlemci direktifleri Polinom Sýnýfý tanýmýnýn projenin 
#define KITAPLIK_H //birden fazla dosyasý içerisinde kullanýmýnýn nesne kodu (object code) bünyesinde tekrarýný engeller.

#include "Kitap.h"
class Kitaplik  //kitaplýk sýnýfýmýn adý
{
public:

	Kitaplik();  //yapýcý constructor
	void addKitap(Kitap& input); //kitaplarý ekleme fonksiyonu çaðýrma

	unsigned int getKitapSayisi(); //kitaplarý sayýsý fonksiyonu çaðýrma

	void print();  //kitaplarý yazdýrma fonksiyonu çaðýrma
private:

	Kitap* kitaplar = new Kitap[10];  //komposizyon

	static unsigned int index; 
};
#endif
