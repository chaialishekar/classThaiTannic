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
//Class menu displays the menu
class menu: public ThaiTannic
{
   public:
   void display_menu()
   {

cout<<"\n-------------------------------------------------------"<<endl;
cout<<"T.H.A.I   T.A.N.I.C"<<endl;
cout<<"\n-------------------------------------------------------"<<endl;
cout<<"\n-------------------------------------------------------"<<endl;	   
cout<<"\nM.E.N.U"<<endl;
cout<<"\n-------------------------------------------------------"<<endl;

cout<<"\n-------------------------------------------------------"<<endl;
cout<<"\nSOUPS"<<endl;
cout<<"\n-------------------------------------------------------"<<endl;   
cout<<"\nVeg tom yum soup -110";
cout<<"\nVeg man chow soup-110";
cout<<"\nVeg wonton soup-110";
cout<<"\n-------------------------------------------------------"<<endl;
cout<<"\nSTARTERS";
cout<<"\n-------------------------------------------------------"<<endl;
cout<<"\nDim sum(vegetable/paneer/chicken)-200";
cout<<"\nPaneer Sichuan";
cout<<"\nLotus stem gangjeong";
cout<<"\nSpicy water-chestnut";
cout<<"\nPotato fries";
cout<<"\nCombos of two-any of the above";
cout<<"\n-------------------------------------------------------"<<endl;
cout<<"\nMAIN COURSE";
cout<<"\n-------------------------------------------------------"<<endl;
cout<<"\nVEG:";
cout<<"\nThai green curry-220";
cout<<"\nPad Thai-280";
cout<<"\nSom tam-265";
cout<<"\nVeg laska-160";
cout<<"\nveg noodles-180";
cout<<"\nNON VEG:";
cout<<"\nChicken kimchi fried rice-280";
cout<<"\n-------------------------------------------------------"<<endl;
cout<<"\nMEALS:";
cout<<"\n-------------------------------------------------------"<<endl;
cout<<"\nPrawn ramen noodles-200";
cout<<"\nAsian pot noodles-360";
cout<<"\nThai wonton vegetable pot-380";
cout<<"\n-------------------------------------------------------"<<endl;
cout<<"\nDESERTS:";
cout<<"\n-------------------------------------------------------"<<endl;
cout<<"\nCoconut ice cream-140";
cout<<"\nhai jelly-185";
cout<<"\nMango sticky rice-185";
cout<<"\nChocolate fudge ice-cream-160";
cout<<"\nChocolate lava cake-130";
cout<<"\n-------------------------------------------------------"<<endl;
}
      
           
};
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
class OrdersandTakeout :  public TableNo

{
	
	
	
};


int main()
{
    TableNo t;
    t.checkAvailability(2);
    menu m;
    m.display_menu();
    return 0;
         
}
