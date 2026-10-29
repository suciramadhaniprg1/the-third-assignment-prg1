//Nama: Suci Ramadhani
//NIM: 26/580878/PA/24345
//Kelas: PRG 1

#include <iostream>

using namespace std;

//Membuat fungsi rekursifnya dengan melihat pola (dianggap bilangan di dalam kurung adalah bilangan ganjil positif):
//f(1)= 1 
//f(3) = 3*(2/2)*1 = 3*((3-1)/2)*(3-2)
//f(5) = 5*(4/2)*[3*(2/2)*1] = 5*(4/2)*f(3)
//f(7) = 7*(6/2)*[5*(4/2)*3*(2/2)*1] = 7*(6/2)*f(5)
//Jadi, polanya adalah f(a)  = a*((a-1)/2)*f(a-2) dengan a adalah bilangan ganjil positif
//Base case = Jika a <= 1, fungsi akan mengembalikan 1 dan berhenti
//Recurrent = Jika a > 1, fungsi memanggil dirinya sendiri dengan a-2
 
int equation(int a) { //a adalah bilangan ganjil positif
	if(a <= 1) {
		return 1; //base case, fungsi rekursif berhenti saat a <= 1
	}else {
		return a * ((a - 1) / 2) * equation(a-2); //recurrent, fungsi memanggil dirinya sendiri
	}
}

int main() {
	cout << "f(5) = " << equation(5) << endl;
	cout << "f(7) = " << equation(7);
	return 0;
}

