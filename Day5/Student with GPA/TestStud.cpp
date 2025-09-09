#include <iostream>
#include "StudentService.h"
using namespace std;

int main() {
    int ch;
    do {
        cout << "1. Add Student"<<endl;
        cout << "2. Student Display"<<endl;
        cout << "3. Search By Id"<<endl;
        cout << "4. Search By Name"<<endl;
        cout << "5. sort By m1 marks"<<endl;
        cout << "6. calculate gpa"<<endl;
        cout<<  "7.Exit"<<endl;

        cout << "Enter choice: "<<endl;
        cin >> ch;

        switch (ch) {
            case 1:{
                StudentService::addStudent();
                break;
            }
            case 2:{
                StudentService::studentDisplay();
                break;
            }
            case 3:{Student* p=StudentService::searchById();
                    if(p){
                        p->display();
                    }
                break;
            }
            case 4:{Student* s=StudentService::SearchByName();
                        if(s){
                            s->display();
                        }
                        else{
                            cout<<"not found"<<endl;
                        }
                break;
                    }
            case 5:{ StudentService::sortByM1();
                    StudentService::studentDisplay();
                break;
            }
            case 6:{StudentService::Gpa();
                break;
            }
            case 7:{
                cout<<"Exit"<<endl;
                break;
            }
            default:{
                cout << "Enter valid choice\n";
                break;
            }
        }
    } while (ch != 7);

    return 0;
}
