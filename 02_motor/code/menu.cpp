#include"menu.h"
void show() {
	cout << "--------------------------------------------" << endl;
	cout << "\033[43m**********请选择你的操作数字：**********" << endl;
	cout << "-------------0.关闭电机-----------------" << endl;
	cout << "-------------1.打开电机-----------------" << endl;
	cout << "-------------2.修改当前速度-------------" << endl;
	cout << "-------------3.查看当前速度-------------" << endl;
	cout << "-------------4.修改电机转向-------------" << endl;
	cout << "-------------5.查看电机转向-------------" << endl;
	cout << "-------------6.退出操作系统-------------" << endl;
	cout << "你输入的是：\033[0m";
}