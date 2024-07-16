#include <iostream>
#include "project.h"
#include <string>
#include <sstream>
#include <mysql.h>           
#include <mysqld_error.h>

using namespace std;

 void gotoxy(short x,short y)
{
COORD pos={x,y};
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
};

void bus::busNoGoster(){
	MYSQL* conn;	
	MYSQL_ROW row;
    MYSQL_RES* res;
    conn = mysql_init(0);
	conn = mysql_real_connect(conn, "localhost", "root", "1234", "toplutasima", 3306, NULL, 0);
	
	if(conn){
	string query = "SELECT numara FROM otobus";
    const char* q = query.c_str();
	mysql_query(conn, q);
	res = mysql_store_result(conn);
	gotoxy(0,2);
	while (row = mysql_fetch_row(res)) {
                cout << "  Numara: " << row[0] << endl;
            }
}
}
void bus::bussaatGoster()
{
	MYSQL* conn;	
	MYSQL_ROW row;
    MYSQL_RES* res;
    conn = mysql_init(0);
	conn = mysql_real_connect(conn, "localhost", "root", "1234", "toplutasima", 3306, NULL, 0);
	if(conn){
	string query = "SELECT numara FROM otobus";
    const char* q = query.c_str();
	mysql_query(conn, q);
	res = mysql_store_result(conn);
	while (row = mysql_fetch_row(res)) {
                cout << "\n Numara: " << row[0] << endl;
            }
            
            cout<<endl<<"Lutfen Kullanmak Istediginiz hatti Seciniz :";
            string numara;
            cin>>numara;
            
            string querysaatler = "SELECT saatler FROM otobus WHERE numara='" + numara + "'";
    const char* qsaatler = querysaatler.c_str();
	mysql_query(conn, qsaatler);
	res = mysql_store_result(conn);
	while (row = mysql_fetch_row(res)) {
                cout << "Saatler: " << row[0] << endl;
            }
            
	}else{
		cout << "Not Connected";
	}
}

void bus::busguzergahGoster()
{
	MYSQL* conn;	
	MYSQL_ROW row;
    MYSQL_RES* res;
    conn = mysql_init(0);
	conn = mysql_real_connect(conn, "localhost", "root", "1234", "toplutasima", 3306, NULL, 0);

if(conn){
	string query = "SELECT numara FROM otobus";
    const char* q = query.c_str();
	mysql_query(conn, q);
	res = mysql_store_result(conn);
	while (row = mysql_fetch_row(res)) {
                cout << "\n Numara: " << row[0] << endl;
            }
            
            cout<<endl<<"Lutfen Kullanmak Istediginiz hatti Seciniz :";
            string numara;
            cin>>numara;
            
            string queryguzergah = "SELECT guzergah FROM otobus WHERE numara='" + numara + "'";
    const char* qguzergah = queryguzergah.c_str();
	mysql_query(conn, qguzergah);
	res = mysql_store_result(conn);
	while (row = mysql_fetch_row(res)) {
                cout << "Guzergah: " << row[0] << endl;
            }
            
	}else{
		cout << "Not Connected";
	}
}  

void bus::busDuzenle(string hatl)
{
MYSQL* conn;	
	MYSQL_ROW row;
    MYSQL_RES* res;
    conn = mysql_init(0);
	conn = mysql_real_connect(conn, "localhost", "root", "1234", "toplutasima", 3306, NULL, 0);
	if(conn){
		string query = "DELETE FROM otobus WHERE numara='" + hatl + "'";
		const char* q = query.c_str();
	mysql_query(conn, q);
	
	}
	string numara;
	string kalkis;
	string saatler;
	string guzergah;
	cout<<endl<<"numara:";
	cin>>numara;
	cout<<"kalkis:";
	cin>>kalkis;
	cout<<"saatler:";
    getline(cin >> ws, saatler);
	cout<<"guzergah:";
	getline(cin >> ws, guzergah);
     if(conn){
		string query = "INSERT INTO otobus (numara, kalkis, guzergah, saatler) VALUES ('" + numara + "','" + kalkis + "','" + guzergah + "','" + saatler + "')";
    const char* q = query.c_str();
	mysql_query(conn, q);
	}else{
		
	}
}


void bus::busSil(string hat)
{
MYSQL* conn;	
	MYSQL_ROW row;
    MYSQL_RES* res;
    conn = mysql_init(0);
	conn = mysql_real_connect(conn, "localhost", "root", "1234", "toplutasima", 3306, NULL, 0);
	if(conn){
		string query = "DELETE FROM otobus WHERE numara='" + hat + "'";
    const char* q = query.c_str();
	mysql_query(conn, q);
	}else{
		
	}
}

void bus::busEkle(string numara, string kalkis, string guzergah, string saatler)
{
MYSQL* conn;	
	MYSQL_ROW row;
    MYSQL_RES* res;
    conn = mysql_init(0);
	conn = mysql_real_connect(conn, "localhost", "root", "1234", "toplutasima", 3306, NULL, 0);
	if(conn){
		string query = "INSERT INTO otobus (numara, kalkis, guzergah, saatler) VALUES ('" + numara + "','" + kalkis + "','" + guzergah + "','" + saatler + "')";
    const char* q = query.c_str();
	mysql_query(conn, q);
	}else{
		
	}
}


 //////////////// METRO ////////////////
 
 
