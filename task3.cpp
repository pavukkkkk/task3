// task3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
int main()
{
   int a;
   cin >> a;
   cout << a;
   (a > 0) ? cout << ">0" : (a<0)? cout<<"<0" : cout<<"==0";
  
}
