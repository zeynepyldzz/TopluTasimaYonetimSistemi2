#include <iostream>
#ifndef PROJECT_H_
#define PROJECT_H_
#include <string>
using namespace std;
 class bus{
 	private:
 		string busname;
 		int id1;
 		
 		public:
 			void bussaatGoster();
 			void busguzergahGoster();
 			void busDuzenle(string hatl);
 		    void busSil(string hat);
			void busEkle(string numara, string kalkis, string guzergah, string saatler);
			void busAra();
			void busNoGoster();
			
			};
			
 class sub{
 	private:
 		string subname;
 		int id2;
 		
 		public:
 			void subsaatGoster();
 			void subguzergahGoster();
            void subDuzenle(string hatl);
 		    void subSil(string hat);
			void subEkle(string numara, string kalkis, string guzergah, string saatler);
			void subNoGoster();
			
			};
#endif
////// islemleri buraya yap

