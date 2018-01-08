#include "frmCalculadora.h"

using namespace System;

extern "C" int procSuma(int var1, int var2);

using namespace System ::Windows::Forms;
[STAThread]
void main(array<String^>^ arg) {
   Application::EnableVisualStyles();
   Application::SetCompatibleTextRenderingDefault(false);
   //TestForma es el nombre del proyecto
   Calculadora::frmCalculadora form;
   Application::Run(%form);
}

