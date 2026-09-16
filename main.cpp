#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;


int main()
{

    int choice;
    srand(time(0));
    int player_health = 100;
    int potion_count = 5;



    int monster_health = 150;

    while(player_health > 0 && monster_health >0){

        cout<<"==welcome fighter=="<<endl;
        cout<<" player's hp: "<<player_health<<endl;
        cout<<" player's potion: "<<potion_count<<endl;
        cout<<" monster's hp: "<<monster_health<<endl;
        cout<<" 1. attack "<<endl;
        cout<<" 2. heal "<<endl;
        cout<<" 3. run \n"<<endl;
        cout<<" what do you want to do: ";
        cin>>choice;


        if(choice==1){
            int sword_damage = (rand() %40 );
            monster_health = monster_health - sword_damage;
            cout<<"you dealt "<<sword_damage<<" and the monster is "<<monster_health <<"\n"<<endl;

            int monster_damage = (rand()%60);

            if(monster_health>0){

                player_health = player_health - monster_damage;
                cout<<"you got damaged "<<monster_damage<<" and the you are at "<<player_health <<"\n"<<endl;
            }



        }
        else if(choice==2){

            if (potion_count>0){

                int potion_heal = (rand()%30 )+ 10;
                player_health = player_health + potion_heal;
                potion_count = potion_count-1;
                cout<<"you are at "<< player_health<<" hp left, with "<<potion_count <<"left"<<endl;
            }
            else {
                cout<<"you ran out of potions"<<endl;


            }

            int monster_damage = (rand()%60);

            if(monster_health>0){

                player_health = player_health - monster_damage;
                cout<<"you got damaged "<<monster_damage<<" and the you are at "<<player_health <<"\n"<<endl;
            }

        }
        else if (choice ==3 ){


            cout<<"the player ran out,what a chicken"<<endl;
           break ;
        }
        else {

            cout<<"invalid output"<<endl;
        }

    }
    if (choice == 3) {

    }
    else if (player_health > 0 && monster_health <= 0) {
        cout << "you win!" << endl;
    }
    else {
        cout << "the monster win!" << endl;
    }

    return 0;
}
