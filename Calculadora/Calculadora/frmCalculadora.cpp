#include "frmCalculadora.h" 

//Necesario para agregar la interfaz grafica al codigo.


/*

Autores     : 	Juan David Correa 
		  		Mateo Pulido
		  		Christian Salazar 
Fecha       : 2016/10/21
Descripcion : Calculadora hecha con procedimientos en Ensamblador y el C++ para el front		  

*/

using namespace System;

using namespace System ::Windows::Forms;
[STAThread]
void main(array<String^>^ arg) {
   Application::EnableVisualStyles();
   Application::SetCompatibleTextRenderingDefault(false);
   //TestForma es el nombre del proyecto
   Calculadora::frmCalculadora form;
   Application::Run(%form);
}

