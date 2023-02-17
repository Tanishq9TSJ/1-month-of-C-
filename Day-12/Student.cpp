#include <iostream>
#include <string>
using namespace std;

class Student{
private: 
    int roll;
    string Name;
    int marks1,marks2,marks3;
public:
    Student(int r, string n, int m1, int m2, int m3){
        roll = r;
        Name = n;
        marks1 = m1;
        marks2 = m2;
        marks3 = m3;
    }

    int add(){
        return marks1 + marks2 + marks3;
    }    

    char grade(){
        float percentage = add()/3;
        if(percentage >= 90){ 
            return 'S';
        }else if(percentage >= 80 && percentage < 70){
            return 'A';
        }else if(percentage >= 70 && percentage < 60){
            return 'B';
        }else if(percentage >= 60 && percentage < 50){
            return 'C';
        }else if(percentage >= 50 && percentage < 40){
            return 'D';
        }else if(percentage >= 40 && percentage < 35){
            return 'E';
        }else
            return 'F';
        
    }
};

int main(){
    int r, m1,m2,m3;
    string name;
    cout << "Enter the roll no: "; 
    cin >> r;
    cout << "Enter your name: ";
    cin >> name;
    cout<<"Enter your marks: ";
    cin >> m1 >> m2 >> m3;

    Student s1(r,name,m1,m2,m3);
    cout << "Total marks: "<<s1.add()<<endl;
    cout << "Grade: " << s1.grade()<<endl;
    return 0;
}