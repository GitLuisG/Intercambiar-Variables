#ifndef _InercambiarVariables_h
#define _InercambiarVariables_h

class Ejercicio{
	public:
		Ejercicio(int, int);
		int GetNewX();
		int GetNewY();
	private:
		int x, y, aux;
		void getValueaux();
		void newValueY();
		void newValueX();
};
#endif
