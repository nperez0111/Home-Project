#include <iostream>
#include <string>
#include <vector>
using namespace std;
class Room{
private:
string rColor;
int rLenght;
int  rLenghtfeet;
int  rLenghtinches;
int rWidth;
int rWidthfeet;
int rWidthinches;
int rHeight;
int rHeightfeet;
int rHeightinches;
string floorType;
Room * next;
public:
Room(){
rColor[100]=' ';
rLenght=0;
rWidth=0;
rHeight=0;
floorType[100]=' ';
   rHeightfeet=0;
rHeightinches=0;
rWidthfeet=0;
   rWidthinches=0;
   rLenghtfeet=0;
   rLenghtinches=0;

   next = 0;
}

Room(Room &blueprint){
rColor=blueprint.rColor;
rLenght=blueprint.rLenght;
rHeight=blueprint.rHeight;
rWidth=blueprint.rWidth;
floorType=blueprint.floorType;

}

/*
Deconstructor
~Room();
Operator overload
*/

 void addData(){
 cout<<"What are the Dymensions of the Room? \n"<<endl<<"Lenght \n"<<"Feet \n";
cin>>rLenghtfeet;
cout<<"Inches \n";
cin>>rLenghtinches;
cout<<endl;
cout<<"Width \n"<<"Feet \n";
cin>>rWidthfeet;
cout<<"Inches \n";
cin>>rWidthinches;
cout<<endl;
cout<<"Height \n"<<"Feet \n ";
cin>>rHeightfeet;
cout<<"Inches \n";
cin>>rHeightinches;
cout<<"What is the Color of the Room? \n";
cin>>rColor;
cout<<"What is the floor type? \n ";
cin>>floorType;
 }

 void setRoomDymensionlenghtinsert(int rLenghtfeet, int  rLenghtinches ){
     int temp;
    temp = rLenghtfeet * 12;
    rLenght = temp + rLenghtinches;
    }

    void setRoomDymensionlenght(){
     int temp;
    temp = rLenghtfeet * 12;
    rLenght = temp + rLenghtinches;
    }

    void sethouseDymensionwidthinsert(int rWidthfeet, int  rWidthinches ){
    int temp;
    temp = rWidthfeet * 12;
     rWidth = temp + rWidthinches;
    }

    void sethouseDymensionwidth(){
    int temp;
    temp = rWidthfeet * 12;
    rWidth = temp + rWidthinches;
    }

    void sethouseDymensionheightinsert(int rHeightfeet, int  rHeightinches ){
    int temp;
    temp = rWidthfeet * 12;
     rHeight = temp + rHeightinches;
    }

void sethouseDymensionheight(){
    int temp;
    temp = rWidthfeet * 12;
     rHeight = temp + rHeightinches;
  }


int getroomDymensionlenght() {return rLenght;}
    int getroomDymensionheight() {return rHeight;}
    int getroomDymensionwidth() {return rWidth;}
    string getroomColor(){return rColor;}
    string getfloorType(){return floorType;}

     void addTail(Room * &head, Room * &temp)
{
temp=this;
if(head==0)
{
head=temp;
}
else
{
Room * q;
q=head;

while(q -> next!=0)
{
q=q -> next;
}

q -> next=temp;
}
}




void display(){

cout<<"The Room Dymensions are: "<<rLenghtfeet<<" Feet and "<<rLenghtinches<<" Inches by "<<rHeightfeet<<" Feet and "<<rHeightinches<<" Inches by "<<rWidthfeet<<" Feet and "<<rWidthinches<<" Inches"<<endl;
cout<<"The color of the room is: "<<rColor<<endl;
cout<<"The Floor type is: " <<floorType<<endl;

}



};

class Home{

private:
int nRoom;
int hLenghtfeet;
int hLenghtinches;
int hWidthfeet;
int hWidthinches;
int hHeightfeet;
int hHeightinches;
int hHeight;
int hWidth;
int hLenght;
int actualrooms;
string hColor;
bool Attached;
int Propertylenghtfeet;
int Propertylenghtinches;
int Propertywidthfeet;
int Propertywidthinches;
int pLenght;
int pWidth;
string hAddress;

