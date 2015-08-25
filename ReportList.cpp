//#include "Stdafx.h"
#include "ReportList.h"
using namespace TaskManagement;

/*詳細データクラス*/
/*コンストラクタ*/
ReportItem::ReportItem() {
	//フィールドを初期化する
	this->date	= DateTime(0);
	this->title = "";
	this->kind	= "";
	this->group = "";
	this->memo	= "";
}
/*引数を持つコンストラクタ*/
ReportItem::ReportItem(DateTime date, String^ title, String^ kind, String^ group, String^ memo) {
	this->date = date;
	this->title = title;
	this->kind = kind;
	this->group = group;
	this->memo = memo;
}
/*表示用メソッド*/
String^ ReportItem::ToString() {
	return String::Format("{0} {1} {2} {3} {4}",
		date.ToShortDateString(), title, kind, group, memo);
}
/*詳細リストクラス*/
/*コンストラクタ*/


ReportList::ReportList(){
	//this->items = gcnew List<ReportItem^>;
}

/*リストのクリア*/
void ReportList::Clear() {
	//this->items->Clear();
}
/*リストに追加*/
void ReportList::Add(DateTime date, String^ title, String^ kind, String^ group, String^ memo) {
	//ReportItem^ item = gcnew ReportItem(date, title, kind, group, memo);
	//this->Add(item);
}
void ReportList::Add(ReportItem^ item) {
	//this->items->Add(item);
}
/*リストから削除*/
void ReportList::Remove(DateTime date, String^ title) {
	/*for each (ReportItem^ item in this->items) {
		if (item->Date == date && item->Title == title) {
			Remove(item);
			break;
		}
	}*/
}
void ReportList::Remove(ReportItem^ item) {
	//this->items->Remove(item);
}
/*年月で選択*/
List<ReportItem^>^ ReportList::Select(int year, int month) {
	/*List<ReportItem^>^ result = gcnew List<ReportItem^>;
	for each (ReportItem^ item in this->items) {
		if (item->Date.Year == year && item->Date.Month == month) {
			result->Add(item);
		}
	}*/
	//return result;
	return nullptr;
}
