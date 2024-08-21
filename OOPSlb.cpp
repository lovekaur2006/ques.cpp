//Basic Concepts
#include <iostream>
using namespace std;
class Hero
{

    // properties
private:
    int health;

public:
    char *name;
    char level;
    static int timeToComplete;

    // Constructor
    Hero()
    {
        cout << "Simple Constructor called" << endl;
        name = new char[100];
    }

    // parameterised Constructor
    Hero(int health)
    {
        this->health = health;
    }

    Hero(int health, char level)
    {
        this->level = level;
        this->health = health;
    }

    // Copy Constructor
    Hero(Hero &temp)
    {
        char *ch = new char[strlen(temp.name) + 1];
        strcpy(ch, temp.name);
        this->name = ch;

        cout << "Copy Constructor called" << endl;
        this->health = temp.health;
        this->level = temp.level;
    }

    void print()
    {
        cout << endl;
        cout << "[ Name: " << this->name << ", ";
        cout << "health: " << this->health << ", ";
        cout << "level: " << this->level << " ] ";
        cout << endl
             << endl;
    }

    int getHealth()
    {
        return health;
    }

    char getLevel()
    {
        return level;
    }

    void setHealth(int h)
    {
        health = h;
    }

    void setLevel(char ch)
    {
        level = ch;
    }

    void setName(char name[])
    {
        strcpy(this->name, name);
    }

    static int random()
    {
        return timeToComplete;
    }

    // Destructor
    ~Hero()
    {
        cout << "Destructor called" << endl;
    }

    Hero::timeToComplete = 5;
} int main()
{

    return 0;
}

// Inheritance
#include <iostream>
using namespace std;
class Human
{
public:
    int height;
    int weight;
    int age;

public:
    int getAge()
    {
        return this->age;
    }
    void setWeight(int w)
    {
        this->weight =w;
    }
};
//Single Inheritance
class Male : public Human
{
public:
    string color;

    void sleep()
    {
        cout << "Male Sleeping" << endl;
    }
};

int main()
{
    Male obj1;
    cout << obj1.age << endl;
    cout << obj1.weight << endl;
    cout << obj1.height << endl;

    cout << obj1.color << endl;
    obj1.setWeight(85);
    cout << obj1.weight << endl;
    obj1.sleep();
    return 0;
}

// Multilevel Inheritance
#include <iostream>
using namespace std;
class Animal
{
public:
    int age;
    int weight;

public:
    void speak()
    {
        cout << "Speaking" << endl;
    }
};
class Dog : public Animal
{
};

class GermanShepherd : public Dog
{
};
int main()
{
    GermanShepherd g;
    g.speak();
    return 0;
}

// Multiple Inheritance
#include <iostream>
using namespace std;
class Animal
{
public:
    int age;
    int weight;

public:
    void bark()
    {
        cout << "Barking" << endl;
    }
};
class Human
{
public:
    string color;

public:
    void speak()
    {
        cout << "Speaking" << endl;
    }
};

// Multiple Inheritance
class Hybrid : public Human, public Animal
{
};
int main()
{
    Hybrid h;
    h.speak();
    h.bark();
    return 0;
}

// Hierarchial Inheritance
#include <iostream>
using namespace std;
class A
{
public:
    void func1()
    {
        cout << "Inside Function 1" << endl;
    }
};
class B : public A
{
public:
    void func2()
    {
        cout << "Inside Function 2" << endl;
    }
};
class C : public A
{
public:
    void func3()
    {
        cout << "Inside Function 3" << endl;
    }
};
int main()
{
    A o1;
    o1.func1();

    B o2;
    o2.func1();
    o2.func2();

    C o3;
    o3.func1();
    o3.func3();
    return 0;
}

// Hybrid Inheritance
#include <iostream>
using namespace std;
class A
{
public:
    void func1()
    {
        cout << "Inside Function 1" << endl;
    }
};
class D
{
public:
    void func4()
    {
        cout << "Inside function 4" << endl;
    }
} class B : public A
{
public:
    void func2()
    {
        cout << "Inside Function 2" << endl;
    }
};
class C : public A, public D
{
public:
    void func3()
    {
        cout << "Inside Function 3" << endl;
    }
};
int main()
{
    A o1;
    o1.func1();

    B o2;
    o2.func1();
    o2.func2();

    C o3;
    o3.func1();
    o3.func3();
    o3.func4();

    D o4;
    o4.func4();

    return 0;
}

// Inheritance Ambiguity
#include <iostream>
using namespace std;
class A
{
public:
    void func()
    {
        cout << "I an A" << endl;
    }
};
class B
{
public:
    void func()
    {
        cout << "I an B" << endl;
    }
};
class C : public A, public B
{
};
int main()
{
    C obj;
    obj.A::func();
    obj.B::func();
    return 0;
}

// POLYMORPHISM
// COMPILE TIME POLYMORPHISM
#include <iostream>
using namespace std;
class A
{
public:
    // //Function overloading
    // void sayHello()
    // {
    //     cout << "Hello" << endl;
    // }
    // void sayHello(char name)
    // {
    //     cout << "Hello" << name << endl;
    // }
    // int sayHello(string h)
    // {
    //     cout << "Hi" << h << endl;
    // }

    int a;
    int b;

public:
    int add()
    {
        return a + b;
    }
    void operator+(A &obj)
    {
        int value1 = this->a;
        int value2 = obj.a;
        cout << "O/P " << value2 - value1 << endl;
    }
    void operator()()
    {
        cout << "Mein bracket hun " << this->a << endl;
    }
};
int main()
{
    // A obj;
    // obj.sayHello();

    A obj1, obj2;
    obj1.a = 4;
    obj2.a = 7;
    obj1 + obj2;

    obj1();

    return 0;
}

// RUN TIME POLYMORPHISM
#include <iostream>
using namespace std;
class Animal
{
public:
    void speaks()
    {
        cout << "speaking" << endl;
    }
};
class Dog : public Animal
{
public:
    void speaks()
    {
        cout << "Barking" << endl;
    }
};
int main()
{
    Dog obj;
    obj.speaks();
    return 0;
}