#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int zar() { 
	int zar = rand() % 6 + 1;  
	return zar;
}
int oyun() { 
	int oyuncuSkor = 0, bilgisayarSkor = 0;
	int oyuncuZar, bilgisayarZar,devam;

	while(true){
		cout << "Zarinizi atmak icin bir tusa basin: " << endl;
		cin.get();
		oyuncuZar = zar();
		cout << "Oyuncunun zari: " << oyuncuZar << endl;
		bilgisayarZar = zar();
		cout << "Bilgisayarin zari: " << bilgisayarZar << endl;

		if (oyuncuZar > bilgisayarZar)
		{
			cout << "Tebrikler! Oyuncu kazandi!" << endl;
			oyuncuSkor++;
		}
		else if (oyuncuZar < bilgisayarZar)
		{
			cout << "Uzgunuz! Kumarhane kazandi!" << endl;
			bilgisayarSkor++;
		}
		else
		{
			cout << "Berabere! tekrar deneyin!";
		}
		cout << endl <<"Devam etmek icin 1 bitirmek icin 0 girinz: "<< endl;
		cin >> devam;
		if (devam == 1)
			continue;
		else if (devam == 0)
			cout << "Oyuncu Skoru: " << oyuncuSkor << " - Kumarhane Skoru: " << bilgisayarSkor << endl;
			break;
		
	}
	return 1;
}
int main() {
	srand(time(NULL));
	cout << "Casino Oyununa Hosgeldiniz!" << endl;
	oyun();
}