/*Soft2Soft.h - Librería para el reconocimiento digital de gestos textiles.
Creada por: Laura Cortés-Rico, Maria José Melo Betancurt, Yuleisy Adenis Rincón Saavedra, Alexander Rozo Torres.
dd/mm/2021.
*/

#ifndef Soft2Soft_h
#define Soft2Soft_h

#include "Arduino.h"

//Soft2Soft general

class Soft2Soft
{
	public:
		Soft2Soft(int pin);
		bool atravesarTextil();
		void tocarTextil();
	private:
		int _pin;	
};

//Soft2Soft Abrigar/Sheltering
class Abrigar
{
	public:
		Abrigar();
		void deslizarCremallera();
		void unirGancho();
		void apuntarBoton();
	private:
		int _pin;
		int zipper;	
};

//Soft2Soft Acariciar/Caressing
class Acariciar
{
	public:
	Acariciar();
	void tocarTextil();
	void pellizcarTextil();
	private:
		int _pin;	
};



//Soft2Soft Crear/Crafting
class Crear
{
	Crear();
	void atravesarTextil();
	void anudar();
	private:
		int _pin;	
};

//Soft2Soft Involucrarse/Getting involved
class Involucrarse
{
	Involucrarse();
	void abrazar();
	void estirarTextil();
	private:
		int _pin;
};



#endif
