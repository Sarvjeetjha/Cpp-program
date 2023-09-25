#include <iostream>
using namespace std;
#include <string.h>
// Creatng  a car clas
// class Car
// {
// public:
//     string name;
//     int topSpeed;

//     void func(string carName, int speed)
//     {
//         name = carName;
//         topSpeed = speed;
//     }
// };
// int main()
// {
//     int a, b, c;
//     Car car1;
//     car1.name = "bmw";
//     car1.topSpeed = 200;
//     cout << "name of car initially -->> " << car1.name << endl;
//     cout << "speed of car before initialy  -->>" << car1.topSpeed << endl;
//     car1.func("sedan", 250);
//     cout << "name of car after change-->>" << car1.name << endl;
//     cout << "speed of car after change -->> " << car1.topSpeed << endl;

//     return 0;
// }

// class Box{
//     public:
//     double width;
//     double height;
//     double depth;

// };
// int main(){
//     Box obj1;
//     obj1.depth=5;
//     obj1.height=8;
//     obj1.width=7;
//     cout<<"volume of box is-->> "<<obj1.depth*obj1.height*obj1.width<<endl;
// }

// class Student
// {
//     int rollno;
//     int marks;
//     char grade;
//     char name[20];
//     public:
//     float getter()
//     {
//         return rollno;
//     }
//     void setter(int roll)
//     {
//         rollno=roll;
//         if (marks > 90)
//             grade = 'A';
//         else if (marks > 80)
//             grade = 'B';
//         else if (marks > 70)
//             grade = 'C';
//         else if (marks > 60)
//             grade = 'D';
//         else
//             grade = 'E';
//     }
// };
// int main(){
//     Student obj1;
//     cout<<"roll no is "<<obj1.getter()<<endl;
//     obj1.setter(20);
//     cout<<"roll no is  after setter"<<obj1.getter()<<endl;

// }
//***********************PADDING********************************
// # pragma pack(1)
// class student{

//     char a;
//     int b;
//     char s;

// };
// int main(){
//     student c;
//     student *s=new student;
//     cout<<"size of object is"<<sizeof(*s)<<endl;
//     cout<<"size of object is"<<sizeof(c)<<endl;
// }
//********************************default condstructr******************************

// class Car {
//     public:
//     int car_speed;

//     Car(){
//         car_speed=150;

//     }
// };
// int main(){
//     Car c1;
//     cout<<"speed of car is -->> "<<c1.car_speed<<endl;
// }

//*********************************parameterized constructer**********************
// class Car
// {
// public:
//     int car_speed;

//     Car(int speed)
//     {
//         car_speed = speed;
//     }
// };
// int main()
// {
//     Car c1(100);
//     cout << "speed of car is -->> " << c1.car_speed << endl;
// }
//************************copy constructer********************************
// class Car
// {
// public:
//     int car_speed;
//     string car_name;

//     Car(int speed,string name)
//     {
//         car_speed = speed;
//         car_name=name;
//     }
//     Car (const Car & c2){
//         car_speed=c2.car_speed;
//         car_name=c2.car_name;
//     }
// };
// int main()
// {
//     Car c1(100,"bmw");
//     Car c2=c1;
//     cout << "speed of car is -->> " << c1.car_speed <<"name of car is -->> " << c1.car_name<< endl;
//     cout << "speed of car is -->> " << c2.car_speed <<"name of car is -->> " << c2.car_name<< endl;

// }

// by defaulot copy construcrter is created  when class is created ,when we create own
// copy constructer by then the default is destroyed automatically

// class Car
// {
// public:
//     int car_speed;
//     string car_name;

//     Car(int speed,string name)
//     {
//         car_speed = speed;
//         car_name=name;
//     }
//      Car ( Car & c2){                                if it will not crteated then also work as by default copy constructer is called
//         car_speed=c2.car_speed;
//         car_name=c2.car_name;
// //     }
//     void print(){
//         cout<<"car spedd is : "<<car_speed<<endl;
//         cout<<"car name is : "<<car_name<<endl;
//     }
// };
// int main()
// {
//     Car c1(100,"bmw");
//     c1.print();
//     //copy constructer is called
//     Car c2=c1;
//     // Car c2(c1);    it will also work same in case of absence of own copy constructer as copy constructer is created automatically
//     c2.print();
//     //Car c2=c1;  it will work same as previous line
//     // cout << "speed of car is -->> " << c1.car_speed <<"name of car is -->> " << c1.car_name<< endl;
//     // cout << "speed of car is -->> " << c2.car_speed <<"name of car is -->> " << c2.car_name<< endl;

// }
//*****************************Shallow copy and deep copy****************************************************************
//********************SHALLOW COPY*********************************
// class Car
// {
// private:
//     int *speed;
//     int price;

// public:
//     char *color;
//     Car()
//     {
//         cout << "default constructer called" << endl;
//         color = new char[100];
//         speed = new int;
//     }

//     void print()
//     {
//         cout << "[ speed: " << *speed << " , color: " << color << " , price m: " << price << " ]" << endl;
//     }
//     void setcolor(char a[])
//     {
//         strcpy(this->color, a);
//     }
//     void setspeed(int s)
//     {
//         *speed = s;
//     }
//     void setprice(int p)
//     {
//         price = p;
//     }
// };
// int main()
// {
//     Car c1;
//     char c[] = "bmw";
//     c1.setcolor(c);
//     c1.setspeed(20);
//     c1.setprice(50000);
//     c1.print();
//     // default copy constructer called
//     Car c2 = c1;
//     c2.print();

//     c1.color[0] = 'B';
//     c1.setspeed(100);
//     c1.setprice(20000);

