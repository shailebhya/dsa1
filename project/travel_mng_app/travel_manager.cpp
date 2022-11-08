#include <iostream>
#include <fstream>
#include <iomanip>
#include <unistd.h>

using namespace std;

class Customers
{
public:
    string name, gender, address;
    int age, mobileNum, cusId;
    char all[999];
    void getDetails()
    {

        ofstream out("ols_customers.txt", ios::app);
        {
            cout << "enter customer ID:";
            cin >> cusId;
            cout << "enter name :";
            cin >> name;
            cout << "enter age :";
            cin >> age;
            cout << "enter mobilenum:";
            cin >> mobileNum;
            cout << "enter address: ";
            cin >> address;
            cout << "enter gender ";
            cin >> gender;
        }
        out << "\nCustomer ID:" << cusId << "\name" << name << "\nage" << age << "\nmobile number" << mobileNum << "\nAddress" << address << "\nGender" << gender;
        out.close();
        cout << "\nSaved \nnote: we saved your details record for future purposes\n"
             << endl;
    };
    void showDetails()
    {
        ifstream in("old_customers.txt");
        {
            if (!in)
            {
                cout << "File error!" << endl;
            }
            while (!(in.eof()))
            {
                in.getline(all, 999);
                cout << all << endl;
            }
            in.close();
        }
    }
};
class Cabs
{
    public:
    int cabChoice;
    int kilometers;
    float cost;
    float lastCost;

    void cabDetails(){
        cout<< "we collab..."<<endl;
        cout<<"...abc cabs..\n"<<endl;
        cout<<"1. rent a standcab. rs 15"<<endl;
        cout<<"2. rent a luxury . rs 15"<<endl;

        cout<<"]n to calculate the cost fo ryour journey"<<endl;
        cout<<"enter the kind of cab you need";
        cin>>cabChoice;
        cout<<"enter the num of kms";
        cin>>kilometers;

        int hireCab;
        if(cabChoice==1){
            cost=kilometers*15;
            cout<<"\nyour total cost"<<cost<<"rupees for a std cab"<<endl;
            cout<<"press 1 to hire th is cab or";
            cout<< "press 2 to select anotheer cab";
            cin>>hireCab;
            system("CLS");
            if(hireCab==1){
                lastCost=cost;
                cout<<"\n you have successfully hired a standard cab"<<endl;
                cout<< "Go to menu and take the receipt"<<endl;
            }else if(hireCab==2){
                cabDetails();
            }else{
                cout<<"invalid input : Redirecting to prev. menu\n Please watit"<<endl;
                usleep(999);
                system("CLS");
                cabDetails();
            }
        }else if (cabChoice ==2){
            cost = kilometers * 15;
            cout << "\nyour total cost" << cost << "rupees for a std cab" << endl;
            cout << "press 1 to hire th is cab or";
            cout << "press 2 to select anotheer cab";
            cin >> hireCab;
            system("CLS");
            if (hireCab == 1)
            {
                lastCost = cost;
                cout << "\n you have successfully hired a standard cab" << endl;
                cout << "Go to menu and take the receipt" << endl;
            }
            else if (hireCab == 2)
            {
                cabDetails();
            }
            else
            {
                cout << "invalid input : Redirecting to Main. menu\n Please watit" << endl;
                usleep(999);
                system("CLS");
                cabDetails();
                // menu();
            }
            cout<<"\n press 1 to Redirect to Main Menu";
            cin>> hireCab;
            system("CLS");
            if(hireCab==1){
                // menu();
            }else{
                //menu();
            }
        }
    }
};
class Booking
{
    public:
    int choiceHotel;
    int packChoice;
    float hotelCost;

    void hotels(){
        string hotelNo[]={"Avendra","choiceyou","elephant"};
        for(int a = 0;a<3;a++){
            cout<<(a+1)<<", Hotel"<<hotelNo[a]<<endl;
        }
        cout<<"\n currently we collaborated with above hotes!"<<endl;
        cout<<"Press any key to go back or \n enter number of the hotel you  want to boook: ";
        cin>>choiceHotel;
        system("CLS");
        if(choiceHotel==1){
            
        }
    }
};
class Charges
{
};
int main()
{
}