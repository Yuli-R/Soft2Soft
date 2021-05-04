/*Soft2Soft.cpp - Librería para el reconocimiento digital de gestos textiles.
Creada por: Laura Cortés-Rico, Maria José Melo Betancurt, Yuleisy Adenis Rincón Saavedra, Alexander Rozo Torres.
dd/mm/2021.
*/

#include "Arduino.h"
#include "Soft2Soft.h"

Soft2Soft::Soft2Soft(int pin)
{
	pinMode (pin, INPUT_PULLUP);
	_pin = pin;
	
}


bool Soft2Soft::atravesarTextil()
{
	bool estado = LOW;
	if(digitalRead(_pin)==LOW && estado==LOW){
		//Serial.print(" _Tela atravesada_ ");
		return (HIGH);
		estado = HIGH;	
	} 	
	delay(200);
	if(digitalRead(_pin)==HIGH && estado==HIGH){
		//Serial.print(" _Tela NO atravesada_ ");
		return (LOW);
		estado=LOW;

	} 
	delay(200);
	return(estado);
		
	
}

void Soft2Soft::tocarTextil(){
}
//---------------------------------------------------
//Soft2Soft Abrigar/Sheltering
//---------------------------------------------------
Abrigar::Abrigar()
{
}

//Soft2Soft Abrigar/Sheltering-- deslizarCremallera
void Abrigar::deslizarCremallera()
{
}

//Soft2Soft Abrigar/Sheltering-- unirGancho
void Abrigar::unirGancho()
{
}

//Soft2Soft Abrigar/Sheltering-- apuntarBoton
void Abrigar::apuntarBoton()
{
}

//---------------------------------------------------
//Soft2Soft Acariciar/Caressing
//---------------------------------------------------
Acariciar::Acariciar()
{
}

//Soft2Soft Acariciar/Caressing -- tocarTextil
void Acariciar::tocarTextil()
{
}

//Soft2Soft Acariciar/Caressing -- pellizcarTextil
void Acariciar::pellizcarTextil()
{
}

//---------------------------------------------------
//Soft2Soft Crear/Crafting
//---------------------------------------------------
Crear::Crear()
{
}

//Soft2Soft Crear/Crafting -- atravesarTextil
void Crear::atravesarTextil()
{
	bool estado = LOW;
	if(digitalRead(_pin)==LOW && estado==LOW){
		//Serial.print(" _Tela atravesada_ ");
		//return (HIGH);
		estado = HIGH;	
	} 	
	//delay(200);
	if(digitalRead(_pin)==HIGH && estado==HIGH){
		//Serial.print(" _Tela NO atravesada_ ");
		//return (LOW);
		estado=LOW;

	} 
	//delay(200);
	return(estado);
		
}

//Soft2Soft Crear/Crafting -- anudar
void Crear::anudar()
{
}

//---------------------------------------------------
//Soft2Soft Involucrarse/Getting involved
//---------------------------------------------------
Involucrarse::Involucrarse()
{
}

//Soft2Soft Involucrarse/Getting involved -- abrazar
void Involucrarse::abrazar()
{
}

//Soft2Soft Involucrarse/Getting involved -- abrazar
void Involucrarse::estirarTextil()
{
}