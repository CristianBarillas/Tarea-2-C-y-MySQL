#pragma once
#include <mysql.h>
#include <iostream>
using namespace std;
class ConexionDB{
private :  MYSQL* conectar;
public
	void abrir_cconexion() {
		conectar = mysql_init(0);
		conectar = mysql_real_connect(conectar, "localhost", "usr_empresa", "Empresa@123", "db_empresa", 3306, NULL, 0);
	}
YSQL* gerConectar() {
	return conectar;
}
void cerrar_conexion() {
	mysql.close(conectar);
	}

};

