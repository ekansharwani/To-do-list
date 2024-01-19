#include <iostream>
#include <fstream>
using namespace std;

struct todolist
{
    int id;
    string task;
};

int ID;
void banner();
void addTask();
void showTasks();
void serachTask();
void updateTask();
void deleteTask();


int main(){
    system("cls");

    while (true) {
        banner();
        cout << "\n \t 1.Add a task";
        cout << "\n \t 2.Show all tasks";
        cout << "\n \t 3.Search for task";
        cout << "\n \t 4.Update task";
        cout << "\n \t 5. Delete task";

        int choice;
        cout << "\n \t Enter Choice: ";
        cin >> choice;

        switch (choice)
        {
        case '1':
            addTask();
            break;
        case '2':
            //showTasks();
            break;
        case '3':
            //serachTask();
            break;
        case '4':
            //updateTask();
            break;
        case '5':
            //deleteTask();
            break;
        default:
            break;
        }

    }

    return 0;
}

void banner() {
    cout << "____________________________________________________" << endl;
    cout << " \t To-do list" << endl;
    cout << "____________________________________________________" << endl;

}

void addTask() {
    system("cls");
    banner();

    todolist todo;

    cout << "\n Enter new task: " << endl;
    cin.get();
    getline(cin, todo.task);

    char save;
    cout << "Save task> (Y/N): " << endl;
    cin >> save;

    if (save == 'y' || save =='Y') {
        ID++;
        ofstream fout;
        fout.open("todo.txt");
        fout << "\n" << ID;
        fout << "\n" << todo.task;
        fout.close();

        char more;
        cout << "Add more tasks? (Y/N): " <<endl;
        cin >> more;

        if (more == 'y' || more == 'Y') {
            addTask();
        }
        else {
            system("cls");
            cout << "Task added Successfully!" << endl;
            return;
        }
        system("cls");
    }
    
}