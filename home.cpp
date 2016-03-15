#include <iostream>
using namespace std;


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

}

        void addData (){
        cout<<"What is the address of the house?\n";
getline(cin,hAddress);
cout<<"What are the Dymensions of the Property? < Feet and Inches > \n"<<"Lenght \n";
cin>>Propertylenghtfeet;
cin>> Propertylenghtinches;
cout<<"Width \n";
cin>>Propertywidthfeet;
cin>>Propertywidthinches;
cout<<"What are the Dymensions of the House? < Feet and Inches > \n"<<"Lenght \n";
cin>>hLenghtfeet;
cin>>hLenghtinches;
cout<<"Width \n";
cin>>hWidthfeet;
cin>>hWidthinches;
cout<<"Height \n";
cin>>hHeightfeet;
cin>>hHeightinches;
cout<<"What is the color of the house? \n";
cin>>hColor;
cout<<"How many rooms are in the house? \n";
cin>>nRoom;
        }

    void sethouseDymensionlenght(int hLenghtfeet, int  hLenghtinches ){
     int temp;
    temp = hLenghtfeet * 12;
    temp + hLenghtinches = hLenght;
    }

    void sethouseDymensionwidth(int hWidthfeet, int  hWidthinches ){
    int temp;
    temp = hWidthfeet * 12;
    temp + hLenghtinches = hWidth;
    }

    void sethouseDymensionwidth(int hHeightfeet, int  hHeightinches ){
    int temp;
    temp = hWidthfeet * 12;
    temp + hLenghtinches = hHeight;
    }

     void setPropertyDymensionwidth(int Propertylenghtfeet, int  Propertylenghtinches ){
    int temp;
    temp = hWidthfeet * 12;
    temp + hLenghtinches = pLenght;
    }


     void setPropertyDymensionwidth(int Propertywidthfeet, int  Propertywidthinches ){
    int temp;
    temp = hWidthfeet * 12;
    temp + hLenghtinches = pWidth;
    }

    int gethouseDymensionlenght() {return hLenght;}
    int gethouseDymensionheight() {return hHeight;}
    int gethouseDymensionwidth() {return hWidth;}
    int getpropertyDymensionlenght() {return pLenght;}
    int getpropertyDymensionwidth() {return pWidth;}
  



 /*
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

//deconstructor
-Home(){

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




int main(){
Home ahome;
ahome.addData();


return 0;
}


