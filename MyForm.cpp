#include "MyForm.h"

using namespace TaskManagement;

[STAThreadAttribute]
int main(){
	MyForm ^fm = gcnew MyForm();
	fm->ShowDialog();
	return 0;
}
