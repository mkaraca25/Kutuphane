

#include "Kitaplik.h" //Kitaplık kütüphanem

unsigned int Kitaplik::index = 0;  //kitap sayısı 

Kitaplik::Kitaplik()   //yapıcı constructor
{
}
void Kitaplik::addKitap(Kitap& input)  //kitapları ekleme fonksiyonum
{
	if (index >= 10)  //index kitap sayısı 10 olduğundan uyarı koşulu
		std::cout << "Kitaplık doldu" << std::endl;
	else {
		kitaplar[index] = input;
		index++;
	}
}
unsigned int Kitaplik::getKitapSayisi() //kitapları sayısı fonksiyonum
{
	std::cout<<"\n";
	return index;
}

void Kitaplik::print()        //kitapları yazdırma fonksiyonum
{
	for (int i = 0; i < index; i++) 
	{
		std::cout<<"\n";
		std::cout << i+1 << ". kitap ismi = " << kitaplar[i].getAd() << " kitabin yazari = " << kitaplar[i].getYazar() << " kitabin turu = " << kitaplar[i].getTur() << " kitabin yayinevi = " << kitaplar[i].getYayinevi() << " kitabin isbnNo = " << kitaplar[i].getisbnNo() << " kitabin sayfaSayisi = " << kitaplar[i].getSayfaSayisi() << " kitabin fiyati = " << kitaplar[i].getFiyat() << " kitabin baski yili = " << kitaplar[i].getBaskiYili() << " kitabin baski sayisi = " << kitaplar[i].getBaskiSayisi() << std::endl;
		std::cout<<"\n";
	}
}
