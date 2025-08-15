#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
// class animal{
//     private:
//     int weight;
//     public:
//     // state or properties
//     int age;
//     string name;
//     //  default constructor
//     animal(){
//         this->age=20;
//         this->name="rahul";
//         this->weight=60;
//         cout<<"constructor"<<endl;
//     }
//     // // parametrised constructor
//     // animal(int age){
//     //     this->age=age;
//     //     cout<<"paramaterised"<<endl;
//     // }
//     // animal(int age,int weight){
//     //     this->age=age;
//     //     this->weight=weight;
//     //     cout<<"paramaterised 2"<<endl;
//     // }
//     // // copy constructor
//     animal(animal &obj){
//         this->age=obj.age;
//         this->weight=obj.weight;
//         this->name=obj.name;
//         cout<<"copy constructor"<<endl;
//     }

// //     // behaviour
//     void eat(){
//         cout<<"eating"<<endl;
//     }
//     void sleep(){
//         cout<<"sleeping"<<endl;
//     }
//     // creating get and setter
//     int getweight(){
//         return weight;
//     }
//     void setweight(int weight){
//         this->weight=weight; //this weight points line no 6 weight
//     }
//     void print(){
//         cout<<this->age<<endl;
//         cout<<this->weight<<endl;
//         cout<<this->name<<endl;
//     }
//     ~animal(){
//         cout<<"destructor"<<endl;
//     }
// };

// // perfect encapsulation
// class animal{
//     private:
//     int age;
//     int weight;
//     public:
//     void eat(){
//         cout<<"eating"<<endl;
//     }
//     int getage(){
//         return this->age;
//     }
//     void setage(int age){
//         this->age=age;
//     }
// };

// // inheritance
// class animal{
//     public:
//     int age;         //base class public
//     int weight;
//     void eat(){
//         cout<<"eating"<<endl;
//     }
//     int getage(){
//         return this->age;
//     }
//     void setage(int age){
//         this->age=age;
//     }
// };
// // class dog:public animal{};
// class dog:private animal{
//     public:
//     void print(){
//         cout<<this->age<<endl;
//     }
// };

// class animal{
//     protected:
//     int age;  //base class protected
//     int weight;
//     void eat(){
//         cout<<"eating"<<endl;
//     }
//     int getage(){
//         return this->age;
//     }
//     void setage(int age){
//         this->age=age;
//     }
// };
// class dog:private animal{
//     public:
//     void print(){
//         cout<<this->age<<endl;
//     }
// };

// class fruit{
//     public:
//     string name;
// };
// class mango:public fruit{
//     public:
//     int weight;
// };
// class alphonzo:public mango{
//     public:
//     int size;
// };

// class A{
//     public:
//     int physics;
//     int chemistry;
//     A(){
//         chemistry=100;
//     }
// };
// class B{
//     public:
//     int chemistry;
//     B(){
//         chemistry=200;
//     }
// };
// class C:public A,public B{
//     public :
//     int maths;
// };

// class car{
//     public:
//     int model;
//     void speedup(){
//         cout<<"speeding up"<<endl;;
//     }
// };
// class swift:public car{
// };
// class BMW:public car{
// };

// class maths{
//     public:
//     int sum(int a,int b){
//         return a+b;
//     }
//     int sum(int a,int b,int c){
//         return a+b+c;
//     }
//     int sum(float a,float b){
//         return a+b;
//     }
//     int sum(double a,double b){
//         return a+b;
//     }   
// };

// class param{
//     public :
//     int val;
//     void operator+(param &obj2){
//         int value1=this->val;
//         int value2=obj2.val;
//         cout<<(value2-value1)<<endl;
//     }
// };

// class animal{
//     public :
//     animal(){
//         cout<<"animal"<<endl;
//     }
//     virtual void speak(){             //remove virtual
//         cout<<"speaking"<<endl;
//     }
// };
// class dog :public animal{
//     public:
//     dog(){
//         cout<<"dog"<<endl;
//     }
//     void speak(){   //overriding
//         cout<<"barking"<<endl;
//     }
// };

// class abc{
//     mutable int  x;  //remove mutable
//     int *y;
//     const int z;
//     public:
//     // abc(){
//     //     x=0;
//     //     y=new int(2);
//     // }
//     // abc(int _x,int _y,int _z=0){
//     //     x=_x;
//     //     y=new int(_y);
//     //     z=_z;
//     // }
//     // // intiallisation list
//     abc(int _x,int _y,int _z=0):x(_x),y(new int (_y)),z(_z){
//         cout<<"initiaalisation list "<<endl;
//         *y=*y * 10;
//     }

//     int getx()const{
//         x=10;
//         return x;
//     }
//     void setx(int c){
//         x=c;
//     }
//     int gety()const{
//         // int d=20;
//         // y=&d;
//         return *y;
//     }
//     void sety(int val){
//         *y=val;
//     }
//     int getz()const{
//         return z;
//     }
// };
// void printABC(const abc &a){
//     cout<<a.getx()<<" "<<a.gety()<<" "<<a.getz()<<endl;
// }

