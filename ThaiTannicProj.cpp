#include<iostream>
using namespace std;
//base class
class ThaiTannic
{
        public:
        string name ,location,owners;

        private:
        int noOfStaff;
        string staffName;
        
};

   class menu: public ThaiTannic{
   public:
   void display_menu(){
       cout<<"
Veg tom yum soup -110
Veg man chow soup-110
Veg wonton soup-110


Starters
Dim sum(vegetable/paneer/chicken)-200
Paneer Sichuan
Lotus stem gangjeong
Spicy water-chestnut
Potato fries 

Combos of two-any of the above

Main course
Veg:
Thai green curry-220
Pad Thai-280
Som tam-265
Veg laska-160
veg noodles-180

Non veg:
Chicken kimchi fried rice-280
Prawn ramen noodles-200

Meals:
Asian pot noodles-360
Thai wonton vegetable pot-380

Deserts:
Coconut ice cream-140
Thai jelly-185
Mango sticky rice-185
Chocolate fudge ice-cream-160
Chocolate lava cake-130

"
   }
//class TableNo checks availability and allots available table


class TableNo : public ThaiTannic 
{
    public:
    
    bool isAvailable;
    int tableNo;
    void checkAvailability(int );
     
     
};
// checkAvailability is a function of class of TableNo
static bool tableNos[30];
    
void  TableNo :: checkAvailability(int members)

{
    
         isAvailable=false;
        if (members>=1 && members<=2)
        {
            for(int i=0;i<10;i++)
            {
                if (tableNos[i]!=true)
                {
                    isAvailable=true;
                    tableNo=i;
                    tableNos[i]=true;
                    break;
                }
            }


        }
        else if (members>=3 && members<=4)
        {
            for(int i=10;i<20;i++)
            {
                if (tableNos[i]!=true)
                {
                    isAvailable=true;
                    tableNo=i;
                    tableNos[i]=true;
                    break;
                }
            }


        }
        else if (members>=5 && members <=8)
        {
            for(int i=20;i<30;i++)
            {
                if (tableNos[i]!=true)
                {
                    isAvailable=true;
                    tableNo=i;
                    tableNos[i]=true;
                    break;
                }
            }


        }
        if (isAvailable)
        {
            cout<<"Bonjure! \n";
            cout<<"Table number "<<tableNo+1<<"\nOur waiter will guide you .";

        }
        else
        {
            cout<<"All the tables seem to be taken at the moment. \n";
            cout<<"We request you to take a seat in our waiting room.\n";
            cout<<"We'll gte back to you in a bit .\n";

        }

       

}


int main()
{
    TableNo t;
    t.checkAvailability(2);
    return 0;
         
}
