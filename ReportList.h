#pragma once

namespace TaskManagement {
	using namespace System;
	using namespace System::Collections::Generic;
	/*詳細データクラス*/
	ref class ReportItem {
	private:
		DateTime date;
		String^ title;
		String^ kind;
		String^ group;
		String^ memo;
	public:
		ReportItem();
		ReportItem(DateTime date, String^ title, String^ kind, String^ group, String^ memo);
	public:
		//表示用メソッド
		virtual String^ ToString() override;
		/*プロパティ設定*/
		property DateTime Date {
			DateTime get() { return this->date; }
			void set(DateTime value) { this->date = value; }
		}
		property String^ Title {
			String^ get() { return this->title; }
			void set(String^ value) { this->title = value; }
		}
		property String^ Kind {
			String^ get() { return this->kind; }
			void set(String^ value) { this->kind = value; }
		}
		property String^ Group {
			String^ get() { return this->group; }
			void set(String^ value) { this->group = value; }
		}
		property String^ Memo {
			String^ get() { return this->memo; }
			void set(String^ value) { this->memo = value; }
		}
	};
	/*詳細リストクラス*/
}
ref class ReportList{
private:
	List<ReportItem^>^ items;
public:
	ReportList();
public:
	//リストのクリア
	void Clear();
	//リストに追加
	void Add(DateTime date, String^ title, String^ kind, String^ group, String^ memo);
	void Add(ReportItem^ item);
	//リストから削除
	void Remove(DateTime date, String^ title);
	void Remove(ReportItem^ item);
	//年月で選択
	List<ReportItem^>^ Select(int year, int month);
	//全リストの取得
	property List<ReportItem^>^ Items {
		List<ReportItem^>^ get() { return this->items; }
	}
};

