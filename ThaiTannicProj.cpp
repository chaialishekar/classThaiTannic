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
cout<<"\n1)Veg tom yum soup -110";
cout<<"\n2)Veg man chow soup-110";
cout<<"\n3)Veg wonton soup-110";
cout<<"\n-------------------------------------------------------"<<endl;
cout<<"\nSTARTERS";
cout<<"\n-------------------------------------------------------"<<endl;
cout<<"\n4)Dim sum(vegetable/paneer/chicken)-200";
cout<<"\n5)Paneer Sichuan-210";
cout<<"\n6)Lotus stem gangjeong-250";
cout<<"\n7)Spicy water-chestnut-190";
cout<<"\n8)Potato fries-210";

cout<<"\n-------------------------------------------------------"<<endl;
cout<<"\nMAIN COURSE";
cout<<"\n-------------------------------------------------------"<<endl;
cout<<"\nVEG:";
cout<<"\n9)Thai green curry-220";
cout<<"\n10)Pad Thai-280";
cout<<"\n11)Som tam-265";
cout<<"\n12)Veg laska-160";
cout<<"\n13)veg noodles-180";
cout<<"\nNON VEG:";
cout<<"\n14)Chicken kimchi fried rice-280";
cout<<"\n-------------------------------------------------------"<<endl;
cout<<"\nMEALS:";
cout<<"\n-------------------------------------------------------"<<endl;
cout<<"\n15)Prawn ramen noodles-200";
cout<<"\n16)Asian pot noodles-360";
cout<<"\n17)Thai wonton vegetable pot-380";
cout<<"\n-------------------------------------------------------"<<endl;
cout<<"\nDESERTS:";
cout<<"\n-------------------------------------------------------"<<endl;
cout<<"\n18)Coconut ice cream-140";
cout<<"\n19)thai jelly-185";
cout<<"\n20)Mango sticky rice-185";
cout<<"\n21)Chocolate fudge ice-cream-160";
cout<<"\n22)Chocolate lava cake-130";
cout<<"\n23)Combos of two-any of the above-350";
cout<<"\n-------------------------------------------------------"<<endl;
}
      
           
};

dishes[23]={"1)Veg tom yum soup","2)Veg man chow soup","3)Veg wonton soup","4)Dim sum(vegetable/paneer/chicken)","5)Paneer Sichuan","6)Lotus stem gangjeong","7)Spicy water-chestnut","8)Potato fries","9)Thai green curry","10)Pad Thai","11)Som tam","12)Veg laska","13)veg noodles","14)Chicken kimchi fried rice","15)Prawn ramen noodles","16)Asian pot noodles","17)Thai wonton vegetable pot","18)Coconut ice cream","19)thai jelly","20)Mango sticky rice","21)Chocolate fudge ice-cream","22)Chocolate lava cake","23)a combo of any two dessert"}
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
