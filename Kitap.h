

#ifndef KITAP_H //ifndef, define ve endif  öniþlemci direktifleri Polinom Sýnýfý tanýmýnýn projenin 
#define KITAP_H //birden fazla dosyasý içerisinde kullanýmýnýn nesne kodu (object code) bünyesinde tekrarýný engeller.
#include <iostream>

class Kitap //kitap sýnýfým
{
public:

	Kitap(); //yapýcý constructor

	void setAd(std::string& input); //set fonksiyonlarý
	void setYazar(std::string& input);
	void setTur(std::string& input);
	void setYayinevi(std::string& input);
	void setisbnNo(std::string& input);

	std::string& getAd();            //get fonksiyonlarý
	std::string& getYazar();
	std::string& getTur();
	std::string& getYayinevi();
	std::string& getisbnNo();

	void setSayfaSayisi(int input);
	void setBaskiYili(int input);
	void setBaskiSayisi(int input);

	int getSayfaSayisi();
	int getBaskiYili();
	int getBaskiSayisi();

	void setFiyat(double input);
	
	double getFiyat();

private:
	std::string ad,yazar,tur,yayinevi,isbnNo;
	int sayfaSayisi, baskiYili, baskiSayisi;
	double fiyat;
};
#endif
