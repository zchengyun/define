//宏定义
#include <iostream>

#define M 5                
#define PI 3.14    

//结尾加反斜线符号使得多行能连接上
#define HELLO "hello \
the world"

//未对齐，空格也会被作为替换文本的一部分
#define HELLO1 "hello the wo\
       rld"
//对齐
#define HELLO2 "hello the wo\
rld"

#define MM M * M       
#define MM1 M * M+M * M  
#define MM2 (M * M+M * M)          

#define COUNT1(M) M * M
#define COUNT2(M) (M) * (M)

#define PRINT std::cout << "count" << std::endl;

int main()
{

    std::cout << M<<std::endl;
    std::cout << PI << std::endl;
    std::cout << HELLO << std::endl;
    std::cout << HELLO1 << std::endl;//hello the wo       rld
    std::cout << HELLO2 << std::endl;//hello the world

    std::cout << MM << std::endl;
    std::cout << MM1 << std::endl;//50
    std::cout << MM2 << std::endl; //50

    std::cout << COUNT1(5) << std::endl;//计算的是5*5
    std::cout << COUNT1(4+1) << std::endl;//计算的是4+1*4+1
    std::cout << COUNT2(5) << std::endl;//计算的是5*5
    std::cout << COUNT2(4 + 1) << std::endl;//计算的是5*5

    PRINT
}