    public:
    Room aRoom;
    Home * next;

    Home(){
nRoom=0;
hLenghtfeet=0;
hLenghtinches=0;
hWidthfeet=0;
hWidthinches=0;
hHeightfeet=0;
  hHeightinches=0;
hColor=" ";
Propertylenghtfeet=0;
Propertylenghtinches=0;
Propertywidthfeet=0;
Propertywidthinches=0;
hAddress=" ";
pLenght=0;
             pWidth=0;
             hHeight=0;
    hWidth=0;
    hLenght=0;
    next =  0;

}

        void addData (){
        	 
        cout<<"What is the address of the house?\n";
	cin>>hAddress;
	/*
 cout<<"What are the Dymensions of the Property? \n"<<endl<<"Lenght \n"<<"Feet \n";
cin>>Propertylenghtfeet;
cout<<"Inches \n";
cin>> Propertylenghtinches;
cout<<endl;
cout<<"Width \n"<<"Feet \n";
cin>>Propertywidthfeet;
cout<<"Inches \n";
cin>>Propertywidthinches;
cout<<endl;
cout<<"What are the Dymensions of the House? \n"<<endl<<"Lenght \n"<<"Feet \n";
cin>>hLenghtfeet;
cout<<"Inches \n";
cin>>hLenghtinches;
cout<<endl;
cout<<"Width \n"<<"Feet \n";
cin>>hWidthfeet;
cout<<"Inches \n";
cin>>hWidthinches;
cout<<endl;
cout<<"Height \n"<<"Feet \n";
cin>>hHeightfeet;
cout<<"Inches \n";
cin>>hHeightinches;
cout<<endl;
cout<<"What is the color of the house? \n";
cin>>hColor;
cout<<"How many rooms are in the house? \n";
cin>>nRoom; */
        }

    void sethouseDymensionlenghtinsert(int hLenghtfeet, int  hLenghtinches ){
     int temp;
    temp = hLenghtfeet * 12;
    hLenght = temp + hLenghtinches;
    }

    void sethouseDymensionlenght(){
     int temp;
    temp = hLenghtfeet * 12;
    hLenght = temp + hLenghtinches;
    }

    void sethouseDymensionwidthinsert(int hWidthfeet, int  hWidthinches ){
    int temp;
    temp = hWidthfeet * 12;
     hWidth = temp + hWidthinches;
    }

    void sethouseDymensionwidth(){
    int temp;
    temp = hWidthfeet * 12;
     hWidth = temp + hWidthinches;
    }

    void sethouseDymensionheightinsert(int hHeightfeet, int  hHeightinches ){
    int temp;
    temp = hWidthfeet * 12;
     hHeight = temp + hHeightinches;
    }

void sethouseDymensionheight(){
    int temp;
    temp = hWidthfeet * 12;
     hHeight = temp + hHeightinches;
  }


     void setPropertyDymensionlenghtinsert(int Propertylenghtfeet, int  Propertylenghtinches ){
    int temp;
    temp = hWidthfeet * 12;
    pLenght = temp + Propertylenghtinches;
    }

    void setPropertyDymensionlenght(){
    int temp;
    temp = hWidthfeet * 12;
    pLenght = temp + Propertylenghtinches;
    }


    void setPropertyDymensionwidthinsert(int Propertywidthfeet, int  Propertywidthinches ){
    int temp;
    temp = hWidthfeet * 12;
    pWidth = temp +  Propertywidthinches;
    }

     void setPropertyDymensionwidth(){
    int temp;
    temp = hWidthfeet * 12;
    pWidth = temp +  Propertywidthinches;
    }

    void addTail(Home* &head, Home * &temp)
{
temp=this;
if(head==0)
{
head=temp;
}
else
{
Home * q;
q=head;

while(q->next!=0)
{
q=q->next;
}

q->next=temp;
}
}

