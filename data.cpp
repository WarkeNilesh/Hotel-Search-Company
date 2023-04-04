#include<bits/stdc++.h>
using namespace std;

struct Hotel{
    int beds;
    int rooms;
    string name;
    int rent;
};
Hotel hotel[3][5]=
{   // 1] noncancellation hotels
    {
        {2,20,"Hotel Hogsmeade Inn",2500},
        {3,20,"Hotel Hogsmeade Inn",3000},
        {1,20,"Hotel_Joy_N_Jenny",1500},
        {3,20,"Hotel_Hardhome",4500},
        {2,20,"Hotel_Kanto",1800}   
    },
    {
        //2] no worry only hurry hotels
        {3,20,"Hotel_Kanto",3500},
        {1,20,"Hotel Imperial",1500},  
        {1,20,"Hotel_NEW_PRIDE",1500},
        {3,20,"Hotel_MODERN",4500},
        {2,20,"Hotel_Kanto",1800}
    },
    {
        // 3] no service charge hotel
        {3,20,"Hotel Mandarin",3800} ,
        {3,20,"Hotel NEW_PRIDE",3000},
        {1,20,"Hotel_Joy_N_Jenny",1500},
        {3,20,"Hotel_Imperial",4500},
        {2,20,"Hotel_MODERN",1800}  
    }                        
};