//     c1.print();
//     c2.print();
// }
//*****************************************DEEP COPY*******************************
// class Car
// {
// private:
//     // int *speed;

// public:
//     char *color;
//       int price;

//     Car()
//     {
//         cout << "default constructer called" << endl;
//         color = new char[100];
//         // speed = new int;
//     }
//     //COPY CONSTRUCTER
//     Car (Car & c2){
//         cout<<"copy constructer called"<<endl;
//         char *ch =new  char[strlen(c2.color)+1];
//         strcpy(ch,c2.color);
//         this->color=ch;
//         this->price=c2.price;
//     }

//     void print()
//     {
//         cout << "[ name: " << color << " , price m: " << price << " ]\n\n" << endl;
//     }
//     void setcolor(char a[])
//     {
//         strcpy(this->color, a);
//     }
//     // void setspeed(int s)
//     // {
//     //     *speed = s;
//     // }
//     void setprice(int p)
//     {
//         this->price = p;
//     }
// };
// int main()
// {
//     Car c1;
//     char c[] = "bmw";
//     c1.setcolor(c);
//     // c1.setspeed(20);
//     c1.setprice(50000);
//     c1.print();
//     // default copy constructer called
//     Car c2 = c1;
//     c2.print();
//     cout<<"*******************************\n";
//     c1.color[0] = 'B';
//     // c1.setspeed(100);
//     c1.setprice(20000);

//     c1.print();
//     c2.print();
// }
//***********************************COPY ASSIGNMENT OPERATOR**********************************
// class Car{
//     public:
//     int a;
//     int b;
//     Car(int a,int b){
//         this->a=a;
//         this->b=b;
//     }
//     void print(){
//         cout<<"a: "<<a<<" b: "<<b<<endl;
//     }

// };
// int main(){
//     Car c1(2,3);
//     Car c2(7,8);
//     c1.print();
//     c2.print();
//     c2=c1;//copy assignment operator
//     c1.print();
//     c2.print();
//     c1.a=10;

// };
//**********************************DISTRUCTOR******************************************
// class Car
// {

// public:
  
    
//     Car()
//     {
//         cout << "default constructer called" << endl;
      
//     }

//     ~Car(){
//         cout<<"distructer called"<<endl;
//     }
    
   
// };
// int main()
// {
//     //static object creation
//     Car c1;
//     //dynamic object creation
//     Car * c2=new Car;
//     delete c2;
// }
//**************************stattic vs dinemic memory allocation**********************************************************

// class Box
// {
// public:
//     double width;
//     double height;
//     double depth;
//     double getheight()
//     {
//         return height;
//     }
//     void setdepth(double height)
//     {
//         this->height = height;
//     }
// };
// int main()
// {
//     // static allocation
//     Box obj1;
//     cout << "height-->>" << obj1.height << endl;
//     cout << "depth-->>" << obj1.depth << endl;
//     cout << "width-->>" << obj1.width << endl;
//     cout << "height-->>" << obj1.getheight() << endl;
//     // dynamic allocation
//     Box *obj2 = new Box;
//     cout << "height-->>" << (*obj2).height << endl;
//     cout << "width-->>" << (*obj2).width << endl;
//     cout << "depth-->>" << (*obj2).depth << endl;
//     cout << "height-->>" << (*obj2).getheight() << endl;

//     obj1.depth = 5;
//     obj1.height = 8;
//     obj1.width = 7;

//     (*obj2).depth = 5;
//     (*obj2).height = 8;
//     (*obj2).width = 7;
//     cout << "*******************printing using sttaic memory allocation********************************" << endl;
//     cout << "height-->>" << obj1.height << endl;
//     cout << "depth-->>" << obj1.depth << endl;
//     cout << "width-->>" << obj1.width << endl;
//     cout << "height-->>" << obj1.getheight() << endl;
//     cout << "*****************printing using dynamic memory allocation**********************************" << endl;
//     cout << "height-->>" << (*obj2).height << endl;      // obj2->height   we can wite dinamic allocation like this also
//     cout << "width-->>" << (*obj2).width << endl;        // obj2->width
//     cout << "depth-->>" << (*obj2).depth << endl;        // obj2->depth
//     cout << "height-->>" << (*obj2).getheight() << endl; // obj2->gethealth

//     cout << "volume of box is-->> " << obj1.depth * obj1.height * obj1.width << endl;
// }

//**********************************this keyword****************************************************************
// #include<iostream>
// using namespace std;

// class Car{
//     public:
//     int price;
//     Car (int price){
//         this->price =price;
//         cout<<"constructer called"<<endl;
//         cout<<"adress of object-->>>"<<this<<endl;

//     }
// };
// int main(){
//     cout<<"static allocaton"<<endl;
//     Car c1(10);
//     cout<<"adress of object-->>>"<<&c1<<endl;

//     cout<<"dynamic allocaton"<<endl;
//     Car *c2=new Car(10);
//     cout<<"adress of object-->>>"<<c2<<endl;

// *************************STATIC KEYWORD***********************************************************************
// class Car{
//     public:
//     int a;
//     int b;
//     static int timeToComplete;

// };
// int Car::timeToComplete=5;
// int main(){
//     cout<<Car::timeToComplete<<endl;
// }
//*************************STATIC FUNCTION***********************************************************************
// class Car{
//     public:
//     int a;
//     int b;
//     static int timeToComplete;

//     void print(){
//         cout<<"method called"<<endl;  //no any other data member can be accessed  except static data member
//     }

//     //static method
//     static int random(){
//         return timeToComplete;
//     }



// };
// int Car :: timeToComplete=5;
// int main(){
//     cout<<Car::random()<<endl;   // static function called
// }