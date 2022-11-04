//#include <iostream>  
//using namespace std;

//single inheritance
//
//class Account {
//public:
//    float salary = 60000;
//};
//class Programmer : public Account {
//public:
//    float bonus = 5000;
//};
//int main(void) {
//    Programmer p1;
//    cout << "Salary: " << p1.salary << endl;
//    cout << "Bonus: " << p1.bonus << endl;
//    return 0;
//}

//multilevel inheritance

//
//class A {
//public:
//    void display() {
//        cout << "Base class content.";
//    }
//};
//
//class B : public A {};
//
//class C : public B {};
//
//int main() {
//    C obj;
//    obj.display();
//    return 0;
//}



//multiple inheritance- Çoxlu inheritance C++ - da uşaq sinfinə bir çox əsas sinifdən xassələri və ya davranışı miras almağa imkan verən 
//inheritance anlayışıdır.

//#include <iostream>
//using namespace std;
//
//class Mammal {
//public:
//    Mammal() {
//        cout << "Mammals can give direct birth." << endl;
//    }
//};
//
//class WingedAnimal {
//public:
//    WingedAnimal() {
//        cout << "Winged animal can flap." << endl;
//    }
//};
//
//class Bat : public Mammal, public WingedAnimal {};
//
//int main() {
//    Bat b1;
//    return 0;
//}


//Hierarchy - torenen siniflərdə ümumi olan bütün xüsusiyyətlər əsas sinifə daxil edilir.
//Məsələn, Fizika, Kimya, Biologiya Elm dərsindən götürülür. Eynilə, Dog, Cat, Horse Animal sinifindən götürülür.

//#include <iostream>
//using namespace std;
//
//
//class Animal {
//public:
//    void info() {
//        cout << "I am an animal." << endl;
//    }
//};
//
//class Dog : public Animal {
//public:
//    void bark() {
//        cout << "I am a Dog. Woof woof." << endl;
//    }
//};
//
//
//class Cat : public Animal {
//public:
//    void meow() {
//        cout << "I am a Cat. Meow." << endl;
//    }
//};
//
//int main() {
//  
//    Dog dog1;
//    cout << "Dog Class:" << endl;
//    dog1.info();  
//    dog1.bark();
//
//    // Create object of Cat class
//    Cat cat1;
//    cout << "\nCat Class:" << endl;
//    cat1.info();  // Parent Class function
//    cat1.meow();
//
//    return 0;
//}