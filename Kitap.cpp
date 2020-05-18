/*Melik KARACA 190757079 Bil.Müh.(İ.Ö) C grubu 
Nesneye Yönelik Programlama BIM-104-50-50-C Bahar 2020
PROJESİ 3 Dr. Öğr. Üyesi Gülşah TÜMÜKLÜ ÖZYER*/

#include "Kitap.h"

Kitap::Kitap()  //Yapıcı constructor
{
	
}

void Kitap::setAd(std::string& input) {
	ad = input;
}

void Kitap::setYazar(std::string& input) {
	yazar = input;
}

void Kitap::setTur(std::string& input) {
	tur = input;
}

void Kitap::setYayinevi(std::string& input) {
	yayinevi = input;
}

void Kitap::setisbnNo(std::string& input) {

	isbnNo = input;
}

std::string& Kitap::getAd()
{
	return ad;
}

std::string& Kitap::getYazar()
{
	return yazar;
}

std::string& Kitap::getTur()
{
	return tur;
}

std::string& Kitap::getYayinevi()
{
	return yayinevi;
}

std::string& Kitap::getisbnNo()
{
	return isbnNo;
}

void Kitap::setSayfaSayisi(int input)
{
	sayfaSayisi = input;
}

void Kitap::setBaskiYili(int input)
{
	baskiYili = input;
}

void Kitap::setBaskiSayisi(int input)
{
	baskiSayisi = input;
}

int Kitap::getSayfaSayisi()
{
	return sayfaSayisi;
}

int Kitap::getBaskiYili()
{
	return baskiYili;
}

int Kitap::getBaskiSayisi()
{
	return baskiSayisi;
}

void Kitap::setFiyat(double input)
{
	fiyat = input;
}

double Kitap::getFiyat()
{
	return fiyat;
}
