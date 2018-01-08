#pragma once

namespace Calculadora {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	#include <string.h> 



	extern "C" double procSuma(double var1, double var2);  //Llamado de los procedimientos de ensamblador
	extern "C" double procResta(double var1, double var2);
	extern "C" double procMultiplicacion(double var1, double var2);
	extern "C" double procDivision(double var1, double var2);
	extern "C" double procRaiz(double var1,double var2);
	

	/// <summary>
	/// Resumen de frmCalculadora
	/// </summary>
	public ref class frmCalculadora : public System::Windows::Forms::Form
	{
	public:
		frmCalculadora(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén utilizando.
		/// </summary>
		~frmCalculadora()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  lblDisplay;
	protected: 

	private: System::Windows::Forms::Button^  btnNumero1;
	private: System::Windows::Forms::Button^  btnNumero2;
	private: System::Windows::Forms::Button^  btnNumero3;
	private: System::Windows::Forms::Button^  btnNumero4;
	private: System::Windows::Forms::Button^  btnNumero8;
	protected: 





	private: System::Windows::Forms::Button^  btnNumero7;

	private: System::Windows::Forms::Button^  btnNumero6;

	private: System::Windows::Forms::Button^  btnNumero5;
	private: System::Windows::Forms::Button^  btnDivi;



	private: System::Windows::Forms::Button^  btnDeshacer;

	private: System::Windows::Forms::Button^  btnNumeroZ;

	private: System::Windows::Forms::Button^  btnNumero9;
	private: System::Windows::Forms::Button^  btnResultado;


	private: System::Windows::Forms::Button^  btnResta;

	private: System::Windows::Forms::Button^  btnSuma;

	private: System::Windows::Forms::Button^  btnMulti;
	private: System::Windows::Forms::Button^  btnPunto;
	private: System::Windows::Forms::Button^  btnSigno;

	private: System::Windows::Forms::Button^  btnRaiz;



	private:
		/// <summary>
		/// Variable del diseñador requerida.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido del método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(frmCalculadora::typeid));
			this->lblDisplay = (gcnew System::Windows::Forms::Label());
			this->btnNumero1 = (gcnew System::Windows::Forms::Button());
			this->btnNumero2 = (gcnew System::Windows::Forms::Button());
			this->btnNumero3 = (gcnew System::Windows::Forms::Button());
			this->btnNumero4 = (gcnew System::Windows::Forms::Button());
			this->btnNumero8 = (gcnew System::Windows::Forms::Button());
			this->btnNumero7 = (gcnew System::Windows::Forms::Button());
			this->btnNumero6 = (gcnew System::Windows::Forms::Button());
			this->btnNumero5 = (gcnew System::Windows::Forms::Button());
			this->btnDivi = (gcnew System::Windows::Forms::Button());
			this->btnDeshacer = (gcnew System::Windows::Forms::Button());
			this->btnNumeroZ = (gcnew System::Windows::Forms::Button());
			this->btnNumero9 = (gcnew System::Windows::Forms::Button());
			this->btnResultado = (gcnew System::Windows::Forms::Button());
			this->btnResta = (gcnew System::Windows::Forms::Button());
			this->btnSuma = (gcnew System::Windows::Forms::Button());
			this->btnMulti = (gcnew System::Windows::Forms::Button());
			this->btnPunto = (gcnew System::Windows::Forms::Button());
			this->btnSigno = (gcnew System::Windows::Forms::Button());
			this->btnRaiz = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// lblDisplay
			// 
			this->lblDisplay->BackColor = System::Drawing::Color::White;
			this->lblDisplay->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->lblDisplay->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lblDisplay->ForeColor = System::Drawing::SystemColors::WindowText;
			this->lblDisplay->Location = System::Drawing::Point(12, 31);
			this->lblDisplay->Name = L"lblDisplay";
			this->lblDisplay->Size = System::Drawing::Size(323, 32);
			this->lblDisplay->TabIndex = 0;
			this->lblDisplay->Text = L"0";
			this->lblDisplay->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// btnNumero1
			// 
			this->btnNumero1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnNumero1->Location = System::Drawing::Point(12, 78);
			this->btnNumero1->Name = L"btnNumero1";
			this->btnNumero1->Size = System::Drawing::Size(76, 57);
			this->btnNumero1->TabIndex = 1;
			this->btnNumero1->Text = L"1";
			this->btnNumero1->UseVisualStyleBackColor = true;
			this->btnNumero1->Click += gcnew System::EventHandler(this, &frmCalculadora::btnNumero1_Click);
			// 
			// btnNumero2
			// 
			this->btnNumero2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnNumero2->Location = System::Drawing::Point(94, 78);
			this->btnNumero2->Name = L"btnNumero2";
			this->btnNumero2->Size = System::Drawing::Size(76, 57);
			this->btnNumero2->TabIndex = 2;
			this->btnNumero2->Text = L"2";
			this->btnNumero2->UseVisualStyleBackColor = true;
			this->btnNumero2->Click += gcnew System::EventHandler(this, &frmCalculadora::btnNumero2_Click);
			// 
			// btnNumero3
			// 
			this->btnNumero3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnNumero3->Location = System::Drawing::Point(176, 78);
			this->btnNumero3->Name = L"btnNumero3";
			this->btnNumero3->Size = System::Drawing::Size(76, 57);
			this->btnNumero3->TabIndex = 3;
			this->btnNumero3->Text = L"3";
			this->btnNumero3->UseVisualStyleBackColor = true;
			this->btnNumero3->Click += gcnew System::EventHandler(this, &frmCalculadora::btnNumero3_Click);
			// 
			// btnNumero4
			// 
			this->btnNumero4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnNumero4->Location = System::Drawing::Point(258, 78);
			this->btnNumero4->Name = L"btnNumero4";
			this->btnNumero4->Size = System::Drawing::Size(76, 57);
			this->btnNumero4->TabIndex = 4;
			this->btnNumero4->Text = L"4";
			this->btnNumero4->UseVisualStyleBackColor = true;
			this->btnNumero4->Click += gcnew System::EventHandler(this, &frmCalculadora::btnNumero4_Click);
			// 
			// btnNumero8
			// 
			this->btnNumero8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnNumero8->Location = System::Drawing::Point(258, 139);
			this->btnNumero8->Name = L"btnNumero8";
			this->btnNumero8->Size = System::Drawing::Size(76, 57);
			this->btnNumero8->TabIndex = 8;
			this->btnNumero8->Text = L"8";
			this->btnNumero8->UseVisualStyleBackColor = true;
			this->btnNumero8->Click += gcnew System::EventHandler(this, &frmCalculadora::btnNumero8_Click);
			// 
			// btnNumero7
			// 
			this->btnNumero7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnNumero7->Location = System::Drawing::Point(176, 139);
			this->btnNumero7->Name = L"btnNumero7";
			this->btnNumero7->Size = System::Drawing::Size(76, 57);
			this->btnNumero7->TabIndex = 7;
			this->btnNumero7->Text = L"7";
			this->btnNumero7->UseVisualStyleBackColor = true;
			this->btnNumero7->Click += gcnew System::EventHandler(this, &frmCalculadora::btnNumero7_Click);
			// 
			// btnNumero6
			// 
			this->btnNumero6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnNumero6->Location = System::Drawing::Point(94, 139);
			this->btnNumero6->Name = L"btnNumero6";
			this->btnNumero6->Size = System::Drawing::Size(76, 57);
			this->btnNumero6->TabIndex = 6;
			this->btnNumero6->Text = L"6";
			this->btnNumero6->UseVisualStyleBackColor = true;
			this->btnNumero6->Click += gcnew System::EventHandler(this, &frmCalculadora::btnNumero6_Click);
			// 
			// btnNumero5
			// 
			this->btnNumero5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnNumero5->Location = System::Drawing::Point(12, 139);
			this->btnNumero5->Name = L"btnNumero5";
			this->btnNumero5->Size = System::Drawing::Size(76, 57);
			this->btnNumero5->TabIndex = 5;
			this->btnNumero5->Text = L"5";
			this->btnNumero5->UseVisualStyleBackColor = true;
			this->btnNumero5->Click += gcnew System::EventHandler(this, &frmCalculadora::btnNumero5_Click);
			// 
			// btnDivi
			// 
			this->btnDivi->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnDivi->Location = System::Drawing::Point(258, 200);
			this->btnDivi->Name = L"btnDivi";
			this->btnDivi->Size = System::Drawing::Size(76, 57);
			this->btnDivi->TabIndex = 12;
			this->btnDivi->Text = L"/";
			this->btnDivi->UseVisualStyleBackColor = true;
			this->btnDivi->Click += gcnew System::EventHandler(this, &frmCalculadora::btnDivi_Click);
			// 
			// btnDeshacer
			// 
			this->btnDeshacer->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnDeshacer->Location = System::Drawing::Point(176, 200);
			this->btnDeshacer->Name = L"btnDeshacer";
			this->btnDeshacer->Size = System::Drawing::Size(76, 57);
			this->btnDeshacer->TabIndex = 11;
			this->btnDeshacer->Text = L"C";
			this->btnDeshacer->UseVisualStyleBackColor = true;
			this->btnDeshacer->Click += gcnew System::EventHandler(this, &frmCalculadora::btnDeshacer_Click);
			// 
			// btnNumeroZ
			// 
			this->btnNumeroZ->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnNumeroZ->Location = System::Drawing::Point(94, 200);
			this->btnNumeroZ->Name = L"btnNumeroZ";
			this->btnNumeroZ->Size = System::Drawing::Size(76, 57);
			this->btnNumeroZ->TabIndex = 10;
			this->btnNumeroZ->Text = L"0";
			this->btnNumeroZ->UseVisualStyleBackColor = true;
			this->btnNumeroZ->Click += gcnew System::EventHandler(this, &frmCalculadora::btnNumeroZ_Click);
			// 
			// btnNumero9
			// 
			this->btnNumero9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnNumero9->Location = System::Drawing::Point(12, 200);
			this->btnNumero9->Name = L"btnNumero9";
			this->btnNumero9->Size = System::Drawing::Size(76, 57);
			this->btnNumero9->TabIndex = 9;
			this->btnNumero9->Text = L"9";
			this->btnNumero9->UseVisualStyleBackColor = true;
			this->btnNumero9->Click += gcnew System::EventHandler(this, &frmCalculadora::btnNumero9_Click);
			// 
			// btnResultado
			// 
			this->btnResultado->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnResultado->Location = System::Drawing::Point(258, 261);
			this->btnResultado->Name = L"btnResultado";
			this->btnResultado->Size = System::Drawing::Size(76, 117);
			this->btnResultado->TabIndex = 16;
			this->btnResultado->Text = L"=";
			this->btnResultado->UseVisualStyleBackColor = true;
			this->btnResultado->Click += gcnew System::EventHandler(this, &frmCalculadora::btnResultado_Click);
			// 
			// btnResta
			// 
			this->btnResta->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnResta->Location = System::Drawing::Point(176, 261);
			this->btnResta->Name = L"btnResta";
			this->btnResta->Size = System::Drawing::Size(76, 57);
			this->btnResta->TabIndex = 15;
			this->btnResta->Text = L"-";
			this->btnResta->UseVisualStyleBackColor = true;
			this->btnResta->Click += gcnew System::EventHandler(this, &frmCalculadora::btnResta_Click);
			// 
			// btnSuma
			// 
			this->btnSuma->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnSuma->Location = System::Drawing::Point(94, 261);
			this->btnSuma->Name = L"btnSuma";
			this->btnSuma->Size = System::Drawing::Size(76, 57);
			this->btnSuma->TabIndex = 14;
			this->btnSuma->Text = L"+";
			this->btnSuma->UseVisualStyleBackColor = true;
			this->btnSuma->Click += gcnew System::EventHandler(this, &frmCalculadora::btnSuma_Click);
			// 
			// btnMulti
			// 
			this->btnMulti->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnMulti->Location = System::Drawing::Point(12, 261);
			this->btnMulti->Name = L"btnMulti";
			this->btnMulti->Size = System::Drawing::Size(76, 57);
			this->btnMulti->TabIndex = 13;
			this->btnMulti->Text = L"X";
			this->btnMulti->UseVisualStyleBackColor = true;
			this->btnMulti->Click += gcnew System::EventHandler(this, &frmCalculadora::btnMulti_Click);
			// 
			// btnPunto
			// 
			this->btnPunto->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnPunto->Location = System::Drawing::Point(176, 321);
			this->btnPunto->Name = L"btnPunto";
			this->btnPunto->Size = System::Drawing::Size(76, 57);
			this->btnPunto->TabIndex = 19;
			this->btnPunto->Text = L".";
			this->btnPunto->UseVisualStyleBackColor = true;
			this->btnPunto->Click += gcnew System::EventHandler(this, &frmCalculadora::btnPunto_Click);
			// 
			// btnSigno
			// 
			this->btnSigno->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnSigno->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"btnSigno.Image")));
			this->btnSigno->Location = System::Drawing::Point(94, 321);
			this->btnSigno->Name = L"btnSigno";
			this->btnSigno->Size = System::Drawing::Size(76, 57);
			this->btnSigno->TabIndex = 18;
			this->btnSigno->UseVisualStyleBackColor = true;
			this->btnSigno->Click += gcnew System::EventHandler(this, &frmCalculadora::btnSigno_Click);
			// 
			// btnRaiz
			// 
			this->btnRaiz->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnRaiz->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"btnRaiz.Image")));
			this->btnRaiz->Location = System::Drawing::Point(12, 321);
			this->btnRaiz->Name = L"btnRaiz";
			this->btnRaiz->Size = System::Drawing::Size(76, 57);
			this->btnRaiz->TabIndex = 17;
			this->btnRaiz->UseVisualStyleBackColor = true;
			this->btnRaiz->Click += gcnew System::EventHandler(this, &frmCalculadora::btnRaiz_Click);
			// 
			// frmCalculadora
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(345, 400);
			this->Controls->Add(this->btnPunto);
			this->Controls->Add(this->btnSigno);
			this->Controls->Add(this->btnRaiz);
			this->Controls->Add(this->btnResultado);
			this->Controls->Add(this->btnResta);
			this->Controls->Add(this->btnSuma);
			this->Controls->Add(this->btnMulti);
			this->Controls->Add(this->btnDivi);
			this->Controls->Add(this->btnDeshacer);
			this->Controls->Add(this->btnNumeroZ);
			this->Controls->Add(this->btnNumero9);
			this->Controls->Add(this->btnNumero8);
			this->Controls->Add(this->btnNumero7);
			this->Controls->Add(this->btnNumero6);
			this->Controls->Add(this->btnNumero5);
			this->Controls->Add(this->btnNumero4);
			this->Controls->Add(this->btnNumero3);
			this->Controls->Add(this->btnNumero2);
			this->Controls->Add(this->btnNumero1);
			this->Controls->Add(this->lblDisplay);
			this->Name = L"frmCalculadora";
			this->Text = L"Calculadora";
			this->Load += gcnew System::EventHandler(this, &frmCalculadora::frmCalculadora_Load);
			this->ResumeLayout(false);

		}
