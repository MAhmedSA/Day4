#include <iostream>
#include<string>
#include<vector>

using namespace std;

//int ComplexNumber::counter = 0;

/*
int counter=0;
int counter_tree = 0;

struct Node
{
    int id;
    int grade;
    string name;

    Node* right = NULL;

    Node* left = NULL;

    void NodeInfo(int num, int g, string n) {
        id = num;
        grade = g;
        name = n;
    }

};

struct Tree {
    Node* root;

    Tree() {
        root = NULL;
    }

    void AddNode(Node* newNode, Node* insertedInto) {
        if (root == NULL) {
            root = newNode;
            counter_tree++;
            return;
        }
        if (newNode->id > insertedInto->id) {
            if (insertedInto->right == NULL) {
                insertedInto->right = newNode;
                return;
            }
            AddNode(newNode, insertedInto->right);
        }
        else {
            if (insertedInto->left == NULL) {
                insertedInto->left = newNode;
                return;
            }
            AddNode(newNode, insertedInto->left);
        }

    }

    bool FindStudent(int num, Node* tree) {

        if (tree->id == num) {
            return true;

        }
        if (tree->id > num) {
            return FindStudent(num, tree->left);
        }
        if (tree->id < num) {
            return FindStudent(num, tree->right);
        }

        cout << "Not Found ::: \n";
        return false;
    }
};



struct Queue {

    int id;
    string name;

    Queue* next;

    void Queueinfo(int number, string nameStudent) {
        id = number;
        name = nameStudent;
    }

};

struct Students {

    Queue* first;
    Queue* last;
    Students() {
        first = last = NULL;
    }
    

    void EnQueue(Queue* newNode) {
        counter++;
        if (first == NULL && last == NULL) {
            first = last = newNode;
        }

        last->next = newNode;
        last = newNode;
    }

    void EnQueueBeforeSt(int number, Queue* newNode) {

        if (first == NULL && last == NULL) {
            counter++;
            first = last = newNode;
        }

        Queue* temp = first;
        int i = 0;
        for (; i < counter ;i++) {

            Queue* temp2;

            if (temp->id == number) {

                counter++;
                temp2 = temp->next;
                temp->next = newNode;
                newNode->next=temp2;
                return;

            }
            temp = temp->next;
        }
    }

    Queue* DeQueue() {

        counter--;
        if (first == NULL) {
            cout<< "Empty Queue...... \n";
            return NULL;
        }
        Queue* temp = first;
        first = temp->next;
        return temp;
    }

    bool FindStudents(int number) {
        if (first == NULL) {
            cout << "Queue is Empty : \n";
            return false;
        }
        Queue* temp = first;
        for (int i = 0;i < counter;i++) {
            if (temp->id == number) {
                    return true;
            }
            temp = temp->next;
        }
        return false;
        
    }


};
*/

/*
ComplexNumber add(ComplexNumber c1, ComplexNumber c2) {
    ComplexNumber res = ComplexNumber();
    res.real = c1.real + c2.real;
    res.img = c1.img + c2.img;
    return res;
}

ComplexNumber sub(ComplexNumber c1, ComplexNumber c2) {
    ComplexNumber res= ComplexNumber();
    res.real = c1.real - c2.real;
    res.img = c1.img - c2.img;
    return res;
}
*/

struct item {
    string itemName;
    float price;
    int quantity;
};


class People {
public :
    string name;
    int age;
    string addres;
    void setIfo(string n, int a, string add){
        name = n;
        age = a;
        addres = add;
    }

};

//Inhertanc
class Employee :public People {

public: 
    
    int id;
    float salary;
    
    void setIfo(string n, int a, string add, int num,float s) {
        name = n;
        age = a;
        addres = add;
        id = num;
        salary = s;
    }
    

};

class Customer :public People {

public:
    vector<item> purchased;

};


class Manager: public Employee {
    
public:
    //Association( manager can manage groups of employee);
    vector<Employee*> employees;
};

class Company {

public:
    string name;

    vector<string> departmentName;

    //Composition

    vector<Employee> employees;
    
    vector<Manager> managers;
    //aggregation
    vector<Customer*> customers;

    


};


