#include <iostream>
#include"InercambiarVariables.h"

using namespace std;

	Ejercicio::Ejercicio(int _x, int _y){
		cout<<"Intercambiar Valores de dos variables"<<endl;
		x = _x;
		y = _y;
		getValueaux();
		newValueX();
		newValueY();
	}
	
	void Ejercicio::getValueaux(){
		aux = x;
	}
	
	void Ejercicio::newValueY(){
		y = aux;	
	}
	
	void Ejercicio::newValueX(){
		x = y;
	}
	
	int Ejercicio::GetNewX(){
	return x;
	}
	
	int Ejercicio::GetNewY(){
	return y;
	
	}
	