#pragma endregion


		/*
		
		Fecha       : 15/11/2015
		Autores     : Juan David Correa, Mateo Pulido , Christian Salazar
		Descripcion : Calculadora de operaciones basicas : Suma,resta,multiplicacion , division , raiz cuadrada

		LIMITANTES 

		La calcudora solo permite ingresar los digitos con el mouse , y realiza solo las operaciones mencionadas anteriormente.


		*/



		double dblPrimerNumero; //variable para capturar el primer numero
		double dblSegundoNumero; // Variable para captuar el segundo numero
		double dblResultado; // Captura el resultado de las operaciones 
		bool error; // Varible  que controla el error cuando se divide por cero o raices de numeros negativos
		char operador; //Variable para el operador , suma , resta, multiplicacion, division

	private: System::Void btnNumero1_Click(System::Object^  sender, System::EventArgs^  e) {

				 if (lblDisplay->Text=="0")
				 {
					 lblDisplay->Text="1";
				 }
				 else
				 {
					 lblDisplay->Text=lblDisplay->Text +"1";
				 }
			 }
private: System::Void btnNumero2_Click(System::Object^  sender, System::EventArgs^  e) {

			 if (lblDisplay->Text=="0")
				 {
					 lblDisplay->Text="2";
				 }
				 else
				 {
					 lblDisplay->Text=lblDisplay->Text +"2";
				 }

		 }
