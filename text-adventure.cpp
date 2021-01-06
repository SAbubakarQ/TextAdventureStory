// Bismillah Abubakar Q

#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

int main()
{

    // Variables
    string name;
    int path;
    string discipline;
    string weapon;
    int weaponC;
    int path2 = 0;
    int attack = 0;
    int healthC = 5;
    int healthP = 5;
    int stamina = 16;
    int round = 1;

    // Intro - Name
    cout << endl;
    cout << " Welcome to your adventure. What is your name, traveler?\n";

    cout << "My name is ";
    getline(cin, name);
    cout << endl;
    cout << " Hello " << name << "! Glad to have aquatined with you.\n";
    cout << endl;

    // First Branch - Discipline
    cout << " Ahead lies two paths.\n";
    cout << "  The one on the left is the path of the Assassin, while " << endl << "  the one on the right is the path of the Samurai.\n" << endl;

    cout << " Which path will you take?\n";
    cout << "  1. Assassin\n";
    cout << "  2. Samurai\n";
    cout << endl;

    cout << "I choose path: ";
        while (cin >> path)
        {
            if (path == 1) // Assassin Path
                {
                    discipline = "Assassin";
                    cout << "   You have chosen the path of the Assassin.\n";
                    cout << endl;
                    cout << " Now to choose your weapon.\n";
                    cout << endl;
                    break;
                }
            else if (path == 2) // Samurai Path
                {
                    discipline = "Samurai";
                    cout << "   You have chosen the path of the Samurai.\n";
                    cout << endl;
                    cout << " Now to choose your weapon.\n";
                    cout << endl;
                    break;
                }
            else
                {
                cout << "   That path does not exist, Whcih path will you choose?\n";
                cout << "I choose path: ";
                }
        }
    
    // Branch Two - Weapon choice
    cout << " You have chosen the path of the " << discipline << ".\n";
    cout << " Your weapon choices are as follows: \n";
    cout << endl;
    
    if (discipline == "Assassin") // Assassin Story Path
        {
            cout << "  1. Hidden Blade\n";
            cout << "  2. Silent Bow\n";
            cout << endl;


            cout << "My weapon of choice will be: ";
            while (cin >> weaponC)
            {
                if (weaponC == 1)
                {
                    weapon = "Hidden Blade";
                    cout << endl;
                    cout << " You have chosen the " << weapon << ".\n";
                    cout << endl;

                    cout << " Ahead lies the final battle, a fight against the opposite path. \n";
                    cout << "  You can either change your weapon or fight the Samurai.\n";
                    cout << "  What will it be?\n";
                    cout << endl;
                    cout << "  1. I want to change my weapon\n";
                    cout << "  2. I will go forward with the fight.\n";
                    cout << endl;
                    
                    cout << "Choice: ";
                    cin >> path2;
                    cout << endl;
                    if (path2 == 1)
                    {
                        cout << " Weapons:\n";
                        cout << "  1. Hidden Blade\n";
                        cout << "  2. Silent Bow\n";
                        cout << endl;
                        cout << "My new weapon of choice will be: ";
                    }
                    else if (path2 == 2)
                    {
                        cout << " You have chosen to fight with the " << weapon << ", stay in the shadows " << name << ".\n";
                        break;
                    }
                }
                else if (weaponC == 2)
                {
                    weapon = "Silent Bow";
                    cout << endl;
                    cout << " You have chosen the " << weapon << ".\n";
                    cout << endl;

                    cout << " Ahead lies the final battle, a fight against the opposite path. \n";
                    cout << "  You can either change your weapon or fight the Samurai.\n";
                    cout << "  What will it be?\n";
                    cout << endl;
                    cout << "  1. I want to change my weapon\n";
                    cout << "  2. I will go forward with the fight.\n";
                    cout << endl;
                    
                    cout << "Choice: ";
                    cin >> path2;
                    cout << endl;
                    if (path2 == 1)
                    {
                        cout << " Weapons:\n";
                        cout << "  1. Hidden Blade\n";
                        cout << "  2. Silent Bow\n";
                        cout << endl;
                        cout << "My new weapon of choice will be: ";
                    }
                    else if (path2 == 2)
                    {
                        cout << " You have chosen to fight with the " << weapon << ", stay in the shadows " << name << ".\n";
                        break;
                    }
                    
                }
                else 
                {
                    cout << " That...is not a weapon.\n";
                }
            }
            // While loop breaks here and weapon and path is chosen.
            /*cout << endl;
            cout << "Weapon Choice Break test";
            cout << endl;*/
        }
    else if (discipline == "Samurai") // Samurai Story Path
        {
            cout << "  1. Master Katana \n";
            cout << "  2. Righteous Tanto \n";

            cout << endl;
            cout << "My weapon of choice will be: ";
            while (cin >> weaponC)
            {
                if (weaponC == 1)
                {
                    weapon = "Master Katana";
                    cout << endl;
                    cout << " You have chosen the " << weapon << ".\n";
                    cout << endl;

                    cout << " Ahead lies the final battle, a fight against the opposite path. \n";
                    cout << "  You can either change your weapon or fight the Assassin.\n";
                    cout << "  What will it be?\n";
                    cout << endl;
                    cout << "  1. I want to change my weapon\n";
                    cout << "  2. I will go forward with the fight.\n";
                    cout << endl;
                    
                    cout << "Choice: ";
                    cin >> path2;
                    cout << endl;
                    if (path2 == 1)
                    {
                        cout << " Weapons:\n";
                        cout << "  1. Master Katana\n";
                        cout << "  2. Righteous Tanto\n";
                        cout << endl;
                        cout << "My new weapon of choice will be: ";
                    }
                    else if (path2 == 2)
                    {
                        cout << " You will honor us with the " << weapon << "! Onward my friend, " << name << ".\n";
                        break;
                    }
                }
                else if (weaponC == 2)
                {
                    weapon = "Righteous Tanto";
                    cout << endl;
                    cout << " You have chosen the " << weapon << ".\n";
                    cout << endl;

                    cout << " Ahead lies the final battle, a fight against the opposite path. \n";
                    cout << "  You can either change your weapon or fight the Assassin.\n";
                    cout << "  What will it be?\n";
                    cout << endl;
                    cout << "  1. I want to change my weapon\n";
                    cout << "  2. I will go forward with the fight.\n";
                    cout << endl;
                    
                    cout << "Choice: ";
                    cin >> path2;
                    cout << endl;
                    if (path2 == 1)
                    {
                        cout << " Weapons:\n";
                        cout << "  1. Master Katana\n";
                        cout << "  2. Righteous Tanto\n";
                        cout << endl;
                        cout << "My new weapon of choice will be: ";
                    }
                    else if (path2 == 2)
                    {
                        cout << " You will honor us with the " << weapon << "! Onward my friend, " << name << ".\n";
                        break;
                    }
                    
                }
                else 
                {
                    cout << " Helmet must be on too tight...this is not a weapon.\n";
                }
            }
            // While loop breaks here and weapon and path is chosen.
            /*cout << endl;
            cout << "Weapon Choice Break test";
            cout << endl;*/
        
        }
    
    cout << endl;
    cout << " You approach your opponent. You draw your weapon and prepare yourself for battle.\n";
    cout << endl;

    // Final Battle
    cout << " You face your opponent. Both draw their weapon of choice. \n";
    cout << " You draw your " << weapon << ".\n";
    cout << endl;
    cout << " *" << name << " attacks their opponent with the " << weapon << "!*\n";
    cout << endl;
    cout << " Choose a random number. \n";

    while ((healthC > 0) && (healthP > 0))
    {
        srand(time(NULL));
        int computer = rand() % 2;
        cout << "Number: ";
        cin >> attack;
        cout << endl;

        cout << "Round " << round << " \n";
        round++;

        if ((attack%2 == 0) && (computer%2 == 1))
        {
            stamina--;
            healthC--;
            cout << "Hit! Opponent's health is now " << healthC << " bars! \n";
        }  
        else if ((attack%2 == 1) && (computer%2 == 0))
        {
            stamina--;
            healthP--;
            cout << "You've been hit! Your health is now " << healthP <<" bars.\n";
        }
        else
        {
            stamina--;
            cout << "Draw! \n";
        }

        if(stamina == 0)
            {
                cout << endl;
                cout << "You both have fought with great might. You lay your weapons down in a draw and walk your seperate paths to end the story.\n";
                cout << endl << endl << endl << endl;
                cout << "Thank you for playing. -Abubakar Qasim\n" << endl;
                return 0;
            }

        if(healthP == 0)
            {
                cout << endl;
                cout << " You have been defeated! Your opponent claims victory and ends the story for you.\n";
                cout << endl << endl << endl << endl;
                cout << "Thank you for playing. -Abubakar Qasim\n" << endl;

                return 0;
            }
        
        if(healthC == 0)
            {
                cout << endl;
                cout << " Victory! You have defeated your opponent and finished the story!\n";
                cout << endl << endl << endl << endl;
                cout << "Thank you for playing. -Abubakar Qasim\n" << endl;
                return 0;
            }

    } 




}