#pragma once
//#include "ReportList.h"

namespace TaskManagement {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Diagnostics;

	/// <summary>
	/// MyForm の概要
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	//private: ReportList^ report;		//詳細リストデータ
	public:
		MyForm(void)
		{
			InitializeComponent();
			//this->report = gcnew ReportList();
			//
			//TODO: ここにコンストラクター コードを追加します
			//
		}

	protected:
		/// <summary>
		/// 使用中のリソースをすべてクリーンアップします。
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	protected:
	private: System::Windows::Forms::DateTimePicker^  dateTimePicker1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::ComboBox^  comboBox2;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::ListBox^  listBox1;
	private: System::Windows::Forms::ToolStripMenuItem^  ファイルToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  開くOToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  上書き保存SToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  名前を付けて保存AToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  閉じるCToolStripMenuItem;

	private:
		/// <summary>
		/// 必要なデザイナー変数です。
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// デザイナー サポートに必要なメソッドです。このメソッドの内容を
		/// コード エディターで変更しないでください。
		/// </summary>
		void InitializeComponent(void)
		{
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->ファイルToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->開くOToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->上書き保存SToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->名前を付けて保存AToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->閉じるCToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->ファイルToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(621, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// ファイルToolStripMenuItem
			// 
			this->ファイルToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->開くOToolStripMenuItem,
					this->上書き保存SToolStripMenuItem, this->名前を付けて保存AToolStripMenuItem, this->閉じるCToolStripMenuItem
			});
			this->ファイルToolStripMenuItem->Name = L"ファイルToolStripMenuItem";
			this->ファイルToolStripMenuItem->Size = System::Drawing::Size(70, 20);
			this->ファイルToolStripMenuItem->Text = L"ファイル(&F)";
			// 
			// 開くOToolStripMenuItem
			// 
			this->開くOToolStripMenuItem->Name = L"開くOToolStripMenuItem";
			this->開くOToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->開くOToolStripMenuItem->Text = L"開く(&O)";
			// 
			// 上書き保存SToolStripMenuItem
			// 
			this->上書き保存SToolStripMenuItem->Name = L"上書き保存SToolStripMenuItem";
			this->上書き保存SToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->上書き保存SToolStripMenuItem->Text = L"上書き保存(&S)";
			// 
			// 名前を付けて保存AToolStripMenuItem
			// 
			this->名前を付けて保存AToolStripMenuItem->Name = L"名前を付けて保存AToolStripMenuItem";
			this->名前を付けて保存AToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->名前を付けて保存AToolStripMenuItem->Text = L"名前を付けて保存(&A)";
			// 
			// 閉じるCToolStripMenuItem
			// 
			this->閉じるCToolStripMenuItem->Name = L"閉じるCToolStripMenuItem";
			this->閉じるCToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->閉じるCToolStripMenuItem->Text = L"閉じる(&C)";
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Location = System::Drawing::Point(12, 59);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(200, 19);
			this->dateTimePicker1->TabIndex = 1;
			this->dateTimePicker1->ValueChanged += gcnew System::EventHandler(this, &MyForm::dateTimePicker1_ValueChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(15, 109);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(46, 12);
			this->label1->TabIndex = 2;
			this->label1->Text = L"タイトル：";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(15, 134);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(35, 12);
			this->label2->TabIndex = 3;
			this->label2->Text = L"種類：";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(15, 160);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(35, 12);
			this->label3->TabIndex = 4;
			this->label3->Text = L"分類：";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(57, 106);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(155, 19);
			this->textBox1->TabIndex = 5;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"予定", L"タスク" });
			this->comboBox1->Location = System::Drawing::Point(57, 131);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(155, 20);
			this->comboBox1->TabIndex = 6;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(57, 183);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(155, 19);
			this->textBox2->TabIndex = 7;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(39, 247);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 8;
			this->button1->Text = L"追加";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(137, 247);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 9;
			this->button2->Text = L"削除";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"クラス", L"部活", L"習い事", L"その他" });
			this->comboBox2->Location = System::Drawing::Point(57, 157);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(155, 20);
			this->comboBox2->TabIndex = 10;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(15, 186);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(28, 12);
			this->label4->TabIndex = 11;
			this->label4->Text = L"メモ：";
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 12;
			this->listBox1->Location = System::Drawing::Point(249, 42);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(360, 268);
			this->listBox1->TabIndex = 12;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(621, 324);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		//選択している項目を取得
		int index = listBox1->SelectedIndex;
		//項目が選択されていない場合
		if (index == -1) {
			return;
		}
		//確認メッセージを表示
		if (MessageBox::Show("本当に削除しますか？", "TaskManagement", MessageBoxButtons::OKCancel) !=
			System::Windows::Forms::DialogResult::OK) {
			return;
		}
		//項目を削除
		listBox1->Items->RemoveAt(index);
	}
private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	//System::Diagnostics::Debug::WriteLine("追加ボタンをクリックしました");
	Debug::WriteLine("追加ボタンをクリックしました");
	//タイトル，種類，分類，メモを取得する
	String^ title = textBox1->Text;		//タイトル
	String^ kind = comboBox1->Text;		//種類
	String^ group = comboBox2->Text;	//分類
	String^ memo = textBox2->Text;		//メモ
	//日付を取得する
	String^ date = dateTimePicker1->Text;
	//teTime date = dateTimePicker1->Value;
	//フォーマット
	String^ out = String::Format("{0} {1} {2} {3}", title, kind, group, memo);
	out = date + " " + out;
	//リストに追加する
	listBox1->Items->Add(out);
}
private: System::Void dateTimePicker1_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
	listBox1->Items->Clear();
}
/* private: void UpdateListMoney(void) {
			 //リストボックスをクリア
			 listBox1->Items->Clear();
			 //すべてを表示
			 for each (ReportItem^ item in this->report->items) {
				 listBox1->Items->Add(item);
			 }
		 }*/
};
}