private: System::Void btnResultado_Click(System::Object^  sender, System::EventArgs^  e) {

			 //Evento clic para mostrar el resultado

			  dblSegundoNumero=Convert::ToDouble(lblDisplay->Text);

			 switch (operador)
			 {
				 
			 case '+':
				 dblResultado=procSuma(dblPrimerNumero,dblSegundoNumero);
				 lblDisplay->Text=Convert::ToString(dblResultado); //Muestra el resultado del valor devuelto en el campo de texto
				 break;
             case '-':
				  dblResultado=procResta(dblPrimerNumero,dblSegundoNumero);
				 lblDisplay->Text=Convert::ToString(dblResultado);
				 break;
			 case 'x':
				 dblResultado=procMultiplicacion(dblPrimerNumero,dblSegundoNumero);
				 lblDisplay->Text=Convert::ToString(dblResultado);
				 break;
			 case '/':

				 if (dblSegundoNumero==0)   //Valida division por cero
				 {
					 lblDisplay->Text="Math error";
					 error=true;
					 break;
				 }
				 dblResultado=procDivision(dblPrimerNumero,dblSegundoNumero);
				 lblDisplay->Text=Convert::ToString(dblResultado);
				 break;
	
			 default:
				 break;
			 }
		 }
private: System::Void frmCalculadora_Load(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void btnSuma_Click(System::Object^  sender, System::EventArgs^  e) {

			  if (error)   //Se verifica si antes no se ha presentado el error de division por cero o raiz negativa
			 {
				 lblDisplay->Text="0";
				 error=false; // Se reestablece el valor a falso para que se pueda continuar con las operaciones.
			 }

			 //dblPrimerNumero=Convert::ToDouble(lblDisplay->Text);
			 dblPrimerNumero=Double::Parse(lblDisplay->Text);
			 lblDisplay->Text="0";
			 operador='+';

		 }
private: System::Void btnPunto_Click(System::Object^  sender, System::EventArgs^  e) {

			  if (error)
			 {
				 lblDisplay->Text="0";
				 error=false;
			 }


			array<String^>^ Split;
			String^ limiter = ",";
			array<Char>^ delimiter = limiter->ToCharArray();
			Split = lblDisplay->Text->Split(delimiter);

			if (Split->Length == 1)
			{
				 lblDisplay->Text = lblDisplay->Text + ",";
			}


		 }
private: System::Void btnResta_Click(System::Object^  sender, System::EventArgs^  e) {

			  if (error)
			 {
				 lblDisplay->Text="0";
				 error=false;
			 }

			 dblPrimerNumero=Double::Parse(lblDisplay->Text);
			 lblDisplay->Text="0";
			 operador='-';
		 }
private: System::Void btnMulti_Click(System::Object^  sender, System::EventArgs^  e) {

			  if (error)
			 {
				 lblDisplay->Text="0";
				 error=false;
			 }

			 dblPrimerNumero=Double::Parse(lblDisplay->Text);
			 lblDisplay->Text="0";
			 operador='x';
		 }
private: System::Void btnDivi_Click(System::Object^  sender, System::EventArgs^  e) {

			  if (error)
			 {
				 lblDisplay->Text="0";
				 error=false;
			 }

			 dblPrimerNumero=Double::Parse(lblDisplay->Text);
			 lblDisplay->Text="0";
			 operador='/';
		 }
private: System::Void btnNumero3_Click(System::Object^  sender, System::EventArgs^  e) {

			  if (error)
			 {
				 lblDisplay->Text="0";
				 error=false;
			 }

			 	 if (lblDisplay->Text=="0")
				 {
					 lblDisplay->Text="3";
				 }
				 else
				 {
					 lblDisplay->Text=lblDisplay->Text +"3";
				 }
		 }
private: System::Void btnNumero4_Click(System::Object^  sender, System::EventArgs^  e) {

			  if (error)
			 {
				 lblDisplay->Text="0";
				 error=false;
			 }

			 	 if (lblDisplay->Text=="0")
				 {
					 lblDisplay->Text="4";
				 }
				 else
				 {
					 lblDisplay->Text=lblDisplay->Text +"4";
				 }
		 }
private: System::Void btnNumero5_Click(System::Object^  sender, System::EventArgs^  e) {

			  if (error)
			 {
				 lblDisplay->Text="0";
				 error=false;
			 }

			 	 if (lblDisplay->Text=="0")   
				 {
					 lblDisplay->Text="5";
				 }
				 else
				 {
					 lblDisplay->Text=lblDisplay->Text +"5";  //Permite concatenar en la cadena de numeros los numeros.
				 }
		 }
private: System::Void btnNumero6_Click(System::Object^  sender, System::EventArgs^  e) {

			 if (error)
			 {
				 lblDisplay->Text="0";
				 error=false;
			 }

			 	 if (lblDisplay->Text=="0")
				 {
					 lblDisplay->Text="6";
				 }
				 else
				 {
					 lblDisplay->Text=lblDisplay->Text +"6";
				 }
		 }
private: System::Void btnNumero7_Click(System::Object^  sender, System::EventArgs^  e) {

			  if (error)
			 {
				 lblDisplay->Text="0";
				 error=false;
			 }

			 	 if (lblDisplay->Text=="0")
				 {
					 lblDisplay->Text="7";
				 }
				 else
				 {
					 lblDisplay->Text=lblDisplay->Text +"7";
				 }
		 }
private: System::Void btnNumero8_Click(System::Object^  sender, System::EventArgs^  e) {

			  if (error)
			 {
				 lblDisplay->Text="0";
				 error=false;
			 }

			 	 if (lblDisplay->Text=="0")
				 {
					 lblDisplay->Text="8";
				 }
				 else
				 {
					 lblDisplay->Text=lblDisplay->Text +"8";
				 }
		 }
private: System::Void btnNumero9_Click(System::Object^  sender, System::EventArgs^  e) {

			  if (error)
			 {
				 lblDisplay->Text="0";
				 error=false;
			 }

			 	 if (lblDisplay->Text=="0")
				 {
					 lblDisplay->Text="9";
				 }
				 else
				 {
					 lblDisplay->Text=lblDisplay->Text +"9";
				 }
		 }
private: System::Void btnNumeroZ_Click(System::Object^  sender, System::EventArgs^  e) {

			  if (error)
			 {
				 lblDisplay->Text="0";
				 error=false;
			 }

			 	 if (lblDisplay->Text=="0")
				 {
					 lblDisplay->Text="0";
				 }
				 else
				 {
					 lblDisplay->Text=lblDisplay->Text +"0";
				 }
		 }
private: System::Void btnDeshacer_Click(System::Object^  sender, System::EventArgs^  e) {

			 lblDisplay->Text="0";
		 }

private: System::Void btnRaiz_Click(System::Object^  sender, System::EventArgs^  e) {

			  if (error)
			 {
				 lblDisplay->Text="0";
				 error=false;
			 }

			  dblPrimerNumero=Double::Parse(lblDisplay->Text);
			  if (dblPrimerNumero>=0)
			  {
			  dblResultado=procRaiz(dblPrimerNumero,dblPrimerNumero);
			  lblDisplay->Text=Convert::ToString(dblResultado);
			  }else
			  {
				  lblDisplay->Text="Math Error"; // Cuando se trata de sacar la raiz a numeros negativos
				  error=true;
			  }
	
		 }

private: System::Void btnSigno_Click(System::Object^  sender, System::EventArgs^  e) {

			  if (error)
			 {
				 lblDisplay->Text="0";   //Limpia el display 
				 error=false;
			 }

			  //Permite agregarle el signo negativo a un numero o quitarlo.

			 if (lblDisplay->Text!="0")
			 {
				 dblPrimerNumero=Double::Parse(lblDisplay->Text);
				 if (dblPrimerNumero>0)
					 lblDisplay->Text="-"+ Convert::ToString(lblDisplay->Text);
				 else
				 {
					 lblDisplay->Text= Convert::ToString((-1)*(Double::Parse(lblDisplay->Text)));
				 }
			 }
		
		 }
};
}
