#include <iostream>            // for cout and cin
#include <ctime>
#include <cstdlib>
#include <string>        //for rand() and srand()
#include <vector>
#include <algorithm>    // for sort, random, shuffle, and find
using namespace std;


int main() {
  srand(time(0));

    cout << "Here's your random number:" << rand() %2000 << ".\n";

    cout << "What program would you like to run?\n";
    cout << "Press 1 for vector exploration.\n";
    cout << "Press 2 for iterator nonsense.\n";
    cout << "Press 3 for algorithms.\n";
    int numInput = 0;
    cin >> numInput;

    if (numInput == 1) {
        //our first set of code goes here.
        cout << "Let's talk about vectors!\n";
        //build a vector of string named inventory with a size of zero.
        vector<string> inventory;

        cout << "There are " << inventory.size() << " items in my bag.\n";

        // let's add some things to our inventory

        inventory.push_back("Sword");
        inventory.push_back("Shield");
        inventory.push_back("Axe");

        cout << "There are " << inventory.size() << " items in my bag.\n";

        cout << "Items:\n";
        for(int i = 0; i < inventory.size(); i ++) {
            cout << inventory[i] << ".\n";
        }

        // let's replace an item, then let's remove an item with pop_back().

        cout << "We don't need a shield, let's get a gun.\n";
        inventory[1] = "A Gun";

        cout << "also, our axe broke!!\n";

        inventory.pop_back();

        cout << "Items:\n";
        for(int i = 0; i < inventory.size(); i ++) {
            cout << inventory[i] << ".\n";
        }
        
        

        //can you use a for loop to display all your items?
    }
    else if (numInput == 2) {
        cout << "Let's talk about iterators!\n";
        //iterators point at a spot in the list (vector)

        
        //let's create a vector of strings named shoppingList
        //let's use a collection of intializer to quickly add 5 items...
        vector<string> shoppingList {"Milk", "Eggs", "Candy", "Broccoli", "Parsley"};

        //let's create a varbiable of type vector<string>::iterator named iter
        vector<string>::iterator iter = shoppingList.begin();

        //use an asterik * to dereference our iterator to get the value
        cout << "Here's the first item in the shopping list: " << *iter << ".\n";

        cout << "Here's our shopping list:\n";
        for(vector<string>::const_iterator iter = shoppingList.begin(); iter != shoppingList.end(); ++iter) {
            cout << *iter << "\n";
            
        }

    /*
        Milk        <-- .begin()
        Eggs
        Candy
        Broccoli
        Parsley
                    <-- .end()
    */

        cout << "Here is the last item: " << *(shoppingList.end() -1) << ".\n";

        
    }
    else if (numInput == 3) {
        // let's create a vector of random scores.
        vector<int> scores;

        for(int i = 0; i < 10; i++) {
            scores.push_back(rand() % 100 +1);
        }

        cout << "Here are the scores: \n";
        for(int i = 0; i < scores.size(); i++) {
            cout << scores[i] << "\n";
        }

        //now we'll sort them!
        sort(scores.begin(), scores.end());

        cout << "Sorted lowest to highest: \n";
        for(int i = 0; i < scores.size(); i++) {
            cout << scores[i] << "\n";
        }

        //reverse so highest is first
        reverse(scores.begin(), scores.end());

        cout << "Sorted highest to lowest: \n";
        for(int i = 0; i < scores.size(); i++) {
            cout << scores[i] << "\n";
        }

        //now shuffle them again
        random_shuffle(scores.begin(), scores.end());

        cout << "Shuffled: \n";
        for(int i = 0; i < scores.size(); i++) {
            cout << scores[i] << "\n";
        }
    }
    else {
        cout << numInput << " wasn't one of the options.\n";
    }

    return 0;
}