void sub::subNoGoster(){
	MYSQL* conn;	
	MYSQL_ROW row;
    MYSQL_RES* res;
    conn = mysql_init(0);
	conn = mysql_real_connect(conn, "localhost", "root", "1234", "toplutasima", 3306, NULL, 0);
	
	if(conn){
	string query = "SELECT numara FROM metro";
    const char* q = query.c_str();
	mysql_query(conn, q);
	res = mysql_store_result(conn);
	gotoxy(0,2);
	while (row = mysql_fetch_row(res)) {
                cout << "  Numara: " << row[0] << endl;
            }
}
}
 
void sub::subguzergahGoster()
{
	MYSQL* conn;	
	MYSQL_ROW row;
    MYSQL_RES* res;
    conn = mysql_init(0);
	conn = mysql_real_connect(conn, "localhost", "root", "1234", "toplutasima", 3306, NULL, 0);
	
	if(conn){
	string query = "SELECT numara FROM metro";
    const char* q = query.c_str();
	mysql_query(conn, q);
	res = mysql_store_result(conn);
	while (row = mysql_fetch_row(res)) {
                cout << "\n Numara: " << row[0] << endl;
            }
             
            cout<<endl<<"Lutfen Kullanmak Istediginiz hatti Seciniz :";
            string numara;
            cin>>numara;
            
            string queryguzergah = "SELECT guzergah FROM metro WHERE numara='" + numara + "'";
    const char* qguzergah = queryguzergah.c_str();
	mysql_query(conn, qguzergah);
	res = mysql_store_result(conn);
	while (row = mysql_fetch_row(res)) {
                cout << "Guzergah: " << row[0] << endl;
            }
			}
			else
			{
				cout<<"Lutfen dikkatli secin!"<<endl<<endl;
		
	         
				
			}
		
}
void sub::subsaatGoster()
{
	MYSQL* conn;	
	MYSQL_ROW row;
    MYSQL_RES* res;
    conn = mysql_init(0);
	conn = mysql_real_connect(conn, "localhost", "root", "1234", "toplutasima", 3306, NULL, 0);
	
	if(conn){
	string query = "SELECT numara FROM metro";
    const char* q = query.c_str();
	mysql_query(conn, q);
	res = mysql_store_result(conn);
	while (row = mysql_fetch_row(res)) 
	
	{
                cout << "\n Numara: " << row[0] << endl;
            }
            
            cout<<endl<<"Lutfen Kullanmak Istediginiz hatti Seciniz :";
            string numara;
            cin>>numara;
            
            string querysaatler = "SELECT saatler FROM metro WHERE numara='" + numara + "'";
    const char* qsaatler = querysaatler.c_str();
	mysql_query(conn, qsaatler);
	res = mysql_store_result(conn);
	while (row = mysql_fetch_row(res)) {
                cout << "Saatler: " << row[0] << endl;
            }
            
	}else{
		cout << "Not Connected";
	}
}

void sub::subSil(string hat)
{
MYSQL* conn;	
	MYSQL_ROW row;
    MYSQL_RES* res;
    conn = mysql_init(0);
	conn = mysql_real_connect(conn, "localhost", "root", "1234", "toplutasima", 3306, NULL, 0);
	if(conn){
		string query = "DELETE FROM metro WHERE numara='" + hat + "'";
    const char* q = query.c_str();
	mysql_query(conn, q);
	}else{
		
	}	
}

void sub::subEkle(string numara, string kalkis, string guzergah, string saatler)
{
MYSQL* conn;	
	MYSQL_ROW row;
    MYSQL_RES* res;
    conn = mysql_init(0);
	conn = mysql_real_connect(conn, "localhost", "root", "1234", "toplutasima", 3306, NULL, 0);
	if(conn){
		string query = "INSERT INTO metro (numara, kalkis, guzergah, saatler) VALUES ('" + numara + "','" + kalkis + "','" + guzergah + "','" + saatler + "')";
    const char* q = query.c_str();
	mysql_query(conn, q);
	}else{
		
	}
}


void sub::subDuzenle(string hatl)
{
MYSQL* conn;	
	MYSQL_ROW row;
    MYSQL_RES* res;
    conn = mysql_init(0);
	conn = mysql_real_connect(conn, "localhost", "root", "1234", "toplutasima", 3306, NULL, 0);
	if(conn){
		string query = "DELETE FROM metro WHERE numara='" + hatl + "'";
		const char* q = query.c_str();
	mysql_query(conn, q);
	
	}
	string numara;
	string kalkis;
	string saatler;
	string guzergah;
	cout<<endl<<"numara:";
	cin>>numara;
	cout<<endl<<"kalkis:";
	cin>>kalkis;
	cout<<endl<<"saatler:";
	getline(cin >> ws, saatler);
	cout<<endl<<"guzergah:";
	getline(cin >> ws, guzergah);
     if(conn){
		string query = "INSERT INTO metro (numara, kalkis, guzergah, saatler) VALUES ('" + numara + "','" + kalkis + "','" + guzergah + "','" + saatler + "')";
    const char* q = query.c_str();
	mysql_query(conn, q);
	}else{
		
	}
	
	
}






