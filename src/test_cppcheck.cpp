

#include <iostream>
#include <string>
using namespace std;

class Data22
{
public:
    //123
    Data22();//000
    //234
    Data22(int ye, int mon, int da);
    Data22(Data22 &da);//567

private:
    int year;
    int month;
    int day;
public:
	int age;
public:
	int inf();//<678
};


Data22::Data22()
{
    year = 1998;
    month = 8;
    day = 3;
}
Data22::Data22(int ye = 0, int mon = 0, int da = 0)
{
    year = ye;
    month = mon;
    day = da;
}
Data22::Data22(Data22 &da)
{
    cout << endl << "Warnning:This Copy constructors.!!!" << endl;
    year = da.year;
    month = da.month;
    day = da.day;
}
int Data22::inf()
{
	age = age + 2;
    year = year + 1;
    cout << "Birthday:" << year << "/" << month << "/" << day << age << endl;
    return 1;
}

/////////////////////////////////////////////
#include <iostream>
#include <string>
using namespace std;


/**
123
*/
class Data22
{
public:
    //123
    Data22();//000
    //234
    Data22(int ye, int mon, int da);
    Data22(Data22 &da);//567
    int inf();//<678
private:
    int year;
    int month;
    int day;
};

class Student22//define a class called "Student"
 {
public:
    //constructors
    Student22(int num, string na, int ma, int en, int cs, Data22 tp);
    Student22(Student22 &stu);//<Copy constructors
    /**
        ~Student
    */
    ~Student22();
    ///the sum grade
    int sum();
    int ave();// calculate the average grade

    /**
    show the details of the student
    */
    void show();
private:
    Data22 birthday;
    int number;
    string name;
    int math;
    int eng;
    int com;
public:

    int TestNull(Data22 *pData);

};

//the realization of class
Student22::Student22(int num, string na, int ma, int en, int cs, Data22 tp) :birthday(tp) {
    number = num;
    name = na;
    math = ma;
    eng = en;
    com = cs;
}
Student22::~Student22()
{
 
}
Student22::Student22(Student22 &stu) :birthday(stu.birthday) {
     cout << endl << "Warnning:This Copy constructors.!!!" << endl;
    number = stu.number;
    name = stu.name;
    math = stu.math;
    eng = stu.eng;
    com = stu.com;
}
int Student22::sum() {
    return math + eng + com;
}
int Student22::ave() {
    return (math + eng + com) / 3;
}
void Student22::show() {
     cout << "Number:" << number << endl;
     cout << "Name:" << name << endl;
    birthday.inf();
     cout << "Math score:" << math << endl;
     cout << "English score:" << eng << endl;
     cout << "Computer score:" << com << endl;
     cout << "Sum score:" << sum() << endl;
     cout << "Average score:" << ave() << endl;
}

int Student22::TestNull(Data22 *pData) {
    Data22 tmp(2012, 12, 02);
    Data22 *tmp2 = &tmp;
    int ret = tmp2->inf();
    cout << "1:" << endl;

    tmp2 = pData;
   // tmp2 = nullptr;//
    cout << "1-1:tmp2:" << tmp2 <<endl;
    if(tmp2 != nullptr)
    {
        cout << "2:" << endl;
        return 1;
    }
    cout << "3:tmp2:" << tmp2 <<endl;
    int ret2 = tmp2->inf();
    cout << "4:ret2:" << ret2 << endl;
    return 2;
}






///////////////////////////////////////////////////////////////////

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
 
void init_buffer(void)
{
    char filename[128] = {""}; // 这样初始为0，如果是{"1"}，则只有第1个字节为1，其它为0 --不知其它编译器会怎样
    
    printf("test of buffer\n");
 
    dump(filename, 128);
    
    char unused_buffer[7*1024*1024] = {0};   // 没有使用的缓冲区，超过栈最大值，有coredump。
    char unused_buffer1[1*1024*1024] = {0};
    
    strcpy(unused_buffer1, "hello");
}
 
// 数组范围越界
void out_of_array(void)
{
    int foo[2]; // 范围不够
    int aaa = 250;
    
    foo[0] = 1;
    foo[1] = 2;
    // 下面这些是不行的
    foo[2] = 3;
    foo[3] = 4;
    foo[4] = 5;
    foo[5] = 6;
    
    printf("%d %d \n", foo[0], foo[1]);
}
 
#include <sys/types.h>
#include <dirent.h>
// 打开未关闭
void open_not_close()
{
    // 内存泄漏
    char* p = new char[100];
    strcpy(p, "hello");
    printf("p:%s\n", p);
    
 
    FILE* fp = NULL;
    fp = fopen("aaa", "a");
    
    if (fp)
    {
        // 注：这里返回时没有关闭文件
        return;
    }
    
    fclose(fp);
    
 
    DIR *dir = NULL;
    dir = opendir("./");
    
}
 ///////////////////////////////////////////////////////////////////
int main(void)
{
    int ret = 0;
 
    foo();
 
    init_buffer();
    out_of_array();
    open_not_close()



    /////////////////////////
    Data22 tmp(2012, 12, 02);
    Student22 noob(001, "!#%$#^$%^", 90, 89, 88, tmp);//Initialization
                                                    //output
    noob.show();
    Student22 newbie(noob);   //Copy constructors
    newbie.show();

     int y[1];
     y[2] = 1;
     y[3] = 2;
     
    double d1=10;
    double ret_d=11;
    ret_d = d1/0;

    Data22 *pData;
    pData = &tmp;
    noob.TestNull(pData);
    cout << "5:next" << endl;

    pData = nullptr;
    noob.TestNull(pData);
    cout << "6:next" << endl;


    int aaa = pData->inf();
    



    return 0;
}
