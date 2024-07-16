#include <iostream>
#include <string>
#include <sstream>
#include <ctime>
#include <locale.h>
#include "menu.h"
#include "windows.h"
#include <fstream>
#include <iomanip>
using namespace std;
 
 void menu:: gotoxy(short x,short y)
{
COORD pos={x,y};
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
};

void menu::tema(){
    system("color 3");
	setlocale(LC_ALL,"Turkish");
	time_t now=time(0);
    cout<<ctime(&now)<<endl;
 
 };

 
 void menu::AnaMenu(){
 	cout<<endl<<"                                      ************************************************"<<endl;
	cout<<"                                      *                                              *"<<endl;
	cout<<"                                      *                                              *"<<endl;
	cout<<"                                      *                 TOPLU TAÞIMA                 *"<<endl;
	cout<<"                                      *               YÖNETÝM SÝSTEMÝNE              *"<<endl;
	cout<<"                                      *                 HOÞ GELDÝNÝZ!                *"<<endl;
	cout<<"                                      *                                              *"<<endl;
	cout<<"                                      *                                              *"<<endl;
	cout<<"                                      ************************************************"<<endl;
	gotoxy(52,13);
    cout<<"[1]- Admin Giriþi"<<endl;
    gotoxy(52,14);
	cout<<"[2]- Kullanýcý Giriþi"<<endl;
	gotoxy(52,15);
	cout<<"[3]- Çýkýþ"<<endl<<endl;
	
 
 };
