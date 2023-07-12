//
//  main.cpp
//  todo
//
//  Created by Akhil Venkat on 12/7/23.
//


#include <iostream>
#include <unistd.h>
#include <fstream>
#include <vector>
using namespace std;
int main();
void reboot(){
    cout << "Restarting";
    sleep(1);
    cout << '.';
    sleep(1);
    cout << '.';
    sleep(1);
    cout << '.' << endl << endl;
    main();
}








int main(){
    cout << "Welcome to the to-do list application (beta)" << endl << endl;
    
    cout << "1) Create new to-do list" << endl;
    cout << "2) read from to-do list" << endl;
    
    string choice;
    cout << "Choice: ";
    cin >> choice;
    
    if(choice == "1"){
        cout << "Create new to-do list" << endl ;
        
        vector<string> todo;
        string item;
        char choice1;
        
        do {
            cout << "Enter your task: ";
            cin.ignore();
            getline(cin, item); // reads entire line
            todo.push_back(item); //adds item to vector
            
            cout << "Do you want to add an another task?(y/n)  ";
            cin >> choice1;
            
            
            
            
        } while(choice1 == 'y' || choice1 == 'Y');
        
        cout << endl << "To Do List: " << endl;
        
        for(int x = 1; x <= todo.size(); x++){
            
            
            cout << x << ") " << todo[x-1] << endl;
            
        }
        
        
        string save;
        
        cout << "Would you like to save your list?(y/n)  ";
        cin >> save;
        
        if(save == "y" || save == "Y"){
            cout << "saving..." << endl;
            ofstream File("/Users/akhil/Desktop/todo_list.txt"); //open file
            if(File.is_open()){
                File << "To-do list:" << endl;
                for(int x = 1; x <= todo.size(); x++){
                    
                    File << x << ") " << todo[x-1] << endl; //adds item to file
                }
                File.close(); //close file
                cout << "To-do list saved successfully!" << endl << endl;
            }
            
            else{
                cout << "Error opening file to write!" << endl;
            }
        }
        
            
            else{
                char restart;
                cout << "Would you like to restart the application?(y/n)  ";
                cin >> restart;
                if(restart == 'y' || restart == 'Y'){
                    
                    reboot();
                }
                else{
                    // do nothing
                }
            }
            
        }
        
        
        else if(choice == "2"){
            cout << "Read from file..." << endl;
            sleep(2);
            cout << "Coming soon..." << endl;
            reboot();
            
            
            
            
            
            
        }
        
    }
    
    
    
    


