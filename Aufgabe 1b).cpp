#include<iostream>

int rech(int, int);
int prod(int, int);

int main(){
	int u, o, x;
	std::cout << "Bitte geben Sie die Untergrenze des Zahlenbereichs an (negative Eingaben nicht moeglich): ";
	std::cin >> u;
	if(u < 0)
		//Beginnt Methode erneut, wenn eingabe negativ
		return main();
	//Schleife zur Überprüfung, dass keine negative Eingabe erfolgt
	do{
		std::cout << "Bitte geben Sie die Obergrenze des Zahlenbereichs an (negative Eingaben nicht moeglich): ";
		std::cin >> o;
	}while(o < 0);
	std::cout << "Berechnung wird durchgefuehrt [2er Schritte werden angewand]..." << std::endl << std::endl;
	//Funktionen werden aufgerufen, gegebenenfalls gespeichert und ausgegeben
	rech(u, o);
	x = prod(u, o);
	std::cout << "Das Produkt der eingegebenen Ober- und Untergrenze ergibt: " << x << std::endl;
	system("Pause");
	return 0;
}

int rech(int u, int o){
	int e;
	//Schleife, um Werte in 2er Schritten wiederzugeben
	for(int i = u; i <= o; i = i + 2){
		//Abfrage, sodass kein ausgegebenes Ergebnis 0 sein kann
		if(i != 0){
			std::cout << "Zahlenwert: " << i << std::endl << std::endl;
			//Berechnung und Ausgabe Quadratzahl
			e = i * i;
			std::cout << "Quadratzahl: " << e << std::endl << std::endl;
			//Berechnung und Ausgabe Kubikzahl
			e = e * i;
			std::cout << "Kubikzahl: " << e << std::endl << std::endl;
		}
	}
	return 0;
}

int prod(int u, int o){
	//Produkt aus Ober- und Untergrenze wird berechnet und returnt
	u = u * o;
	return u;
}