void menu::AdminMenu(){
	system("cls");
	menu menu2;
	time_t now=time(0);

	
	system("cls");
	cout<<ctime(&now);

		
    cout<<endl<<endl<<"                                      ************************************************"<<endl;
	cout<<"                                      *                                              *"<<endl;
	cout<<"                                      *                                              *"<<endl;
	cout<<"                                      *                    ADMÝN                     *"<<endl;
	cout<<"                                      *                   GÝRÝÞÝNE                   *"<<endl;
	cout<<"                                      *                 HOÞ GELDÝNÝZ!                *"<<endl;
	cout<<"                                      *                                              *"<<endl;
	cout<<"                                      *                                              *"<<endl;
	cout<<"                                      ************************************************"<<endl;
	
    gotoxy(50,13);
   	cout<<"[1]-Hat Bilgilerini Düzenle"<<endl;
   gotoxy(50,14);
	cout<<"[2]-Yeni Hat Ekle"<<endl;
    gotoxy(50,15);
    cout<<"[3]-Hat Sil";
    gotoxy(50,16);
	cout<<"[4]-Geri dön"<<endl;
    gotoxy(50,17);
	cout<<"[5]-Çýkýþ"<<endl;
    cout<<endl<<"Lütfen Ýþlem seçiniz:";
		cin>>islem;
		///////////////////////////////////////////
		system("cls");
		int hatx;
    	switch (islem)
		{   case 1:
			    gotoxy(28,3);
			    cout<<"[1]-Otobüs hatlarýný düzenle";
			    gotoxy(28,4);
				cout<<"[2]-Metro hatlarýný düzenle";
			    gotoxy(20,7);
			    cout<<"Seçiniz :";
	     	    cin>>hatx;
	     	
	     	    if(hatx==1)
	        	{
	        	  system("cls");
	        	  bus1.busNoGoster();
				cout<<endl<<"Lutfen Duzenlemek Istediginiz hatti Seciniz :";
				string hatl;
				cin>>hatl;
                bus1.busDuzenle(hatl);
                cout<<endl<<"Saat basarýyla duzenlenmistir.";
			      Asoru();
			   
	            }
			    else if(hatx==2)
			    {
			    	system("cls");
			    	sub1.subNoGoster();
					cout<<endl<<"Lutfen Duzenlemek Istediginiz hatti Seciniz :";
					string hatl;
					cin>>hatl;
	              sub1.subDuzenle(hatl);
	                cout<<endl<<"Saat basarýyla duzenlenmistir.";
	              Asoru();
         	    }
			break;
	
		   case 2:
		   	gotoxy(28,3);
		      cout<<"[1]-Otobüs hattý ekle";
		      gotoxy(28,4);
			  cout<<"[2]-Metro hattý ekle ";
			  gotoxy(20,7);
			    cout<<"Seçiniz :";
	     	    cin>>hatx;
	     	
	     	    if(hatx==1)
	        	{
	        		system("cls");
					string numara,kalkis,guzergah,saatler;
	        		cout<<endl<<"Lutfen hat numarasý girin :";
	        		cin>>numara;
	        		cout<<endl<<"Lutfen kalkis noktasi girin :";
	        		cin>>kalkis;
	        		cout<<endl<<"Lutfen guzergah girin :";
					getline(cin >> ws, guzergah);
	        		//cin>>guzergah;
	        		cout<<endl<<"Lutfen saatleri girin :";
	        		getline(cin >> ws, saatler);
	        		
			      bus1.busEkle(numara,kalkis,guzergah, saatler);
			      cout<<endl<<"Hat baþarýyla eklendi";
			      Asoru();
	            }
			    else if(hatx==2)
			    {
			    	system("cls");
			    	string numara,kalkis,guzergah,saatler;
	        		cout<<endl<<"Lutfen hat numarasý girin :";
	        		cin>>numara;
	        		cout<<endl<<"Lutfen kalkis noktasi girin :";
	        		cin>>kalkis;
	        		cout<<endl<<"Lutfen guzergah girin :";
	        		getline(cin >> ws, guzergah);
	        		//cin>>guzergah;
	        		cout<<endl<<"Lutfen saatleri girin :";
	        		getline(cin >> ws, saatler);
	              sub1.subEkle(numara,kalkis,guzergah,saatler);
	              cout<<endl<<"Hat baþarýyla eklendi";
	              Asoru();
         	    }
		   break;
		   
		    case 3:
		    	gotoxy(28,3);
		      cout<<"[1]-Otobüs hattý sil";
		      gotoxy(28,4);
			  cout<<"[2]-Metro hattý sil ";
			  gotoxy(20,7);
			    cout<<"Seçiniz :";
	     	    cin>>hatx;
	     	
	     	    if(hatx==1)
	        	{
	        		system("cls");
	        		bus1.busNoGoster();
	        		cout<<endl<<"Lutfen Silmek Istediginiz hatti Seciniz :";
	        		string hat;
	        		cin>>hat;
			      bus1.busSil(hat);
			      cout<<endl<<"Hat baþarýyla silinmiþtir";
			      Asoru();
	            }
			    else if(hatx==2)
			    {
			    	system("cls");
			    	sub1.subNoGoster();
	        		cout<<endl<<"Lutfen Silmek Istediginiz hatti Seciniz :";
	        		string hat;
	        		cin>>hat;
	              sub1.subSil(hat);
	              cout<<endl<<"Hat baþarýyla silinmiþtir";
         	      Asoru();
				 }
		   break;
		  
		  case 4:
		   geri();  
		   break;
		   
		   case 5:
		   	cikis();
		   break;
		
	       default:
		   cout<<"Lütfen dikkatli seçin!"<<endl<<endl;
	      	AdminMenu();
		}
      /////////////////////////////////////////////////
	
	  
};
void menu::giris(){
	system("cls");
	int cevap;
	 gotoxy(3,1);
	cout<<"Kayýt ol (1)       Zaten hesabým var (2)";
	gotoxy(3,2);
	cout<<"-";
	cin>>cevap;

	string ad,soyad;
	 string sifre,skontrol,adk,soyadk;

	if(cevap==1){
		system("cls");
		///kayýt
   	ofstream Admin;
	Admin.open("Admin.txt",ios::app);
	
	gotoxy(4,2);
	cout<<"Ad:";
	cin>>ad; 

	
    gotoxy(4,3);
	cout<<"Soyad:";
	cin>>soyad; 

	gotoxy(4,4);
	cout<<"Parola oluþtur:";
	cin>>sifre;

    Admin<<endl<< ad<< setw(20)<< soyad<<setw(20)<< sifre;
	Admin.close();
	system("cls");
	
	gotoxy(4,1);
	cout<<"Parola oluþturuldu.";
	
	//////hesaba girme
	   gotoxy(2,3);
    cout<<"Ad girin:";
    cin>>adk;
    
    	   gotoxy(2,4);
    cout<<"Soyad girin:";
    cin>>soyadk;
    
    	   gotoxy(2,5);
    cout<<"Parola girin:";
    cin>>skontrol;
  
   ifstream Acma("Admin.txt");
   //ofstream Gecici("Gecici.txt");
    while(!(Acma.eof())){
    	if(sifre!=skontrol&& ad!=adk&& soyad!=soyadk){
    		system("cls");
    		gotoxy(3,1);
    		cout<<"Yanlýþ bilgi.";
    		int cevaps;
    		gotoxy(3,3);
    		cout<<"Tekrar denemek ister misiniz?";
    		gotoxy(5,4);
    		cout<<"evet(1)"<<setw(17)<<"hayýr(0)";
    		gotoxy(1,5);
			cout<<"-";
			cin>>cevaps;
    		if(cevaps==1){
    			giris();
			}else if(cevaps==0){
				cikis();
			}
    	    }
		else if(sifre==skontrol&& ad==adk && soyad==soyadk){
		
			AdminMenu();
			}
			break;
			}
		//Admin.close();
	}


	else if(cevap==2){
		system("cls");
        
		gotoxy(2,3);
    cout<<"Ad girin:";
    cin>>adk;
    
    	   gotoxy(2,4);
    cout<<"Soyad girin:";
    cin>>soyadk;
    
    	   gotoxy(2,5);
    cout<<"Parola girin:";
    cin>>skontrol;

   ifstream Acma("Admin.txt");
 
    while(!(Acma.eof())){
    	Acma >> ad >> soyad >> sifre;
    	if(sifre==skontrol&& ad==adk && soyad==soyadk){
    	AdminMenu();
    	}
		else {
		system("cls");
    		gotoxy(3,1);
            cout<<"Þifre yanlýþ.";
    		int cevaps;
    		gotoxy(3,3);
    		cout<<"Tekrar denemek ister misiniz?";
    		gotoxy(5,4);
            cout<<"evet(1)"<<setw(17)<<"hayýr(0)";
            gotoxy(1,5);
			cout<<"-";
    		cin>>cevaps;
    		if(cevaps==1){
    			giris();
			}else if(cevaps==0){
				cikis();
			}
			}
			}
			Acma.close();
	}

};
 
 
 
 void menu::Secim(){
 int girisx;
	cout<<"  Lütfen giriþ seçiniz: ";
	cin>>girisx;
	cout<<endl;
	
	if(girisx==1)
    { 
    giris();
   	} 
    else if(girisx==2)
	{
    KullaniciMenu();
	}
	else if(girisx==3)
	{
	cikis();
	}
     else    
    {
    system("cls");
    gotoxy(2,1);
     cout<<"Lütfen dikkatli seçiniz!"<<endl<<endl;
       gotoxy(36,3);
       cout<<"[1]- Admin Giriþi"<<endl;
       gotoxy(36,4);
	   cout<<"[2]- Kullanýcý Giriþi"<<endl;
	   gotoxy(36,5);
	   cout<<"[3]- Çýkýþ"<<endl<<endl;
	Secim();	
    } 
 };



