// #include <iostream>
// using namespace std;
// class fruit
// {
// public:
//     string name;
//     string color;
// };
// class student
// {
// };
// int main()
// {
//     fruit apple; // object
//     apple.name = "Apple";
//     apple.color = "Red";
//     cout << apple.name << "    " << apple.color << endl;

//     fruit *mango = new fruit;
//     (*mango).name="Mango"; //mango-->name="Mango";
//     (*mango).color="yellow";//mango-->color="yellow";
//     cout << (*mango).name << "    " << (*mango).color << endl;

//     return 0;
// }

///************************constructer********************************
// distruxcter function wll called automatecally when object is created
// #include <iostream>
// using namespace std;

// class rectangle
// {
// public:
//     int l;
//     int b;

//     rectangle()
//     { // default constructure no arguments are passed
//         l = 0;
//         b = 0;
//     }
//     rectangle(int x, int y)
//     { // parametrized constructure  arguments are passed
//         l = x;
//         b = y;
//     }

//     rectangle(rectangle &r)
//     { // copy  constructure -->initiate an object by another existing object
//         l = r.l;
//         b = r.b;
//     }
// };
// int main()
// {
//     rectangle r1;
//     cout << r1.l << "  " << r1.b << endl;

//     rectangle r2(3, 5);
//     cout << r2.l << "  " << r2.b << endl;

//     rectangle r3 = r2;
//     cout << r3.l << "  " << r3.b << endl;

//     return 0;
// }

//*************************ditructer**************************************
// it is a function that is called when object is deeleted
// we cannot pass any parametre in any function

// name of distructer=-->   ~(class_name)

// #include <iostream>
// using namespace std;

// class rectangle
// {
// public:
//     int l;
//     int b;

//     rectangle()
//     { // default constructure no arguments are passed
//         l = 0;
//         b = 0;
//     }
//     rectangle(int x, int y)
//     { // parametrized constructure  arguments are passed
//         l = x;
//         b = y;
//     }

//     rectangle(rectangle &r)
//     { // copy  constructure -->initiate an object by another existing object
//         l = r.l;
//         b = r.b;
//     }

//     ~rectangle()
//     { // Distructer is called
//         cout << "distructer is called" << endl;
//     }
// };
// int main()
// {
//     rectangle *r1 = new rectangle();
//     cout << r1->l << "  " << r1->b << endl;

//     delete r1;

//     rectangle r2(3, 5);
//     cout << r2.l << "  " << r2.b << endl;

//     rectangle r3 = r2;
//     cout << r3.l << "  " << r3.b << endl;

//     return 0;
// }

// enapsulation :-- binding of maethod & variable together into aq single unit caled class
// data is only accessible from the class method only
// also leads to data abstraction and (hiding)

// #include <iostream>
// using namespace std;
// class ABC
// {
//     int x;

// public:
//     void set(int n)
//     {
//         x = n;
//     }

//     int get()
//     {
//        return x;
//     }
// };
// int main()
// {
//    ABC obj1;
//    obj1.set(5);
//    cout<<obj1.get()<<endl;

//     return 0;
// }



//**********************ABSTRACTION***********************
//enable us to display inly essential infrmation while hinding implementation details


//************************inheritence****************
//using inheitence a clkass inherit propertie sof another calss

//A(parent class,super class)---->B(child classs,sub  class)


//access specifier & bmodes of inheritence
//*PUBLic-->>data and function can be accessable anywhre in the code
//*private-->>data and function can only be accessed inside same class ,parent class and chile class
//*protected


// #include<iostream>
// using namespace std;
//  class parent{

//     public:
    
//      int x;

//      protected :
//      int y;

//      private:
//      int z;

//  };

//  class child1 : public parent {
//     //x remain public
//     //y remain protected
//     //z canont be accessed
//  };
//  class child2 : private parent {
//     //x remain private
//     //y remain protected
//     //z canont be accessed
//  };

