#pragma once

namespace Calculadora {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	

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
			// 
			// btnResultado
			// 
			this->btnResultado->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnResultado->Location = System::Drawing::Point(258, 261);
			this->btnResultado->Name = L"btnResultado";
			this->btnResultado->Size = System::Drawing::Size(76, 57);
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
			// 
			// frmCalculadora
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(362, 335);
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
			this->ResumeLayout(false);

		}
#pragma endregion

		int intResultado;

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

			 lblDisplay->Text=Convert::ToString(procSuma(1,2));
		 }
};
}