int main()
{
    item car1,car2;
    car1.itemName = "Z-4";
    car1.price = 6000000;
    car1.quantity = 1;
    car2.itemName = "M-8";
    car2.price = 9000000;
    car2.quantity = 1;

    Employee e1,e2;

    e1.setIfo("Mostafa", 25, "204_Street_fisal", 2020, 6500);
    e2.setIfo("mohamed", 35, "200_NaserCity", 2015, 15000);
    
    Manager m1;
    m1.setIfo("Kamel", 60, "Unkown", 8585, 70000);
    m1.employees = { &e1,&e2 };
   
    Customer c1, c2;
    c1.setIfo("karem", 45, "Mostafa_Elnhas");
    c1.purchased = { car1 };
    c2.setIfo("adel", 50, "Masr_ElGdeda");
    c2.purchased = { car2 };

    Company co1;
    co1.name = "BMW";
    co1.customers = { &c1, &c2 };
    co1.employees = { e1,e2 };
    co1.departmentName = { "Finance" ,"HR"};

    cout << "Name Of Manger For  " << co1.name << " is " << m1.name << " \n";
    cout << "Employees are managed from " << m1.name << " are " << (m1).employees[0]->name << " and " << (m1).employees[1]->name << " \n";
   
    /*
    ComplexNumber n1(6, 5);
    ComplexNumber n2(5, 4);
    
    ComplexNumber r;
    r= n1++;
    n1.displayRes();
    r.displayRes();
    r = n2--;
    n2.displayRes();
    r.displayRes();
    r = ++n2;
    n2.displayRes();
    r.displayRes();
    r = --n1;
    n1.displayRes();
    r.displayRes();
    ComplexNumber res1 , res2;
    
    res1 = n1 + n2;

    res2 = n1 - n2;

    cout << "+ Operator OverLoading\n";
    res1.displayRes();
    cout << "- Operator OverLoading\n";
    res2.displayRes();

    bool equal,notEqual;
    equal = n1 == n2;
    notEqual = n1 != n2;

    cout <<"  n1==n2 ->  " << equal<<"\n";

    cout << "  n1!=n2 ->  " << notEqual << "\n";

    cout << "Casting Operator   " << n1 << "\n" ;

    /*
    int ch;
    cout << "Please Enter Your Number to 1.Queue 2.Tree \n ";
    cin >> ch;
        if (ch == 1) {
            Students listStudents;
            Queue q1, q2, q3, q4;
            q1.Queueinfo(2019, "mohamed");

            q2.Queueinfo(2018, "ahmed");

            q3.Queueinfo(2017, "saad");

            listStudents.EnQueue(&q1);
            listStudents.EnQueue(&q2);
            listStudents.EnQueue(&q3);

            q4.Queueinfo(2022, "Mostafa");

            listStudents.EnQueueBeforeSt(2018, &q4);

            cout << listStudents.FindStudents(2018) << "\n";
            int size = counter;
            for (int i = 0;i < size;i++) {
                cout << "Name :   " << listStudents.DeQueue()->name << "\n";
            }
        }
        
        if (ch == 2) {

            Node n1, n2, n3, n4;
            n1.NodeInfo(5, 100, "mohamed");
            n2.NodeInfo(3, 50, "Ahmed");
            n3.NodeInfo(6, 70, "mostafa");
            n4.NodeInfo(2, 75, "mena");

            Tree t;

            t.AddNode(&n1, t.root);
            t.AddNode(&n2, t.root);
            t.AddNode(&n4, t.root);
            t.AddNode(&n3, t.root);
            cout << t.FindStudent(6, t.root);
        }


    {
        ComplexNumber object1 = ComplexNumber();
        ComplexNumber res1 = ComplexNumber();
        ComplexNumber res2 = ComplexNumber();
        cout << " \n Current Number Of objects :   " << ComplexNumber::counter << "\n";
        ComplexNumber object2 = ComplexNumber(15, 16);
        cout << " \n Current Number Of objects :   " << ComplexNumber::counter << "\n";
        ComplexNumber object3 = ComplexNumber(20, 10, "Constructor3");
        cout << "\n";

        object1.set();
        cout << " \n Current Number Of objects :   " << ComplexNumber::counter << "\n";
        cout << "First Number\n ";

        object1.get();

        cout << "Secound Number\n ";

        object2.get();
        cout << "\n";

        res1 = add(object1, object2);
        cout << " After Add Operation \n  ";
        res1.displayRes();

        res2 = sub(object1, object2);
        cout << " After Sub Operation \n  ";
        res2.displayRes();
        cout << " \n Current Number Of objects :   " << ComplexNumber::counter << "\n";
    
    }

    cout << " \n Current Number Of objects :   " << ComplexNumber::counter << "\n";
        
   */
    
}


