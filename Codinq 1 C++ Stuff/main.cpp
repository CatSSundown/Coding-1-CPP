// Emmanuel Frias Week 5 Homework (late) (sorry)



#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>
#include <vector> 
using namespace std;

int main() {
    cout << "Here is the favgames program using vectors.\n";

    vector<string> gamelist;

    cout << "There are " <<gamelist.size() << " games in your list.\n";

    while (true)  {
        string input = "";
        cout << "What would you like to do?\n";
        cout << "add/show/quit\n";
        cin >> input;

        if(input == "add") {
            cout << "What game would you like to add?\n";
            cin >> input;
            gamelist.push_back(input);
        }
            
        

        else if(input == "show") {
            for(int i = 0; i < gamelist.size(); i++) {
                cout << gamelist[i] << "\n";
            }
        }

        else if(input == "quit") {
            cout << "Bye bye!\n";
            break;
        }
        
    }

    


    
}