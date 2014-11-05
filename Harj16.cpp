/***************************************
*Tehtävä: Harjoitus 16 (Palautus vko 46)
*Tekijä: Juho Nissi
*Tee ohjelma, joka kysyy henkilotietosi ja tallentaa ne tietueeseen.
*Tietueeseen talletetaan seuraavat tiedot:
*etunimi (merkkijono; C:n merkkitaulukko)
*sukunimi (merkkijono; C:n merkkitaulukko)
*koulumatka (reaaliluku)
*osoite (merkkijono; C:n merkkitaulukko)
*postinumero (merkkijono; C:n merkkitaulukko)
*kengannumero (kokonaisluku)
*
*Ohjelma tulostaa lopuksi tietueen tiedot naytölle.
*Versio 1.0
*Päiväys: 22.10.2014
***************************************/

#include <iostream>
using namespace std;

struct Tiedot
{
	char etunimi[25];
	char sukunimi[50];
	float matka;
	char osoite[50];
	char posti[20];
	int kenka;
};

int main()
{
	Tiedot stol = { 0 };
	cout << "Ohjelma kysyy nyt tietojasi. Ole hyva ja tayta ohjeiden mukaan." << endl;
	cout << "\nKirjoita etunimesi: ";
	cin >> ws >> stol.etunimi;
	cout << "\nKirjoita sukunimesi: ";
	cin >> ws >> stol.sukunimi;
	cout << "\nKirjoita koulumatkasi kilometreina: ";
	cin >> ws >> stol.matka;
	cout << "\nKirjoita osoitteesi: ";
	cin >> ws;
	cin.get(stol.osoite, 50);
	cout << "\nKirjoita postinumerosi: ";
	cin >> ws;
	cin.get(stol.posti, 6);
	cout << "\nKirjoita kenkasinumero: ";
	cin >> ws >> stol.kenka;

	cout <<"\nNimesi on "<< stol.etunimi << " " << stol.sukunimi << endl;
	cout <<"Koulumatkasi on "<< stol.matka << " km" << endl;
	cout << "Osoitteesi on " << stol.osoite << endl;
	cout <<"Postinumerosi on "<< stol.posti << endl;
	cout <<"Kenkasi koko on " << stol.kenka << endl;
	return 0;
}