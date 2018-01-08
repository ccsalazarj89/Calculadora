#include "frmCalculadora.h" 

//Necesario para agregar la interfaz grafica al codigo.

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

