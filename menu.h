#include<iostream>
#include <string>
#ifndef MENU_H_
#define MENU_H_
#include "project.h"
using namespace std;

class menu{
	private:
		int islem;
		bus bus1;
		sub sub1;
		
	public:
	  void gotoxy(short x,short y);
	  void tema();
	  void AnaMenu();
	  void Secim();
	  void AdminMenu();
	  void KullaniciMenu();
	  void cikis();
	  void geri();
	  void giris();
	  void Asoru();
	  void Ksoru();
	  
};

#endif