// #define PI 3.14125
// #define MAXX(x,y) (x>y?x:y)
// float area (float r){
//     return PI * r * r;
// }
// void fun(){
//     int a=10;
//     int b=12;
//     int c=MAXX(a,b);
//     cout<<c<<endl;
// }

// class test{
//     public:
//     int x;
//     int *y;
//     test(int _x,int _y):x(_x),y(new int (_y)){}
//     // test(const test &obj){
//     //     x=obj.x;
//     //     y=obj.y;
//     // }

//     // SMART DEEP COPY 
//     test(const test &obj){
//         x=obj.x;
//         y=new int (*obj.y);
//     }
//     void print ()const{
//         // printf("x:%d\nPTR y:%p\ncontent of y(*y):%d\n\n",x,y,*y);
//         cout<<x<<" "<<y<<" "<<*y<<endl;
//     }
//     ~test(){
//         delete y;
//     }
// };

// int x=2;
// void fun(){
//     int x=100;
//     cout<<x<<endl;
//     ::x=12;
//     cout<<::x<<endl;
// }

// class abc{
//     public:
//     static int x;  //static
//     int y;
//       void print(){
//         cout<<x<<" "<<y<<endl;
//         // cout<<"i am in static"<<__FUNCTION__<<endl;
//     }
// };

// class bird{
//     public:
//     virtual void eat()=0;
//     virtual void fly()=0;
// };
// class sparrow:public bird{
//     void eat(){
//         cout<<"eating"<<endl;
//     }
//     void fly(){
//         cout<<"flying"<<endl;
//     }
// };
// class eagle:public bird{
//     void eat(){
//         cout<<" eagle is eating"<<endl;
//     }
//     void fly(){
//         cout<<"eagle is flying"<<endl;
//     }
// }; 
// void birdDoes( b *&bird){
//     bird->eat();
//     bird->fly();
// }

// inline void numshow(int num){
//     cout<<num<<endl;
// }

// class A{
//     private:
//     int x;
//     public:
//     A(int _x):x(_x){}
//     int getx()const{
//         return x;
//     }
//     void setx(int _x){
//         x=_x;
//     }
//     friend class B;
//     friend void print(const A &);
// };
// class B{
//     public: 
//     void print(const A &a){
//         // cout<<a.getx()<<endl;
//         cout<<a.x;
//     }
// };
// void print(const A &a){
//     cout<<a.x<<endl;
// }

// class box{
//     int width;
//     box(int w):width(w){}
//     public:
//     // box(int w):width(w){}
//     int getwidth()const{
//         return width;
//     }
//     void setwidth(int _w){
//         width=_w;
//     }
//     friend class boxfact;
// };
// class boxfact{
//     int count;
//     public:
//     box getAbox(int w){
//         ++count;
//         return box(w);
//     }
// };

// class base{
//     public:
//     base(){
//         cout<<"base ctor"<<endl;
//     }
//      virtual ~base(){
//         cout<<"base dtor"<<endl;
//     }
// };
// class derive:public base{
//     public:
//     int *a;
//     derive(){
//         a=new int[100];
//         cout<<"derive ctor"<<endl;
//     }
//     ~derive(){
//         delete []a;
//         cout<<"derive dtor"<<endl;
//     }
// };





