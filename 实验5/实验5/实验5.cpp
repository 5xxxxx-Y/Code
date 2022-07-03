#include <iostream>
#include <iomanip>
#include"manage.h"
#include"people.h"
#include"GraduateStudent.h"
#include"PartTimePhD.h"
#include"PhDStudent.h"
#include"student.h"
#include"teacher.h"
#include"Undergraduate.h"
using namespace std;
class People;
class Teacher;
class Student;
class manage;


/*要求：
（1）人员类层次关系如下图，至少包含其中的人员属性
（2）人员管理：查询、增加、删除、修改人员以及信息，人员各类统计；
（3）重载输入输出运算符；
（4）使用文件保存数据（可选）；
（5）在main函数测试上述功能，界面尽量美观
*/


int main()
{
    int choice = 1;
    manage m;
	while (choice!=0)
	{
		m.showMenu();
		cout << "please cin the choice："; cin >> choice; cout << endl;
		switch (choice)
		{
		case 0:cout << "byebye"; break;
		case 1:m.Add(); break;
		case 2:m.Show(); break;
		case 3:m.Delete(); break;
		case 4:m.Modify(); break;
		case 5:m.Search(); break;
		default:
			break;
		}
	}
}
