/*Melik KARACA 190757079 Bil.Müh.(Ý.Ö) C grubu 
Nesneye Yönelik Programlama BIM-104-50-50-C Bahar 2020
PROJESÝ 3 Dr. Öðr. Üyesi Gülþah TÜMÜKLÜ ÖZYER*/

#include "Kitaplik.h" //kitaplýk kütüphanem
#include <string> //metin karakterler

int main() 
{
    setlocale(LC_ALL, "Turkish"); //kitabý yazdýktan sonra türkçe karakteri de düzgün yazmna kodu
	char program;
	Kitaplik kitaplik;

	while (true)  //kitaplarý ekleme,yazdýrma ve sayýsýný, programdan çýkýþ döngüsü
	{
		std::cout << "Kitap eklemek icin : 'A' "<< std::endl;
		std::cout << "Kac kitap olduðunu öðrenmek icin : 'B' "<< std::endl; 
		std::cout << "Tüm kitaplara ait bilgileri görüntülemek icin : 'C' "<< std::endl;
		std::cout << "Programdan çýkmak için 'D' giriniz : " << std::endl;
		std::cout << "\nBir seçenek seçin lütfen :";
		std::cin >> program;

		if (program == 'A')  //'A'girdiðinde kitaplarý ekleme koþulu
		{

			Kitap kitap;
			std::string ad, yazar, tur, yayinevi, isbnNo;
			int sayfaSayisi, baskiYili, baskiSayisi;
			double fiyat;
            std::getline(std::cin,ad);
			std::cout << "Kitabýn adýný giriniz :" << std::endl;
			std::getline(std::cin,ad);
			std::cout << "Kitabýn yazarýný giriniz :" << std::endl;
			std::getline(std::cin, yazar);
			std::cout << "Kitabýn türü giriniz :" << std::endl;
			std::getline(std::cin, tur);
			std::cout << "Kitabýn yayinevi giriniz :" << std::endl;
			std::getline(std::cin, yayinevi);
			std::cout << "Kitabýn isbnNo giriniz :" << std::endl;
			std::getline(std::cin, isbnNo);
			std::cout << "Kitabýn sayfa sayýsýný giriniz :" << std::endl;
			std::cin >> sayfaSayisi;
			std::cout << "Kitabýn fiyatýný giriniz :" << std::endl;
			std::cin >> fiyat;
			std::cout << "Kitabýn baský yýlýný giriniz :" << std::endl;
			std::cin >> baskiYili;
			std::cout << "Kitabýn baský sayýsýný giriniz :" << std::endl;
			std::cin >> baskiSayisi;

			kitap.setAd(ad);
			kitap.setYazar(yazar);
			kitap.setTur(tur);
			kitap.setYayinevi(yayinevi);
			kitap.setisbnNo(isbnNo);
			kitap.setSayfaSayisi(sayfaSayisi);
			kitap.setFiyat(fiyat);
			kitap.setBaskiYili(baskiYili);
			kitap.setBaskiSayisi(baskiSayisi);

			kitaplik.addKitap(kitap); //kitaplarý kitaplýða ekleme
		}
		else if (program == 'B')  //kitap sayýsý koþulu
		{
			std::cout << "Kitap sayýsý = " << kitaplik.getKitapSayisi() <<std::endl;
		}
		else if (program == 'C')  //kitaplarý yazdýrma koþulu
		{
			kitaplik.print();
		}
		else if (program == 'D') //programdan çýkýþ koþulu
		 {
			return 0;
		}
		else          //yanlýþ deðer girdiðinde koþulu
		 {
			std::cout << "Yanlýþ girdiniz. Lütfen tekrar deneyiniz :" << std::endl;
		}
	}
}
