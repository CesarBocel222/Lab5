#pragma once
#include "Pokedex.h"
#include "Selection_short.h"
namespace Lab5CesarBocel1094921 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar c�digo de constructor aqu�
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se est�n usando.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ btnSelection;
	private: System::Windows::Forms::Button^ btnQuick;
	private: System::Windows::Forms::Button^ btnShell;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ lblT1;
	private: System::Windows::Forms::Label^ lblT2;
	private: System::Windows::Forms::Label^ lblT3;
	private: System::Windows::Forms::Label^ lblDatos;
	private: System::Windows::Forms::Label^ lblOrden;
	protected:

	private:
		/// <summary>
		/// Variable del dise�ador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�todo necesario para admitir el Dise�ador. No se puede modificar
		/// el contenido de este m�todo con el editor de c�digo.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btnSelection = (gcnew System::Windows::Forms::Button());
			this->btnQuick = (gcnew System::Windows::Forms::Button());
			this->btnShell = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->lblT1 = (gcnew System::Windows::Forms::Label());
			this->lblT2 = (gcnew System::Windows::Forms::Label());
			this->lblT3 = (gcnew System::Windows::Forms::Label());
			this->lblDatos = (gcnew System::Windows::Forms::Label());
			this->lblOrden = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 20.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(13, 13);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(294, 31);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Metodos de Ordenamiento";
			// 
			// btnSelection
			// 
			this->btnSelection->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSelection->Location = System::Drawing::Point(19, 302);
			this->btnSelection->Name = L"btnSelection";
			this->btnSelection->Size = System::Drawing::Size(114, 63);
			this->btnSelection->TabIndex = 1;
			this->btnSelection->Text = L"Selection Short";
			this->btnSelection->UseVisualStyleBackColor = true;
			this->btnSelection->Click += gcnew System::EventHandler(this, &MyForm::btnSelection_Click);
			// 
			// btnQuick
			// 
			this->btnQuick->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnQuick->Location = System::Drawing::Point(169, 302);
			this->btnQuick->Name = L"btnQuick";
			this->btnQuick->Size = System::Drawing::Size(110, 63);
			this->btnQuick->TabIndex = 2;
			this->btnQuick->Text = L"Quick short";
			this->btnQuick->UseVisualStyleBackColor = true;
			// 
			// btnShell
			// 
			this->btnShell->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnShell->Location = System::Drawing::Point(303, 302);
			this->btnShell->Name = L"btnShell";
			this->btnShell->Size = System::Drawing::Size(103, 63);
			this->btnShell->TabIndex = 3;
			this->btnShell->Text = L"Sehll Short";
			this->btnShell->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(12, 59);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(143, 48);
			this->button1->TabIndex = 6;
			this->button1->Text = L"Subir archivo";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// lblT1
			// 
			this->lblT1->AutoSize = true;
			this->lblT1->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblT1->Location = System::Drawing::Point(28, 370);
			this->lblT1->Name = L"lblT1";
			this->lblT1->Size = System::Drawing::Size(60, 18);
			this->lblT1->TabIndex = 7;
			this->lblT1->Text = L"Tiempo";
			// 
			// lblT2
			// 
			this->lblT2->AutoSize = true;
			this->lblT2->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblT2->Location = System::Drawing::Point(181, 369);
			this->lblT2->Name = L"lblT2";
			this->lblT2->Size = System::Drawing::Size(60, 18);
			this->lblT2->TabIndex = 8;
			this->lblT2->Text = L"Tiempo";
			// 
			// lblT3
			// 
			this->lblT3->AutoSize = true;
			this->lblT3->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblT3->Location = System::Drawing::Point(315, 370);
			this->lblT3->Name = L"lblT3";
			this->lblT3->Size = System::Drawing::Size(60, 18);
			this->lblT3->TabIndex = 9;
			this->lblT3->Text = L"Tiempo";
			// 
			// lblDatos
			// 
			this->lblDatos->AutoSize = true;
			this->lblDatos->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblDatos->Location = System::Drawing::Point(31, 129);
			this->lblDatos->Name = L"lblDatos";
			this->lblDatos->Size = System::Drawing::Size(45, 20);
			this->lblDatos->TabIndex = 10;
			this->lblDatos->Text = L"label2";
			// 
			// lblOrden
			// 
			this->lblOrden->AutoSize = true;
			this->lblOrden->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblOrden->Location = System::Drawing::Point(271, 128);
			this->lblOrden->Name = L"lblOrden";
			this->lblOrden->Size = System::Drawing::Size(45, 20);
			this->lblOrden->TabIndex = 11;
			this->lblOrden->Text = L"label4";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(584, 392);
			this->Controls->Add(this->lblOrden);
			this->Controls->Add(this->lblDatos);
			this->Controls->Add(this->lblT3);
			this->Controls->Add(this->lblT2);
			this->Controls->Add(this->lblT1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->btnShell);
			this->Controls->Add(this->btnQuick);
			this->Controls->Add(this->btnSelection);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		
	}
private: System::Void btnSelection_Click(System::Object^ sender, System::EventArgs^ e) {
		array<Pokedex^>^ pokemones = gcnew array<Pokedex^>(10);
		pokemones[0] = gcnew Pokedex(155, "Cyndaquil", 1);
		pokemones[1] = gcnew Pokedex(4, "Charmander", 1);
		array<Selection_short^>^ lista = gcnew array<Selection_short^>(10);
		lista[0]->Selection(pokemones,2);
		
}
};
}
