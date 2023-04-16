#pragma once

namespace Laba3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button_load;
	protected:

	private: System::Windows::Forms::DataGridView^ dataGridView_Table;
	protected:




	private: System::Windows::Forms::Label^ label1;

	private: System::Windows::Forms::Button^ button_add;
	private: System::Windows::Forms::Button^ button_delete;


	private: System::Windows::Forms::Button^ button_update;
	private: System::Windows::Forms::ListBox^ listBox_ChooseTable;
	private: System::Windows::Forms::GroupBox^ groupBox;




	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button_load = (gcnew System::Windows::Forms::Button());
			this->dataGridView_Table = (gcnew System::Windows::Forms::DataGridView());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button_add = (gcnew System::Windows::Forms::Button());
			this->button_delete = (gcnew System::Windows::Forms::Button());
			this->button_update = (gcnew System::Windows::Forms::Button());
			this->listBox_ChooseTable = (gcnew System::Windows::Forms::ListBox());
			this->groupBox = (gcnew System::Windows::Forms::GroupBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView_Table))->BeginInit();
			this->groupBox->SuspendLayout();
			this->SuspendLayout();
			// 
			// button_load
			// 
			this->button_load->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_load->Location = System::Drawing::Point(8, 25);
			this->button_load->Name = L"button_load";
			this->button_load->Size = System::Drawing::Size(154, 37);
			this->button_load->TabIndex = 0;
			this->button_load->Text = L"Загрузить";
			this->button_load->UseVisualStyleBackColor = true;
			this->button_load->Click += gcnew System::EventHandler(this, &MyForm::button_load_Click);
			// 
			// dataGridView_Table
			// 
			this->dataGridView_Table->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView_Table->Location = System::Drawing::Point(12, 82);
			this->dataGridView_Table->Name = L"dataGridView_Table";
			this->dataGridView_Table->RowHeadersWidth = 51;
			this->dataGridView_Table->RowTemplate->Height = 24;
			this->dataGridView_Table->Size = System::Drawing::Size(556, 305);
			this->dataGridView_Table->TabIndex = 3;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(235, 26);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 17);
			this->label1->TabIndex = 7;
			// 
			// button_add
			// 
			this->button_add->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_add->Location = System::Drawing::Point(8, 68);
			this->button_add->Name = L"button_add";
			this->button_add->Size = System::Drawing::Size(154, 37);
			this->button_add->TabIndex = 9;
			this->button_add->Text = L"Добавить";
			this->button_add->UseVisualStyleBackColor = true;
			this->button_add->Click += gcnew System::EventHandler(this, &MyForm::button_add_Click);
			// 
			// button_delete
			// 
			this->button_delete->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_delete->Location = System::Drawing::Point(8, 154);
			this->button_delete->Name = L"button_delete";
			this->button_delete->Size = System::Drawing::Size(154, 37);
			this->button_delete->TabIndex = 11;
			this->button_delete->Text = L"Удалить";
			this->button_delete->UseVisualStyleBackColor = true;
			this->button_delete->Click += gcnew System::EventHandler(this, &MyForm::button_delete_Click);
			// 
			// button_update
			// 
			this->button_update->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_update->Location = System::Drawing::Point(8, 111);
			this->button_update->Name = L"button_update";
			this->button_update->Size = System::Drawing::Size(154, 37);
			this->button_update->TabIndex = 10;
			this->button_update->Text = L"Обновить";
			this->button_update->UseVisualStyleBackColor = true;
			this->button_update->Click += gcnew System::EventHandler(this, &MyForm::button_update_Click);
			// 
			// listBox_ChooseTable
			// 
			this->listBox_ChooseTable->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->listBox_ChooseTable->FormattingEnabled = true;
			this->listBox_ChooseTable->ItemHeight = 22;
			this->listBox_ChooseTable->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Client", L"Orders" });
			this->listBox_ChooseTable->Location = System::Drawing::Point(12, 13);
			this->listBox_ChooseTable->Name = L"listBox_ChooseTable";
			this->listBox_ChooseTable->Size = System::Drawing::Size(120, 70);
			this->listBox_ChooseTable->TabIndex = 12;
			this->listBox_ChooseTable->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::listBox_ChooseTable_SelectedIndexChanged);
			// 
			// groupBox
			// 
			this->groupBox->Controls->Add(this->button_add);
			this->groupBox->Controls->Add(this->button_load);
			this->groupBox->Controls->Add(this->button_delete);
			this->groupBox->Controls->Add(this->button_update);
			this->groupBox->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox->Location = System::Drawing::Point(574, 82);
			this->groupBox->Name = L"groupBox";
			this->groupBox->Size = System::Drawing::Size(168, 305);
			this->groupBox->TabIndex = 13;
			this->groupBox->TabStop = false;
			this->groupBox->Text = L"Действия";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(754, 399);
			this->Controls->Add(this->groupBox);
			this->Controls->Add(this->listBox_ChooseTable);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dataGridView_Table);
			this->MaximizeBox = false;
			this->MinimumSize = System::Drawing::Size(637, 296);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Tables";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView_Table))->EndInit();
			this->groupBox->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {};
	private: System::Void button_load_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button_add_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button_delete_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button_update_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void listBox_ChooseTable_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e);
};
}