//  class child2 : protected parent {
//     //x remain protected
//     //y remain protected
//     //z canont be accessed
//  };
// int main(){
// int a,b,c;
    
//      return 0;
// }



//*******************single inheritance******************

// #include<iostream>
// using namespace std;
// class Parent{
// public:
//     Parent(){
//         cout<<"parent class"<<endl;
//     }
// };

// class child:public Parent{
// public:
//     child(){
//         cout<<"child class"<<endl;
//     }
// };




// int main(){
//     child c;

    
//      return 0;
// }

// *******************multi level inheritence****************************


// #include<iostream>
// using namespace std;
// class Parent{
// public:
//     Parent(){
//         cout<<"parent class"<<endl;
//     }
// };

// class child:public Parent{
// public:
//     child(){
//         cout<<"child class"<<endl;
//     }
// };


// class GrandChild:public child{
// public:
//     GrandChild(){
//         cout<<"grandchild class"<<endl;
//     }
// };



// int main(){
//     GrandChild G;
    
    
//      return 0;
// }


//*******************multiple inheritence*-*******************



// #include<iostream>
// using namespace std;
// class Parent1{
// public:
//     Parent1(){
//         cout<<"parent1 class"<<endl;
//     }
// };

// class Parent2{
// public:
//     Parent2(){
//         cout<<"parenrt 2  class"<<endl;
//     }
// };


// class child:public Parent1,public Parent2{
// public:
//     child(){
//         cout<<"child class"<<endl;
//     }
// };



// int main(){
//     child c;
    
    
//      return 0;
// }

//*********************************hirerchical inheritence***************************
  //from one parent class to multiple chil class
//   #include<iostream>
// using namespace std;
// class Parent{
// public:
//     Parent(){
//         cout<<"parent class"<<endl;
//     }
// };

// class child1:public Parent{
// public:
//     child1(){
//         cout<<"child class 1  class"<<endl;
//     }
// };


// class child2:public Parent{
// public:
//     child2(){
//         cout<<"child class 2"<<endl;
//     }
// };



// int main(){
//     child1 c;
//     child2 d;
    
    
//      return 0;
// }



//*******************hybrid*******************
//its simply combination of more than 1 1inheeritance types

//************************Diamond problem****************************


/*
                            F < < <  \ 
                           /       \    
                          /         \
                          D         E
                          |         |
                          |         |
                          B        C
                          \       /
                            \    /
                               A

*/


//Base class have multiple parent class having q common ancessitor class

//   #include<iostream>
// using namespace std;
// class Parent{
// public:
//     Parent(){
//         cout<<"parent class"<<endl;
//     }
// };

// class child1:public Parent{
// public:
//     child1(){
//         cout<<"child class 1  class"<<endl;
//     }
// };


// class child2:public Parent{
// public:
//     child2(){
//         cout<<"child class 2"<<endl;
//     }
// };

// class Grandchild:public child1,public child2{
// public:
//     Grandchild(){
//         cout<<"grand child  class "<<endl;
//     }
// };



// int main(){
//     Grandchild g;
    
//      return 0;
// } 


//******************polymorphism*********************

//ability of an objectt /methods to take differnt forms
//two types -->>complie time polymorphism 

//function overloding -->> same function name but they perform differntly according to the argument passeed

//*********************function overloading*************************
// #include<iostream>
// using namespace std;
// class Sum{
//     public :
//         void add(int x,int y){
//             int sum=x+y;
//             cout<<sum<<endl;
//         }
//         void add(int x,int y,int z){
//             int sum=x+y+z;
//             cout<<sum<<endl;
//         }

//         void add(float x,float y){
//             float sum=x+y;
//             cout<<sum<<endl;
//         }
// };
// int main(){
//     Sum s;
//     s.add(2,3);
//     s.add(2,3,5);
//     s.add(2.3F,3.5F);
    
//      return 0;
// }


//******************operator overloading******************
//samajh nhi aaya



//**********************************love babbar***********
 