void menu::KullaniciMenu(){
	menu menu3;
	system("cls");
	time_t now=time(0);
	cout<<ctime(&now);
	int islem;

	cout<<endl<<endl<<"                                      ************************************************"<<endl;
	cout<<"                                      *                                              *"<<endl;
	cout<<"                                      *                                              *"<<endl;
	cout<<"                                      *                  KULLANICI                   *"<<endl;
	cout<<"                                      *                   GÝRÝÞÝNE                   *"<<endl;
	cout<<"                                      *                 HOÞ GELDÝNÝZ!                *"<<endl;
	cout<<"                                      *                                              *"<<endl;
	cout<<"                                      *                                              *"<<endl;
	cout<<"                                      ************************************************"<<endl;
		gotoxy(52,13);
		cout<<"[1]-Sefer saatleri"<<endl;
		gotoxy(52,14);
		cout<<"[2]-Güzergahlar"<<endl;
		gotoxy(52,15);
		cout<<"[3]-Geri dön"<<endl;
		gotoxy(52,16);
		cout<<"[4]-Çýkýþ"<<endl;
		cout<<endl<<" Lütfen iþlem seçiniz: ";
		cin>>islem;
		int hat;
		system("cls");
		/////////////////////////////////////
		switch(islem)
		{
			case 1:
					gotoxy(2,2);
			cout<<"[1]-Otobüs Hatlarý"<<endl<<"  [2]-Metro Hatlarý"<<endl;
			
			cout<<endl<<" Lütfen kullanmak istediðiniz Toplu Taþýmayý seçiniz :";
	     	cin>>hat;
	     	
	     	if(hat==1)
	     	{
			 cout<<"\n OTOBÜS HATLARI " << endl;
			 bus1.bussaatGoster();
			 Ksoru();
	        }
			else if(hat==2)
			{
				cout<<"\n METRO HATLARI " <<endl;	
	         sub1.subsaatGoster();
	         Ksoru();
         	}
		    break;
			
			case 2:
				gotoxy(2,2);
		    cout<<"[1]-Otobüs hatlarý"<<endl<<"  [2]-Metro hatlarý"<<endl;
			
			cout<<endl<<" Lütfen Kullanmak Ýstediðiniz Toplu Taþýmayý Seçiniz: ";
	     	cin>>hat;
	     	
			 if(hat==1)
	     	{
			 cout<<"\n OTOBÜS GÜZERGAHLARI \n ";
			 bus1.busguzergahGoster();
			 Ksoru();
			}
			else if(hat==2)
			{
				cout<<"\n METRO GÜZERGAHLARI \n";
		     sub1.subguzergahGoster();
		     Ksoru();
		    }
			break;
			
			case 3:
		    geri();
            break;
			
			case 4:
				menu3.cikis();
				break;
			default:
				cout<<"hata";
				exit (0);
				break;
			}
};
 void menu::geri(){
 	system("cls");
    tema();
    AnaMenu();
	Secim(); 
};
 
 void menu::cikis(){
 	system("cls");
 	int emin , evet=1, hayir=2;
    gotoxy(10,1);
	cout<<"Emin misiniz? "<<endl;
	 gotoxy(7,2);
	cout<<"1(Evet)    2(Hayýr)"<<endl;
    gotoxy(1,3);
	cout<<"-";
 	cin>> emin;
 
 	
 	if (emin==evet){
 		system("cls");
 		gotoxy(1,1);
        cout<<endl<<"  Ýyi Günler!";
        exit (0);
	 }
	 else if(emin==hayir){
	 	geri();
	 	
	 }else
	  cikis();
	 };
	 
  void menu::Asoru(){
	int secy;
	   cout<<endl<<endl<<setw(20)<<"[1]-Geri Dön"<<setw(29)<<"[2]-Ana Menü"<<setw(25)<<"[3]-Çýkýþ";
			      cout<<endl<<endl<<setw(8)<<"-";
			      cin>>secy;
			       switch(secy){
			       	case 1:
			       		AdminMenu();
			       		break;
			       	case 2:
			       		geri();
			       		break;
			       	case 3:
			       		cikis();
			       		break;
			       	default:
			       		AnaMenu();
			       		break;
				   }
}
void menu::Ksoru(){
	int secy;
	   cout<<endl<<endl<<setw(20)<<"[1]-Geri Dön"<<setw(29)<<"[2]-Ana Menü"<<setw(25)<<"[3]-Çýkýþ";
			      cout<<endl<<endl<<setw(8)<<"-";
			      cin>>secy;
			       switch(secy){
			       	case 1:
			       		KullaniciMenu();
			       		break;
			       	case 2:
			       		geri();
			       		break;
			       	case 0:
			       		cikis();
			       		break;
			       	default:
			       		AnaMenu();
			       		break;
				   }
}
