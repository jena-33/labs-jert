#include <iostream>
using namespace std;

struct student
{
	int number;
	const char* name;
	bool math;
	bool english;
	bool physic;
};

int main()
{
	const int n = 25;
	int i;
	student a[n] = {
	{ 1, "Ширяев Эдуард Дмитрьевич"		,true, true, true},
	{ 2, "Ильин Эрнест Яковлевич    "		,true, true, true},
	{ 3, "Савина Станислава Максимовна"		,true, true, true},
	{ 4, "Смирнов Панкратий Давидович"		,false, true, false},
	{ 5, "Авдеев Степан Егорович"		,false, true, true},
	{ 6, "Сергеев Власий Пантелеймонович"		,true, false, true},
	{ 7, "Терентьев Родион Дмитрьевич"		,true, true, true},
	{ 8, "Белозёров Овидий Лаврентьевич	"		,true, true, true},
	{ 9, "Рябов Максим Филатович"		,true, true, true},
	{10, "Фомин Артем Геннадиевич"		,true, true, true},
	{11, "Наумов Даниил Яковович	"		,true, true, false},
	{12, "Анисимов Роман Оскарович	"		,true, false, false},
	{13, "Тихонов Кирилл Артемович"		,true, true, true},
	{14, "Иванков Станислав Евгеньевич"		,true, true, true},
	{15, "Авдеев Артем Тарасович	"		,false, true, true},
	{16, "Егорова Марьяна Пётровна"		,false, true, false},
	{17, "Лазарева Диана Лукьяновна"		,true, true, true},
	{18, "Кудряшова Алла Георгиевна"		,true, true, true},
	{19, "Владимирова Марьяна Дмитриевна"		,true, true, true},
	{20, "Мамонтов Захар Матвеевич"		,false, true, true},
	{21, "Крюков Давид Максимович	"		,false, false, true},
	{22, "Михеев Арсений Андреевич"		,true, false, false},
	{23, "Романов Николай Вадимович"		,true, true, true},
	{24, "Евсеев Ибрагил Эдуардович"		,false, true, true},
	{25, "Иванов Андрей Святославович"		,true, true, true}
	};
	setlocale(LC_ALL, "ru");
	cout << "№" << "\tИмя                         \tМат.\tАнгл.\tФиз.\n";
	for (i = 0; i < n; i++)
		cout << a[i].number << "\t" << a[i].name << "\t" << a[i].math << "\t" << a[i].english << "\t" << a[i].physic << "\n";
	cout << "-------------------------------------" << endl;
	cout << "Ученики которые не смогли выполнить больше чем один предмет:\n";
	cout << "№" << "\tИмя                         \tМат.\tАнгл.\tФиз.\n";
	for (i = 0; i < n; i++)
		if (!((int)a[i].math + (int)a[i].english + (int)a[i].physic > 1))
			cout << a[i].number << "\t" << a[i].name << "\t" << a[i].math << "\t" << a[i].physic << "\t" << a[i].english << "\n";
	cout << "-------------------------------------" << endl;
	return 0;
}

