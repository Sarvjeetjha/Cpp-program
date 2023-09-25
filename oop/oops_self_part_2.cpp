#include<iostream>
using namespace std;

//******************************encapsualion*******************************************************************************
// class Student{
//     private:
//         string name;
//         int age;
//         int height;
//     public:
//         int getage(){
//             return this->age;
//         }

// };
// int main(){
//     Student s1;
//     cout<<"sab sahi chl rha h"<<endl;
    
//      return 0;
// }
//****************************************inheritence **********************************************************

// class Human{
//     public:
//     int height;
//     int weight;
//     int age;

//     public:
//     int getAge(){
//         return age;

//     }
//     int setWeight(int weight){
//         this->weight=weight;
//     }

// };
// class Male:public Human{
//     public:
//     string color;
//     void sleep(){
//         cout<<"male sleeping "<<endl;
//     }

// };
// int main(){
//     Male obj1;
//     cout<<"AGE-->>"<<obj1.age<<endl;
//     cout<<"COLOR-->>"<<obj1.color<<endl;
//     cout<<"HEIGHT-->>"<<obj1.height<<endl;
//     cout<<"WEIGHT-->>"<<obj1.weight<<endl;
// }

//**************************diffrent mode of accessing class*********************************
//  class Human{
//     public:
//     int height;
//     int weight;
//     public:
//     int age;

//     public:
//     int getAge(){
//         return age;

//     }
//     int setWeight(int weight){
//         this->weight=weight;
//     }

// };
// class Male:protected Human{
//     public:
//     string color;
//     void sleep(){
//         cout<<"male sleeping "<<endl;
//     }
//     int getAge(){
//         cout<< age<<endl;
//     }

// };
// int main(){
//     Male obj1;
//     obj1.getAge();
// }
//**********************types of inheritence****************************************
//general inheritence for exmaple
// class Vehicle{
//     public :
//     string color;
//     int max_color;
// };
// class Car: public Vehicle{
//     int num_gear;

// };
// class Cycle:public Vehicle{
//     bool is_foldeble;

// };
// int main(){

// };
// //*****************************single inheritence***************
// class Animal{
//     public:
//     int age;
//     int weight;

//     public:
//     void speak(){
//         cout<<"Speaking"<<endl;
//     }

// };
// class Dog:public Animal{

// };
// int main(){
//     Dog d;
//     d.speak();
// }
//*****************************multiple inheritence***************
// class Animal{
//     public:
//     int age;
//     int weight;

//     public:
//     void speak(){
//         cout<<"Speaking"<<endl;
//     }

// };
// class Dog{

// };
// class Hybride: public Dog,public Animal{

// };
// int main(){
//     Hybride d;
//     d.speak();
// }
//***********************multiple inheritence***********************
// class Animal{
//     public:
//     int age;
//     int weight;

//     public:
//     void speak(){
//         cout<<"Speaking"<<endl;
//     }

// };
// class Dog:public Animal{

// };
// class Hybride: public Dog{

// };
// int main(){
//     Hybride d;
//     d.speak();
// }
//******************************hirerchal***********************************
// class Animal{
//     public:
//     int age;
//     int weight;

//     public:
//     void speak(){
//         cout<<"Speaking"<<endl;
//     }

// };
// class Dog:public Animal{

// };
// class Cat:public Animal{

// };
// int main(){
//     Cat d;
//     Dog s;
//     d.speak();
//     s.speak();
// }
//****************************hybride inheritence********************
//when more than one type of  inheritence is used



//*************************************inheritence ambuguity*****************************
// class Cat{
//     public:
//     int age;
//     // int weight;

//     public:
//     void func(){
//         cout<<"Speaking"<<endl;
//     }

// };
// class Dog{
//     public:
//         void func(){
//         cout<<"Speaking"<<endl;
//     }

// };
// class Animal:public Cat,public Dog{

// };
// int main(){
//     Animal a;
//     // a.func();//it will show ambiguity

//     a.Dog::func();//it can be resolved using scope resolution operator
// }
//***********************POLYMORPHISM*********************************
