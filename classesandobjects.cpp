#include <iostream>
#include <string>
using namespace std;

//This is the class Person, which has three public attributes and a string method
class Person {
        public: 
            string fName;
            string lName;
            string bDay;
            void toString(){
                cout << "Hello, " << fName << " " << lName << "!";
            }
            virtual void greeting(){
                cout << "Hello traveler!";
            }
    };

class Student: public Person{
        public:
        //Student specific attributes 
            string major = "Undeclared";
            int id;
            //Student specific method 
            friend ostream& operator <<(ostream& os, const Student& st);
            void greeting() override{
                cout << "You should be studying.";
            }
            void declareMajor(){
                cout << "\nEnter major: ";
                cin >> major;
                cout << "Major updated to " << major << ".";
            }

};

ostream& operator <<(ostream& os, const Student& st){
    os << st.fName << " " << st.lName << " is a " << st.major << ".";
    return os;
}


int main() {
    //This is an instantiation of the class Person
    Person x;
    //Here, because the attributes are public, I can change their values
    x.fName = "Courtney";
    x.lName = "Sweeney";
    //Calls the toString method 
    x.toString();
    //Creates an instance of the class Student, which inherits from Person
    Student y;
    //Updating attributes
    y.fName = "Courtney";
    y.lName = "Sweeney";
    //Calls Student class function 
    y.declareMajor();
    cout << y;
    return 0;

}