int main(){
    // cout<<sizeof(animal)<<endl;  //empty class
    // animal ramesh;
    // ramesh.age=12;
    // ramesh.name="lion";
    // cout<<"age of ramesh is "<<ramesh.age<<endl;
    // cout<<"name of ramesh is "<<ramesh.name<<endl;

    // ramesh.eat();
    // ramesh.sleep();

    // // getter and setter creating
    // ramesh.setweight(101);
    // cout<<ramesh.getweight()<<endl;

    // // dynamic memory
    // animal* suresh=new animal;
    // (*suresh).age=109;
    // cout<<(*suresh).age<<endl;
    // // alternate
    // suresh->name="billi";
    // cout<<suresh->name<<endl;
    // suresh->eat();
    // suresh->sleep();

    // this is pointer to current object

    // animal a;
    // animal*b=new animal;

    // animal a(10);
    // animal*b=new animal(107);

    // animal a(29,80);
    // animal*b=new animal(107,90);

    // animal c=a;
    // animal ani(c);

    // animal a;
    // a.age=18;
    // a.setweight(80);
    // a.name="aman";
    // animal b=a;
    // a.print();
    // cout<<endl;
    // b.print();
    // a.name[0]='w';
    // a.print();
    // cout<<endl;
    // b.print();

    // animal a;

    // animal *b=new animal;
    // delete b;

    // # new video

    // dog d;
    // d.eat();
    
    // d.print();

    // dog d;
    // cout<<d.age;
    // d.print();

    // multilevel
    // alphonzo a;
    // cout<<a.name<<endl;
    // cout<<a.weight<<endl;
    // cout<<a.size<<endl;

    // // multiple
    // C obj;
    // cout<<obj.physics<< " ";
    // cout<<obj.chemistry<< " ";
    // cout<<obj.maths<< " ";
    // // diamond problem
    // cout<<obj.A::chemistry<<" ";
    // cout<<obj.B::chemistry<<" ";

    // // hierarchial
    // swift obj;
    // obj.speedup();
    // BMW obj2;
    // obj2.speedup();

    // hybrid

    // // polymorphism
    // // no of var, datatype of var  
    // functionoverloading
    // maths obj;
    // cout<<obj.sum(30,30)<<endl;
    // cout<<obj.sum(20,30,50)<<endl;
    // cout<<obj.sum(20.2f,30.0f)<<endl;
    // cout<<obj.sum(20.0,50.0)<<endl;

    // // operator overloading
    // param obj1;
    // param obj2;
    // obj1.val=9;
    // obj2.val=10;
    // cout<<obj1.val<<endl;
    // obj1 + obj2;
    // obj1 as curr obj. and obj2 as input par.
    // obj1.operator+(obj2);

    // // run time polymor.
    // dog d;
    // d.speak();

    // animal *a=new animal();
    // a->speak();
    // dog *d=new dog();
    // d->speak();

    // //upcasting
    // animal *a=new dog(); 
    // a->speak();
    // without virtual jiska ptr hota h uska func call hota h 
    // // downcasting
    // dog *d=(dog*) new animal();
    // d->speak();

    // animal *a=new animal();
    // animal *a=new dog();

    // dog *d=new dog();
    // dog *a=(dog*) new animal();

    // abstraction

    // // 2d array create using heap memeory
    // int **arr=new int *[5];
    // int row=5;
    // int col=3;
    // for(int i=0;i<row;i++){
    //     arr[i]=new int [col];
    // }
    // for(int i=0;i<row;i++){
    //     for(int j=0;j<col;j++){
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    // vector<vector<int>> arr(5,vector<int>(6,8));
    // 5=row, 6=col ,8=intiallises value
    // for(int i=0;i<5;i++){
    //     for(int j=0;j<6;j++){
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    // // const keyword
    // const int x=5;
    // cout<<x<<endl;

    // int *a=new int;
    // *a=5;
    // cout<<*a<<endl;
    // // delete a;
    // int b=19;
    // a=&b;
    // cout<<*a<<endl;

    // const int *a=new int(5);
    // // int const *a=new int(6);
    // cout<<*a<<endl;
    // int b=20;
    // a=&b;
    // cout<<*a<<endl;

    // int *const b=new int (5);
    // *b=9;
    // cout<<*b<<endl;

    // // both data & ptr cant bre reassigned
    // const int *const b=new int (2);
    // cout<<*b<<endl;

    // abc a(1,2);
    // printABC(a);
    // a.setx(10);
    // cout<<a.getx()<<endl;
    // a.sety(90);
    // cout<<a.gety()<<endl;

    // macros
    // float r=5;
    // cout<<area(r)<<endl;
    // fun();

    // // shallow vs deepcopy
    // test a(1,2);
    // cout<<"printing a"<<endl;
    // a.print();
    // // test b(a);
    // test b=a;
    // cout<<"printing b"<<endl;
    // b.print();
    // // a & b obj both point sat the same memory address of y
    // *b.y=20;
    // cout<<"printing b"<<endl;
    // b.print();
    // cout<<"printing a"<<endl;
    // a.print();

    // test *a=new test (1,2);
    // test b=*a;
    // delete a;
    // b.print();

    // // global vs local
    // ::x=0;  //global x
    // int x=1; //local x
    // cout<<x<<endl;
    // cout<<::x<<endl; //accessing global x
    // {
    //     int x=20;
    //     cout<<x<<endl;
    // }
    // fun();

    // // static keyword
    // abc obj1;
    // obj1.x=1;
    // obj1.y=2;
    // obj1.print();
    // abc obj2;
    // obj2.x=3;
    // obj2.y=4;
    // obj1.print();
    // obj2.print();

    // abc obj1;
    // abc::print();
    // abc obj2;
    // abc::print();
    // obj1.print();

    // // abstraction  wrong code new file
    // b *bird=new sparrow();
    // birdDoes(bird);

    // // inline function
    // numshow(6);

    // // friend 
    // A a(5);
    // B b;
    // b.print(a);
    // print(a);

    // constructor private or not
    // box b(3);
    // cout<<b.getwidth()<<endl;
    // yes ans

    // boxfact bfact;
    // box b=bfact.getAbox(5);
    // cout<<b.getwidth()<<endl;

    // base *b=new derive();
    // delete b;



    
    
    

    




    
    return 0;
}