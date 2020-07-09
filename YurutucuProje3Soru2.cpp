

#include "Kitaplik.h" //kitaplık kütüphanem
#include <string> //metin karakterler

int main() 
{
    setlocale(LC_ALL, "Turkish"); //kitabı yazdıktan sonra türkçe karakteri de düzgün yazmna kodu
	char program;
	Kitaplik kitaplik;

	while (true)  //kitapları ekleme,yazdırma ve sayısını, programdan çıkış döngüsü
	{
		std::cout << "Kitap eklemek icin : 'A' "<< std::endl;
		std::cout << "Kac kitap olduğunu öğrenmek icin : 'B' "<< std::endl; 
		std::cout << "Tüm kitaplara ait bilgileri görüntülemek icin : 'C' "<< std::endl;
		std::cout << "Programdan çıkmak için 'D' giriniz : " << std::endl;
		std::cout << "\nBir seçenek seçin lütfen :";
		std::cin >> program;

		if (program == 'A')  //'A'girdiğinde kitapları ekleme koşulu
		{

			Kitap kitap;
			std::string ad, yazar, tur, yayinevi, isbnNo;
			int sayfaSayisi, baskiYili, baskiSayisi;
			double fiyat;
            std::getline(std::cin,ad);
			std::cout << "Kitabın adını giriniz :" << std::endl;
			std::getline(std::cin,ad);
			std::cout << "Kitabın yazarını giriniz :" << std::endl;
			std::getline(std::cin, yazar);
			std::cout << "Kitabın türü giriniz :" << std::endl;
			std::getline(std::cin, tur);
			std::cout << "Kitabın yayinevi giriniz :" << std::endl;
			std::getline(std::cin, yayinevi);
			std::cout << "Kitabın isbnNo giriniz :" << std::endl;
			std::getline(std::cin, isbnNo);
			std::cout << "Kitabın sayfa sayısını giriniz :" << std::endl;
			std::cin >> sayfaSayisi;
			std::cout << "Kitabın fiyatını giriniz :" << std::endl;
			std::cin >> fiyat;
			std::cout << "Kitabın baskı yılını giriniz :" << std::endl;
			std::cin >> baskiYili;
			std::cout << "Kitabın baskı sayısını giriniz :" << std::endl;
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

			kitaplik.addKitap(kitap); //kitapları kitaplığa ekleme
		}
		else if (program == 'B')  //kitap sayısı koşulu
		{
			std::cout << "Kitap sayısı = " << kitaplik.getKitapSayisi() <<std::endl;
		}
		else if (program == 'C')  //kitapları yazdırma koşulu
		{
			kitaplik.print();
		}
		else if (program == 'D') //programdan çıkış koşulu
		 {
			return 0;
		}
		else          //yanlış değer girdiğinde koşulu
		 {
			std::cout << "Yanlış girdiniz. Lütfen tekrar deneyiniz :" << std::endl;
		}
	}
}
