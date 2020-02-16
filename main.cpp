#include <iostream>
#include "main.h"
using namespace std;

checkAns(){
    switch (input)
    {
        case Fire: cout << "Your type is Fire";
        break;

        case Water: cout << "Your type is Water";
        break;

        case Earth: cout << "Your type is Earth";
    }

}

int main(){

    enum Types
        { Fire = 1, Water, Earth};

    cout << "Enter a number 1 - 3: ";
    cin >> input;
    while (flag){
            
            if (input > 3 || input < 1 )
                cout << "\n\nThe number you have entered is not within the given range, try again.\nEnter a number 1-3: ";
            else
            {
                flag = false;
            }
            

    }
   checkAns();
}
;