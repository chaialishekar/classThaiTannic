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


int main()
{
    TableNo t;
    t.checkAvailability(2);
    return 0;
         
}

