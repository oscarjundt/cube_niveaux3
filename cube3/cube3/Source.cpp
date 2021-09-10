#include <iostream>

using namespace std;

//je declare ma fonction et je la parametre
//pour ce qui n'on pas vue les fontion ce que je fait la c'est f(x)=x*x*x donc si x=2 f(2)=2*2*2
//je return le reslutat avec return
int calcule(int x) {
	int result = x * x * x;
	return result;
}

int main() {
	//je declare a
	int a;
	//je demande a l'utilisateur d'initialiser a
	cin >> a;
	//j'appelle ma fonction calculer qui est de type int dans une variable
	int res = calcule(a);
	//j'affiche le resultat
	cout << "le cube de " << a << " est  " << res << endl;
}