    int gethouseDymensionlenght() {return hLenght;}
    int gethouseDymensionheight() {return hHeight;}
    int gethouseDymensionwidth() {return hWidth;}
    int getpropertyDymensionlenght() {return pLenght;}
    int getpropertyDymensionwidth() {return pWidth;}
  int getnumberofRooms(){return nRoom;}
  string getroomColor(){return hColor;}
string gethouseAdress(){return hAddress;}



//copy Constructor implemented in the main file
Home(Home &blueprint){
nRoom=blueprint.nRoom;
hLenghtfeet=blueprint.hLenghtfeet;
hLenghtinches=blueprint.hLenghtinches;
hWidthfeet=blueprint.hWidthfeet;
hWidthinches=blueprint.hWidthinches;
hHeightfeet=blueprint.hHeightfeet;
hHeightinches=blueprint.hHeightinches;
hColor=blueprint.hColor;
Propertylenghtfeet=blueprint.Propertylenghtfeet;
Propertylenghtinches=blueprint.Propertylenghtinches;
Propertywidthfeet=blueprint.Propertywidthfeet;
Propertywidthinches=blueprint.Propertywidthinches;
hAddress=blueprint.hAddress;}
/*
//deconstructor
~Home(){
}
//addRoom()
 */
//Print that Data
void display(){

cout<<"The address of the house is: "<<hAddress<<endl;
cout<<"The Properties Dymensions are: "<<Propertylenghtfeet<<" Feet and "<<Propertylenghtinches<<" Inches by "<<Propertywidthfeet<<" Feet and "<<Propertywidthinches<<" Inches"<<endl;
cout<<"The Dymensions of the House are: "<<hLenghtfeet<<" Feet and "<<hLenghtinches<<" Inches by "<<hHeightfeet<<" Feet and "<<hHeightinches<<" Inches by "<<hWidthfeet<<" Feet and "<<hWidthinches<<" Inches"<<endl;
cout<<"The color of the House is: "<<hColor<<endl;
cout<<"The number of rooms in the house are: "<<nRoom<<endl;

}

};


void menu();


int main(){

Home aHome;
Room aRoom;
int menuAsn;
bool check=false;
Home * head;
Home * temp;
Room * head2;
Room * temp2;
//Room * bRoom;
head = 0;
temp = 0;
head2 = 0;
temp2 =0;
Home * temptrav;
Home * trav;
temptrav = head;





do{
	cout<<"Welcome to the Indian Community \n"<<"	Menu \n";

cout<<"1) Add a House \n"<<"2) Display the Houses and Rooms \n"<<"3) Close Program \n";
cin>>menuAsn;
switch (menuAsn){
case 1:
cout<<"Add a House and Rooms\n";
            temp = new Home;
            temp2 = new Room;

temp->addData();
            if (temp->getnumberofRooms() < 0){
            cout<<"This house has no rooms \n";
            }
            else {
            cout<<"The house has "<<temp->getnumberofRooms()<<" rooms \n";
            for (int i = 0;i<temp->getnumberofRooms();i++){
            cout<<"This is room number "<<i+1<<endl;
            temp2->addData();
            temp2->addTail(head2, temp2);
            }
}
temp->addTail(head, temp);
break;
case 2:

		if (head==0){
			cout<<"There are no current houses on the community \n";
			}
		else {
			/* cout<<"This is the house \n";
			head->display();
			cout<<"Is this the Right house" */
			cout<<"This are the Current Home Adresses \n";
			/* Fix this NOWWWWWWWWWWWWWWWWWWW
			while (head->next != 0){
				cout<<"test \ n";
						trav=temptrav;
						trav->gethouseAdress();
						temptrav=head->next;
			}
			cout<<"End of while loop \n"; */ 
			
			//Insert search algoright here, then searchg the list by adresses 
			
		}
break;
case 3:
return 0;
break;
default:
cout<<"This was not one of the options \n";
check=false;
}

    }while(check==false);


return 0;
}




