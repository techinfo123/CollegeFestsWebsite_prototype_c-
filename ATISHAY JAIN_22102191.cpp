#include<iostream>
#include<string>
#include<cmath>
#include<vector>
#include<map>
#include <fstream>
using namespace std;

class registry {
    string enroll;
    string first_name;
    string last_name;
    string email;
    string phone_no;
public:
    registry(string enroll, string first_name, string last_name, string email, string phone_no) {
        this->enroll = enroll;
        this->first_name = first_name;
        this->last_name = last_name;
        this->email = email;
        this->phone_no = phone_no;
    }
    void enroll_setter(string enroll) {
        this->enroll = enroll;
    }
    void firstname_setter(string first_name) {
        this->first_name = first_name;
    }
    void lastname_setter(string last_name) {
        this->last_name = last_name;
    }
    void email_setter(string email) {
        this->email = email;
    }
    void phoneno_setter(string phone_no) {
        this->phone_no = phone_no;
    }
    string get_enroll() const {
        return enroll;
    }
    string get_first_name() const {
        return first_name;
    }
    string get_last_name() const {
        return last_name;
    }
    string get_email() const {
        return email;
    }
    string get_phone_no() const {
        return phone_no;
    }
};

void write_to_file( vector<registry>& data) {
    ofstream outfile;
    outfile.open("data.txt");
    for (const auto& item : data) {
        outfile << item.get_enroll() << " " << item.get_first_name() << " " << item.get_last_name() << " " << item.get_email() << " " << item.get_phone_no() << endl;
    }
    outfile.close();
}

void studentregistry() {
    vector<registry> data;
    string enroll, phone_no;
    string first_name, last_name, email;
    char choice;
    bool modify_previous_data = false;
    do {
        if (!modify_previous_data) {
            cout << "Enter your enrollment no: ";
            cin >> enroll;
            cout << "Enter your first name: ";
            cin >> first_name;
            cout << "Enter last name: ";
            cin >> last_name;
            cout << "Enter email id: ";
            cin >> email;
            cout << "Enter phone number: ";
            cin >> phone_no;
            registry r(enroll, first_name, last_name, email, phone_no);
            data.push_back(r);
        }
        else {
            // Modify the previously entered data
            cout << "Enter new enrollment no (or enter 0 to keep the previous value): ";
            cin >> enroll;
            if (enroll != "0") {
                data.back().enroll_setter(enroll);
            }
            cout << "Enter new first name (or enter '0' to keep the previous value): ";
            cin >> first_name;
            if (first_name != "0") {
                data.back().firstname_setter(first_name);
            }
            cout << "Enter new last name (or enter '0' to keep the previous value): ";
            cin >> last_name;
            if (last_name != "0") {
                data.back().lastname_setter(last_name);
            }

            cout <<"Enter new email (or enter 0 to keep the previous value): ";
            cin>>email;
            if (email != "0") {
            data.back().email_setter(email);
            }

            cout << "Enter new phone number (or enter 0 to keep the previous value): ";
            cin >> phone_no;
            if (phone_no != "0") {
                data.back().phoneno_setter(phone_no);
            }

    }


    cout << "Do you want to modify the previously entered data? (Y/N): ";
    cin >> choice;
    modify_previous_data = (choice == 'Y' || choice == 'y');
} while (choice == 'Y' || choice == 'y');

write_to_file(data);
}

void exit(){
     cout<<"       Thank you for using the app, "<<endl<<
     "             Exiting........................."<<
     endl<<"                   PSA."<<endl;
      system("pause");
     exit(0);
}

int start()
 {
     cout<<endl<<"- - - - - - - -- - - -- - - - -- - - - - - - -- - - - - -- - - - - - - - - - - - -";
   cout<<endl<<"-                                                                                -"
   <<endl<<"-                                                                                -";
   cout<<endl<<"-                 ____________      _____                                        -"
   <<endl<<"-  |      |            |           |     \\       __________                      -"
   <<endl<<"-  |      | _____      |  ____     |      \\   /\\      |    ________              -"
   <<endl<<"-  |      | |    |     | |    |    |       ) /  \\     |    |                     -"
   <<endl<<"-  |      | |    |     | |    |    |      / /----\\    |    |------               -"
   <<endl<<"-  |______| |____|     | |____|    |____ / /      \\   |    |_______              -"
   <<endl<<"-           |                                                                    -"
   <<endl<<"-           |                                                                    -"
   <<endl<<"-           |                                                                    -"
   <<endl<<"-                                                                                -"
   <<endl<<"-                                                                                -"
   <<endl<<"-                                                                                -";
   cout<<endl<<"- - - - - - - -- - - -- - - - -- - - - - - - -- - - - - -- - - - - - - - - - -- -"<<endl;
   return 0;
 }

void menu()
 {
     cout<<endl<<"- - - - - - - -- - - -- - - - -- - - - - - - -- - - - - -- - - - - - - - - - -  -";
   cout<<endl<<"-                                                                               -"
   <<endl<<"-                               Menu                                            -";
   cout<<endl<<"- - - - - - - -- - - -- - - - -- - - - - - - -- - - - - -- - - - - - - - - - -  -";
   cout<<endl<<"-                     -------------------------------------                     -"
   <<endl<<"-                     | PRESS 0 -> GO BACK A CURRENT PAGE |                     -"
   <<endl<<"-                     -------------------------------------                     -"
   <<endl<<"-                                                                               -"
   <<endl<<"-                     -------------------------------------                     -"
   <<endl<<"-                     | PRESS 99-> FOR THE MENU OPTION    |                     -"
   <<endl<<"-                     -------------------------------------                     -"
   <<endl<<"-                                                                               -"
   <<endl<<"-                     -------------------------------------                     -"
   <<endl<<"-                     | PRESS 404-> FOr EXITING THE APP   |                     -"
   <<endl<<"-                     -------------------------------------                     -"
   <<endl<<"-                                                                               -";
   cout<<endl<<"- - - - - - - -- - - -- - - - -- - - - - - - -- - - - - -- - - - - - - - - - - -"<<endl;
}

int frontpage()
 {
     cout<<endl<<"- - - - - - - -- - - -- - - - -- - - - - - - -- - - - - -- - - - - - - - - - -  -";
   cout<<endl<<"-                                                                               -"
   <<endl<<"-                               UpToDate                                        -";
   cout<<endl<<"- - - - - - - -- - - -- - - - -- - - - - - - -- - - - - -- - - - - - - - - - -  -";
   cout<<endl<<"-                                                                               -"
   <<endl<<"-   ---------------------------            ---------------------------          -"
   <<endl<<"-   |  1.   EVENTS            |            |   3.  SPEAKERS          |          -"
   <<endl<<"-   ---------------------------            ---------------------------          -"
   <<endl<<"-                                                                               -"
   <<endl<<"-   ---------------------------            ---------------------------          -"
   <<endl<<"-   |  2.   HUBS              |            |   4.  SEMINARS          |          -"
   <<endl<<"-   ---------------------------            ---------------------------          -"
   <<endl<<"-                                                                               -"
   <<endl<<"-                                                                               -"
   <<endl<<"-                                                                               -"
   <<endl<<"-                                                                               -";
   cout<<endl<<"- - - - - - - -- - - -- - - - -- - - - - - - -- - - - - -- - - - - - - - - - - -"<<endl;
   return 1;
}
int intro()
 {
     cout<<endl<<"- - - - - - - -- - - -- - - - -- - - - - - - -- - - - - -- - - - - - - - - - -  -";
   cout<<endl<<"-                                                                               -"
   <<endl<<"-                               UpToDate                                        -";
   cout<<endl<<"- - - - - - - -- - - -- - - - -- - - - - - - -- - - - - -- - - - - - - - - - -  -";
   cout<<endl<<"-                                                                               -"
   <<endl<<"-                                                                               -"
   <<endl<<"-                                                                               -"
   <<endl<<"-                                                                               -"
   <<endl<<"-                              1) JIIT 62                                       -"
   <<endl<<"-                                                                               -"
   <<endl<<"-                                                                               -"
   <<endl<<"-                              2) JIIT 128                                      -"
   <<endl<<"-                                                                               -"
   <<endl<<"-                                                                               -"
   <<endl<<"-                                                                               -"
   <<endl<<"-                                                                               -";
   cout<<endl<<"- - - - - - - -- - - -- - - - -- - - - - - - -- - - - - -- - - - - - - - - - - -"<<endl;
}
int events()
 {
     cout<<endl<<"- - - - - - - -- - - -- - - - -- - - - - - - -- - - - - -- - - - - - - - - - -  -";
   cout<<endl<<"-                                                                               -"
   <<endl<<"-                               EVENTS                                          -";
   cout<<endl<<"- - - - - - - -- - - -- - - - -- - - - - - - -- - - - - -- - - - - - - - - - -  -";
   cout<<endl<<"-                                                                               -"
   <<endl<<"-   -----------------------                                                     -"
   <<endl<<"-   |   1. COMPETITIONS   |                                                     -"
   <<endl<<"-   -----------------------                                                     -"
   <<endl<<"-                                                                               -"
   <<endl<<"-   -----------------------                                                     -"
   <<endl<<"-   |   2. WORKSHOPS      |                                                     -"
   <<endl<<"-   -----------------------                                                     -"
   <<endl<<"-                                                                               -"
   <<endl<<"-   -----------------------                                                     -"
   <<endl<<"-   |   3. GUEST LECTURES |                                                     -"
   <<endl<<"-   -----------------------                                                     -";
   cout<<endl<<"- - - - - - - -- - - -- - - - -- - - - - - - -- - - - - -- - - - - - - - - - - -"<<endl;
   return 2;
}
int hubs()
 {
     cout<<endl<<"- - - - - - - -- - - -- - - - -- - - - - - - -- - - - - -- - - - - - - - - - -  -";
   cout<<endl<<"-                                                                               -"
   <<endl<<"-                               HUBS                                            -";
   cout<<endl<<"- - - - - - - -- - - -- - - - -- - - - - - - -- - - - - -- - - - - - - - - - -  -";
   cout<<endl<<"-                                                                               -"
   <<endl<<"-   -----------------------                  -----------------------            -"
   <<endl<<"-   |   1. GDSC           |                  |   4.  IEEE          |            -"
   <<endl<<"-   -----------------------                  -----------------------            -"

   <<endl<<"-                                                                               -"
   <<endl<<"-   -----------------------                  -----------------------            -"
   <<endl<<"-   |   2. JIIT OPTICA    |                  |   5.  NSSR          |            -"
   <<endl<<"-   -----------------------                  -----------------------            -"

   <<endl<<"-                                                                               -"
   <<endl<<"-   -----------------------                  -----------------------            -"
   <<endl<<"-   |   3. CICE           |                  |   6.  uCR           |            -"
   <<endl<<"-   -----------------------                  -----------------------            -";

   cout<<endl<<"- - - - - - - -- - - -- - - - -- - - - - - - -- - - - - -- - - - - - - - - - - -"<<endl;




}
int GDSC(){
     cout<<endl<<"- - - - - - - -- - - -- - - - -- - - - - - - -- - - - - -- - - - - - - - - - -  -";
   cout<<endl<<"-                                                                               -"
   <<endl<<"-                                  GDSC                                         -";
   cout<<endl<<"- - - - - - - -- - - -- - - - -- - - - - - - -- - - - - -- - - - - - - - - - -  -";
   cout<<endl<<"-                                                                               -";
   cout<<endl<<"-     ---------------------             --------------------                    -";
   cout<<endl<<"-     |  1.BAKE A CAKE    |             | 2.CSS SMACKDOWN  |                    -";
   cout<<endl<<"-     |     18 MARCH      |             |   19 MARCH 2023  |                    -";
   cout<<endl<<"-     |    10:40,CL 02    |             |    9:00,CL 02    |                    -";
   cout<<endl<<"-     ---------------------             --------------------                    -";
   cout<<endl<<"-                                                                               -";
   cout<<endl<<"-     ---------------------             --------------------                    -";
   cout<<endl<<"-     |3.FLUTTER FORWARD  |             |4.WEB DEVELOPMENT |                    -";
   cout<<endl<<"-     |  13,14,15 MARCH   |             |  27,28 FEB 2023  |                    -";
   cout<<endl<<"-     |    5:30,CL 01     |             |   6:30,ONLINE    |                    -";
   cout<<endl<<"-     ---------------------             --------------------                    -";
   cout<<endl<<"-                                                                               -";
   cout<<endl<<"- - - - - - - -- - - -- - - - -- - - - - - - -- - - - - -- - - - - - - - - - -  -"<<endl;
   return 7;
}
int JIITOPTICA(){
     cout<<endl<<"- - - - - - - -- - - -- - - - -- - - - - - - -- - - - - -- - - - - - - - - - -  -";
   cout<<endl<<"-                                                                               -"
   <<endl<<"-                               JIIT OPTICA                                     -";
   cout<<endl<<"- - - - - - - -- - - -- - - - -- - - - - - - -- - - - - -- - - - - - - - - - -  -";
   cout<<endl<<"-                                                                               -";
   cout<<endl<<"-     ---------------------             --------------------                    -";
   cout<<endl<<"-     |   1. IDEATHON 2.0 |             |      2.CCC       |                    -";
   cout<<endl<<"-     |      16 APRIL     |             |     15 APRIL     |                    -";
   cout<<endl<<"-     |     1:30,LT-4     |             |     4:20,EL-11   |                    -";
   cout<<endl<<"-     ---------------------             --------------------                    -";
   cout<<endl<<"-                                                                               -";
   cout<<endl<<"-     ---------------------             --------------------                    -";
   cout<<endl<<"-     |  3.SQUID GAME     |             |  4.BLIND CODING  |                    -";
   cout<<endl<<"-     |     16 APRIL      |             |     15 APRIL     |                    -";
   cout<<endl<<"-     |     3:00,JBS      |             |     2:00,CL-1    |                    -";
   cout<<endl<<"-     ---------------------             --------------------                    -";
   cout<<endl<<"-                                                                               -";
   cout<<endl<<"- - - - - - - -- - - -- - - - -- - - - - - - -- - - - - -- - - - - - - - - - -  -"<<endl;
   return 8;
}
int CICE(){
     cout<<endl<<"- - - - - - - -- - - -- - - - -- - - - - - - -- - - - - -- - - - - - - - - - -  -";
   cout<<endl<<"-                                                                               -"
   <<endl<<"-                               CICE                                            -";
   cout<<endl<<"- - - - - - - -- - - -- - - - -- - - - - - - -- - - - - -- - - - - - - - - - -  -";
   cout<<endl<<"-                                                                               -";
   cout<<endl<<"-     ----------------------             --------------------                   -";
   cout<<endl<<"-     |1.PROJECT EXHIBITION|             |2.RIPPER DOC QUEST|                   -";
   cout<<endl<<"-     |      2 MAY         |             |     18 MARCH     |                   -";
   cout<<endl<<"-     |     10:30,JBS      |             |     1:00,G3      |                   -";
   cout<<endl<<"-     ----------------------             --------------------                   -";
   cout<<endl<<"-                                                                               -";
   cout<<endl<<"-     ---------------------              --------------------                   -";
   cout<<endl<<"-     |3.PCB FABRICATION  |              |   4.TECH TALK    |                   -";
   cout<<endl<<"-     |      11 FEB       |              |      10 NOV      |                   -";
   cout<<endl<<"-     |    1:15,IOT LAB   |              |     5:00,LT-3    |                   -";
   cout<<endl<<"-     ---------------------              --------------------                   -";
   cout<<endl<<"-                                                                               -";
   cout<<endl<<"- - - - - - - -- - - -- - - - -- - - - - - - -- - - - - -- - - - - - - - - - -  -"<<endl;
   return 9;
}
int IIC(){
     cout<<endl<<"- - - - - - - -- - - -- - - - -- - - - - - - -- - - - - -- - - - - - - - - - -  -";
   cout<<endl<<"-                                                                               -"
   <<endl<<"-                               IIC                                             -";
   cout<<endl<<"- - - - - - - -- - - -- - - - -- - - - - - - -- - - - - -- - - - - - - - - - -  -";
   cout<<endl<<"-                                                                               -";
   cout<<endl<<"-     ---------------------             --------------------                    -";
   cout<<endl<<"-     | 1.VENTURE VISION  |             | 2.ACRODRONE 1.0  |                    -";
   cout<<endl<<"-     |       9 FEB       |             |       12 JAN     |                    -";
   cout<<endl<<"-     |     4:00,AUDI     |             |    12:00,ONLINE  |                    -";
   cout<<endl<<"-     ---------------------             --------------------                    -";
   cout<<endl<<"-                                                                               -";
   cout<<endl<<"-     ---------------------             --------------------                    -";
   cout<<endl<<"-     | 3.BUSINESS PLAN   |             | 4.INCUBATION 2.0 |                    -";
   cout<<endl<<"-     |       14 DEC      |             |       28 NOV     |                    -";
   cout<<endl<<"-     |     3:00,ONLINE   |             |      5:00,LT-4   |                    -";
   cout<<endl<<"-     ---------------------             --------------------                    -";
   cout<<endl<<"-                                                                               -";
   cout<<endl<<"- - - - - - - -- - - -- - - - -- - - - - - - -- - - - - -- - - - - - - - - - -  -"<<endl;
   return 10;

}int NSSR(){
     cout<<endl<<"- - - - - - - -- - - -- - - - -- - - - - - - -- - - - - -- - - - - - - - - - -  -";
   cout<<endl<<"-                                                                               -"
   <<endl<<"-                               NSS                                             -";
   cout<<endl<<"- - - - - - - -- - - -- - - - -- - - - - - - -- - - - - -- - - - - - - - - - -  -";
   cout<<endl<<"-                                                                               -";
   cout<<endl<<"-     ---------------------             --------------------                    -";
   cout<<endl<<"-     |   1.MENSURATION   |             | 2.BLOOD DONATION |                    -";
   cout<<endl<<"-     |     18 MARCH      |             |      29 SEP      |                    -";
   cout<<endl<<"-     |   10:00,ATRIUM    |             |  10:00,TV ROOM   |                    -";
   cout<<endl<<"-     ---------------------             --------------------                    -";
   cout<<endl<<"-                                                                               -";
   cout<<endl<<"-     ---------------------             --------------------                    -";
   cout<<endl<<"-     | 3.POSTER MAKING   |             | 4.MISSION SHAKTI |                    -";
   cout<<endl<<"-     |     22 APRIL      |             |      8 MARCH     |                    -";
   cout<<endl<<"-     |    3:00,ONLINE    |             |      1:00,OAT    |                    -";
   cout<<endl<<"-     ---------------------             --------------------                    -";
   cout<<endl<<"-                                                                               -";
   cout<<endl<<"- - - - - - - -- - - -- - - - -- - - - - - - -- - - - - -- - - - - - - - - - -  -"<<endl;
   return 11;

}
int ucr(){
     cout<<endl<<"- - - - - - - -- - - -- - - - -- - - - - - - -- - - - - -- - - - - - - - - - -  -";
   cout<<endl<<"-                                                                               -"
   <<endl<<"-                               ucr                                             -";
   cout<<endl<<"- - - - - - - -- - - -- - - - -- - - - - - - -- - - - - -- - - - - - - - - - -  -";
   cout<<endl<<"-                                                                               -";
   cout<<endl<<"-     ---------------------             --------------------                    -";
   cout<<endl<<"-     | 1.BOB THE BUILDER |             |    2. ARCADE     |                    -";
   cout<<endl<<"-     |     18 MARCH      |             |     18 MARCH     |                    -";
   cout<<endl<<"-     |   11:00,ATRIUM    |             |   11:00,ATRIUM   |                    -";
   cout<<endl<<"-     ---------------------             --------------------                    -";
   cout<<endl<<"-                                                                               -";
   cout<<endl<<"-     ---------------------             --------------------                    -";
   cout<<endl<<"-     |     3.SABOTEUR    |             |4.MANUAL ROBOTICS |                    -";
   cout<<endl<<"-     |       15 NOV      |             |      17 OCT      |                    -";
   cout<<endl<<"-     |     5:00,LT-3     |             |   12:00,ABB-1    |                    -";
   cout<<endl<<"-     ---------------------             --------------------                    -";
   cout<<endl<<"-                                                                               -";
   cout<<endl<<"- - - - - - - -- - - -- - - - -- - - - - - - -- - - - - -- - - - - - - - - - -  -"<<endl;
   return 12;

}
void competitions()
{
      cout<<endl<<"- - - - - - - -- - - -- - - - -- - - - - - - -- - - - - -- - - - - - - - - - -  -";
   cout<<endl<<"-                                                                               -";
   cout<<endl<<"-                               COMPETITIONS                                    -";
   cout<<endl<<"- - - - - - - -- - - -- - - - -- - - - - - - -- - - - - -- - - - - - - - - - -  -";
   cout<<endl<<"-                                                                               -";
   cout<<endl<<"-   -----------------------------------------                                   -";
   cout<<endl<<"-   |   1. GDSC HACKATHON, 15-AUG           |                                   -";
   cout<<endl<<"-   -----------------------------------------                                   -";
   cout<<endl<<"-                                                                               -";
   cout<<endl<<"-   -----------------------------------------                                   -";
   cout<<endl<<"-   |   2. ROBOTICS COMPETITIONS,28-OCT     |                                   -";
   cout<<endl<<"-   -----------------------------------------                                   -";
   cout<<endl<<"-                                                                               -";
   cout<<endl<<"-   -----------------------------------------                                   -";
   cout<<endl<<"-   |   3. DEBATE COMPETITION, 5-NOV        |                                   -";
   cout<<endl<<"-   -----------------------------------------                                   -";
   cout<<endl<<"-                                                                               -";
   cout<<endl<<"-   -----------------------------------------                                   -";
   cout<<endl<<"-   |  4. BUSINESS PLAN COMPETITION, 10-DEC |                                   -";
   cout<<endl<<"-   -----------------------------------------                                   -";
   cout<<endl<<"- - - - - - - -- - - -- - - - -- - - - - - - -- - - - - -- - - - - - - - - - - -"<<endl;


}
void workshops()
{
      cout<<endl<<"- - - - - - - -- - - -- - - - -- - - - - - - -- - - - - -- - - - - - - - - - -  -";
   cout<<endl<<"-                                                                               -";
   cout<<endl<<"-                               WORKSHOPS                                       -";
   cout<<endl<<"- - - - - - - -- - - -- - - - -- - - - - - - -- - - - - -- - - - - - - - - - -  -";
   cout<<endl<<"-                                                                               -";
   cout<<endl<<"-   ---------------------------------------------------                         -";
   cout<<endl<<"-   |   1. INTRODUCTION TO MACHINE LEARNING, 15-JUN   |                         -";
   cout<<endl<<"-   ---------------------------------------------------                         -";
   cout<<endl<<"-                                                                               -";
   cout<<endl<<"-   ---------------------------------------------------                         -";
   cout<<endl<<"-   |   2. WEB DEV USING reactJS, 10-JUL              |                         -";
   cout<<endl<<"-   ---------------------------------------------------                         -";
   cout<<endl<<"-                                                                               -";
   cout<<endl<<"-   ---------------------------------------------------                         -";
   cout<<endl<<"-   |   3. BASICS DIGITAL MARKETING, 5-AUG            |                         -";
   cout<<endl<<"-   ---------------------------------------------------                         -";
   cout<<endl<<"-                                                                               -";
   cout<<endl<<"-   ---------------------------------------------------                         -";
   cout<<endl<<"-   |   4. INTRODUCTION TO PYTHON PROGRAMMING, 20-SEP |                         -";
   cout<<endl<<"-   ---------------------------------------------------                         -";
   cout<<endl<<"- - - - - - - -- - - -- - - - -- - - - - - - -- - - - - -- - - - - - - - - - - -"<<endl;

}
void guestlectures()
{
      cout<<endl<<"- - - - - - - -- - - -- - - - -- - - - - - - -- - - - - -- - - - - - - - - - -  -";
   cout<<endl<<"-                                                                               -";
   cout<<endl<<"-                               GUEST LECTURES                                  -";
   cout<<endl<<"- - - - - - - -- - - -- - - - -- - - - - - - -- - - - - -- - - - - - - - - - -  -";
   cout<<endl<<"-                                                                               -";
   cout<<endl<<"-   ----------------------------------------                                    -";
   cout<<endl<<"-   |   1. Shalini Gupta, May 15, 2023     |                                    -";
   cout<<endl<<"-   ----------------------------------------                                    -";
   cout<<endl<<"-                                                                               -";
   cout<<endl<<"-   ----------------------------------------                                    -";
   cout<<endl<<"-   |   2. Vikram Singh,  June 5, 2023     |                                    -";
   cout<<endl<<"-   ---------------------------- -----------                                    -";
   cout<<endl<<"-                                                                               -";
   cout<<endl<<"-   ----------------------------------------                                    -";
   cout<<endl<<"-   |   3. Tanvi Desai, JULY 8,2023        |                                    -";
   cout<<endl<<"-   ----------------------------------------                                    -";
   cout<<endl<<"-                                                                               -";
   cout<<endl<<"-   ----------------------------------------                                    -";
   cout<<endl<<"-   |   4. Rohit Sharma,August 12, 2023    |                                    -";
   cout<<endl<<"-   ----------------------------------------                                    -";
   cout<<endl<<"- - - - - - - -- - - -- - - - -- - - - - - - -- - - - - -- - - - - - - - - - - -"<<endl;


}

int seminars()
{
         cout<<endl<<"- - - - - - - -- - - -- - - - -- - - - - - - -- - - - - -- - - - - - - - - - -  -";
   cout<<endl<<"-                                                                               -";
   cout<<endl<<"-                               SEMINARS                                        -";
   cout<<endl<<"- - - - - - - -- - - -- - - - -- - - - - - - -- - - - - -- - - - - - - - - - -  -";
   cout<<endl<<"-                                                                               -";
   cout<<endl<<"-   ----------------------------                                                -";
   cout<<endl<<"-   |   1. TECHNICAL SEMINAR   |                                                -";
   cout<<endl<<"-   ----------------------------                                                -";
   cout<<endl<<"-                                                                               -";
   cout<<endl<<"-   ----------------------------                                                -";
   cout<<endl<<"-   |   2. INDUSTRY SEMINAR    |                                                -";
   cout<<endl<<"-   ----------------------------                                                -";
   cout<<endl<<"-                                                                               -";
   cout<<endl<<"-   ----------------------------                                                -";
   cout<<endl<<"-   |   3. PROJECT SEMINAR     |                                                -";
   cout<<endl<<"-   ----------------------------                                                -";
   cout<<endl<<"-                                                                               -";
   cout<<endl<<"-   ----------------------------                                                -";
   cout<<endl<<"-   |   4. CAREER SEMINAR      |                                                -";
   cout<<endl<<"-   ----------------------------                                                -";
   cout<<endl<<"- - - - - - - -- - - -- - - - -- - - - - - - -- - - - - -- - - - - - - - - - - -"<<endl;
   return 13;
}
int speakers(){
      cout<<endl<<"- - - - - - - -- - - -- - - - -- - - - - - - -- - - - - -- - - - - - - - - - -  -";
   cout<<endl<<"-                                                                               -";
   cout<<endl<<"-                               SPEAKERS                                        -";
   cout<<endl<<"- - - - - - - -- - - -- - - - -- - - - - - - -- - - - - -- - - - - - - - - - -  -";
   cout<<endl<<"-                                                                               -";
   cout<<endl<<"-   ---------------------------------------------                               -";
   cout<<endl<<"-   |   1. The Future of Artificial Intelligence|                               -";
   cout<<endl<<"-   |      Dr. Rohit Sharma, 15-May-2023        |                               -";
   cout<<endl<<"-   ---------------------------------------------                               -";
   cout<<endl<<"-   ---------------------------------------------                               -";
   cout<<endl<<"-   |   2. The Power of Digital Transformation  |                               -";
   cout<<endl<<"-   |      Ms. Neha Sharma, 1-Aug               |                               -";
   cout<<endl<<"-   ---------------------------------------------                               -";
   cout<<endl<<"-   ---------------------------------------                                     -";
   cout<<endl<<"-   |   3. The Ethics of Biotechnology    |                                     -";
   cout<<endl<<"-   |      Dr. Anjali Singh, 10-sep       |                                     -";
   cout<<endl<<"-   ---------------------------------------                                     -";
   cout<<endl<<"-   ---------------------------------------------                               -";
   cout<<endl<<"-   |   4. Innovations in Sustainable Energy    |                               -";
   cout<<endl<<"-   |       Mr. Akshay Kumar, 7-Nov             |                               -";
   cout<<endl<<"-   ---------------------------------------------                               -";
   cout<<endl<<"- - - - - - - -- - - -- - - - -- - - - - - - -- - - - - -- - - - - - - - - - - -"<<endl;
   return 13;
}

int technical_seminar()
{
      cout<<endl<<"- - - - - - - -- - - -- - - - -- - - - - - - -- - - - - -- - - - - - - - - - -  -";
   cout<<endl<<"-                                                                               -";
   cout<<endl<<"-                      TECHNICAL SEMINAR                                        -";
   cout<<endl<<"- - - - - - - -- - - -- - - - -- - - - - - - -- - - - - -- - - - - - - - - - -  -";
   cout<<endl<<"-                                                                               -";
   cout<<endl<<"-   ------------------------------------------------------------                -";
   cout<<endl<<"-   |   1. AI ML Seminar 2023                                  |                -";
   cout<<endl<<"-   ------------------------------------------------------------                -";
   cout<<endl<<"-                                                                               -";
   cout<<endl<<"-   ------------------------------------------------------------                -";
   cout<<endl<<"-   |   2. Cybersecurity and Blockchain Seminar 2023           |                -";
   cout<<endl<<"-   ------------------------------------------------------------                -";
   cout<<endl<<"-                                                                               -";
   cout<<endl<<"-   ------------------------------------------------------------                -";
   cout<<endl<<"-   |   3. Renewable Energy and Sustainability Seminar 2023    |                -";
   cout<<endl<<"-   ------------------------------------------------------------                -";
   cout<<endl<<"-                                                                               -";
   cout<<endl<<"-   ------------------------------------------------------------                -";
   cout<<endl<<"-   |   4. IoT and Smart Cities Seminar 2023                   |                -";
   cout<<endl<<"-   ------------------------------------------------------------                -";
   cout<<endl<<"- - - - - - - -- - - -- - - - -- - - - - - - -- - - - - -- - - - - - - - - - - -"<<endl;
   return 14;
}

int industry_seminar()
{
      cout<<endl<<"- - - - - - - -- - - -- - - - -- - - - - - - -- - - - - -- - - - - - - - - - -  -";
   cout<<endl<<"-                                                                               -";
   cout<<endl<<"-                      INDUSTRY SEMINAR                                         -";
   cout<<endl<<"- - - - - - - -- - - -- - - - -- - - - - - - -- - - - - -- - - - - - - - - - -  -";
   cout<<endl<<"-                                                                               -";
   cout<<endl<<"-   ------------------------------------------------------------------------    -";
   cout<<endl<<"-   |   1. Digital Transformation in Manufacturing Industry Seminar 2023   |    -";
   cout<<endl<<"-   ------------------------------------------------------------------------    -";
   cout<<endl<<"-                                                                               -";
   cout<<endl<<"-   ------------------------------------------------------------------------    -";
   cout<<endl<<"-   |   2. Emerging Trends in Retail Industry                              |    -";
   cout<<endl<<"-   ------------------------------------------------------------------------    -";
   cout<<endl<<"-                                                                               -";
   cout<<endl<<"-   ------------------------------------------------------------------------    -";
   cout<<endl<<"-   |   3. Healthcare Innovation and Technology                            |    -";
   cout<<endl<<"-   ------------------------------------------------------------------------    -";
   cout<<endl<<"-                                                                               -";
   cout<<endl<<"-   ------------------------------------------------------------------------    -";
   cout<<endl<<"-   |   4. Sustainable Agriculture and Food Industry                       |    -";
   cout<<endl<<"-   ------------------------------------------------------------------------    -";
   cout<<endl<<"- - - - - - - -- - - -- - - - -- - - - - - - -- - - - - -- - - - - - - - - - - -"<<endl;
   return 14;
}


int project_seminar()
{
      cout<<endl<<"- - - - - - - -- - - -- - - - -- - - - - - - -- - - - - -- - - - - - - - - - -  -";
   cout<<endl<<"-                                                                               -";
   cout<<endl<<"-                      PROJECT SEMINAR                                          -";
   cout<<endl<<"- - - - - - - -- - - -- - - - -- - - - - - - -- - - - - -- - - - - - - - - - -  -";
   cout<<endl<<"-                                                                               -";
   cout<<endl<<"-   ------------------------------------------------------------                -";
   cout<<endl<<"-   |   1. National Project Exhibition and Competition (NPEC)  |                -";
   cout<<endl<<"-   ------------------------------------------------------------                -";
   cout<<endl<<"-                                                                               -";
   cout<<endl<<"-   ------------------------------------------------------------                -";
   cout<<endl<<"-   |   2. India Career Summit                                 |                -";
   cout<<endl<<"-   ------------------------------------------------------------                -";
   cout<<endl<<"-                                                                               -";
   cout<<endl<<"-   ------------------------------------------------------------                -";
   cout<<endl<<"-   |   3. Project Expo                                        |                -";
   cout<<endl<<"-   ------------------------------------------------------------                -";
   cout<<endl<<"-                                                                               -";
   cout<<endl<<"-   ------------------------------------------------------------                -";
   cout<<endl<<"-   |   4. National Career Service (NCS) Job Fairs             |                -";
   cout<<endl<<"-   ------------------------------------------------------------                -";
   cout<<endl<<"- - - - - - - -- - - -- - - - -- - - - - - - -- - - - - -- - - - - - - - - - - -"<<endl;
   return 16;
}

int career_seminar()
{
      cout<<endl<<"- - - - - - - -- - - -- - - - -- - - - - - - -- - - - - -- - - - - - - - - - -  -";
   cout<<endl<<"-                                                                               -";
   cout<<endl<<"-                       CAREER SEMINAR                                          -";
   cout<<endl<<"- - - - - - - -- - - -- - - - -- - - - - - - -- - - - - -- - - - - - - - - - -  -";
   cout<<endl<<"-                                                                               -";
   cout<<endl<<"-   -------------------------------------                                       -";
   cout<<endl<<"-   |   1. Career Launcher Conclave     |                                       -";
   cout<<endl<<"-   -------------------------------------                                       -";
   cout<<endl<<"-                                                                               -";
   cout<<endl<<"-   -------------------------------------                                       -";
   cout<<endl<<"-   |   2. Mindler Career Fest          |                                       -";
   cout<<endl<<"-   -------------------------------------                                       -";
   cout<<endl<<"-                                                                               -";
   cout<<endl<<"-   -------------------------------------                                       -";
   cout<<endl<<"-   |   3. TimesJobs Career Conclave    |                                       -";
   cout<<endl<<"-   -------------------------------------                                       -";
   cout<<endl<<"-                                                                               -";
   cout<<endl<<"-   -------------------------------------                                       -";
   cout<<endl<<"-   |   4. Career Conclave              |                                       -";
   cout<<endl<<"-   -------------------------------------                                       -";
   cout<<endl<<"- - - - - - - -- - - -- - - - -- - - - - - - -- - - - - -- - - - - - - - - - - -"<<endl;
   return 17;
}




void campuschoice(int loop){
     LOOP:do{
     int choice1;
    intro();
   cout<<"enter your choice:";
   cin>> choice1;
   system("cls");
   if (choice1==1){
        frontpage();
        loop=0;

   }
   else if(choice1==2){
        frontpage();
        loop=0;

   }
   else {
        cout<<"ERROR!  only choice between 1 and 2!!!!"<<endl;
        goto LOOP;
   }}
   while (loop);

}
int frontpagechoice(int loop){            //front page page in which you choose the type of info you want;
     int numreturn;
     LOOP1:do{
        system("cls");
     frontpage();
    int choice2;
   cout<<"enter you choice:";
   cin>>choice2;
   system("cls");
   if (choice2==1){
        loop=0;
        return choice2;
        //system("cls");
   }
   else if(choice2==2){
        loop=0;
        return choice2;
        //system("cls");
   }
   else if(choice2==3){
        loop=0;
        return choice2;
        //system("cls");
   }
     //seminar
   else if(choice2==4){
        loop=0;
        return choice2;
        //system("cls");
   }
   else if(choice2==99){                       //menuoption for front page
     menu();
     cin.ignore();
     system("pause");
     system("cls");
     goto LOOP1;
   }
     else if(choice2==0){
       cout<<"THIS IS THE FIRST PAGE.CANNOT GO BACK";        //back option for front page
     }
       else if (choice2==404){
         string finalchoice;
         cout<<"                         "<<
        endl<<"                         "<<
        endl<<"                         "<<                  //exit option for front page
        endl<<"                         "<<
        endl<<"                         "<<
        endl<<"     DO YOU WANT TO EXIT: ";
        cin>>finalchoice;
     if (finalchoice=="yes"||finalchoice=="YES"){
         exit();                                    //for exiting
     }
     else{

          continue;
     }
     }
   else{
        cout<<"ERROR! CHOOSE BETWEEN 1 TO 4"<<endl;
        system("pause");
        goto LOOP1;

   }
   }
   while(loop);
}
// file handling for event
void eventchoice1(int loop, int eventchoice1){
    string competitions1[4] =  {"competition1.txt", "competition2.txt","competition3.txt","competition4.txt"};
    string workshops1[4] = {"workshop1.txt", "workshop2.txt","workshop3.txt","workshop4.txt"};
    string guestlectures1[4] = {"guestlecture1.txt","guestlecture2.txt","guestlecture3.txt","guestlecture4.txt"};
    string *filenames;
    int numFiles;

    if (eventchoice1== 1) {
        filenames = competitions1;
        numFiles = 4;
    } else if (eventchoice1 == 2) {
        filenames = workshops1;
        numFiles = 4;
    }
     else if (eventchoice1== 3) {
        filenames = guestlectures1;
        numFiles = 4;
    }
    else {
        cout << "ERROR! Invalid event choice!" << endl;
        system("pause");
        return;
    }

    LOOP5:do {
        int choice3;
        cout << "Enter the event choice for more details: ";
        cin >> choice3;
        system("cls");
        if (choice3 >= 1 && choice3 <= numFiles) {
            string line;
            ifstream fin(filenames[choice3 - 1]);
            while (getline(fin, line)) {
                cout << line << endl;
            }
            fin.close();
           string choice;
           cout<<endl;
            cout<<"Do you want to register YES or NO :";
            cin>>choice;
            if (choice=="yes"||choice=="YES"){
           studentregistry();
           system("cls");
           exit();
            loop = 0;                                //for student registry
     }
     else{
            system("cls");
            exit();
            loop = 0;

     }
        }else if(choice3==99){
     menu();                                     //menuoption
     cin.ignore();
     system("pause");
     system("cls");
     goto LOOP5;
   }
   else if (choice3==0){
     }
      else if (choice3==404){
        string finalchoice;

        cout<<"                         "<<
        endl<<"                         "<<
        endl<<"                         "<<
        endl<<"                         "<<
        endl<<"                         "<<
        endl<<"     DO YOU WANT TO EXIT: ";
        cin>>finalchoice;
     if (finalchoice=="yes"||finalchoice=="YES"){
         exit();                                    //for exiting
     }
     else{
          continue;
     }
     }
      else {
            cout << "ERROR! Only choices between 1 and " << numFiles << " are allowed!" << endl;
            system("pause");
            system("cls");
            if (eventchoice1==1){
                competitions();
            }
            else if (eventchoice1==2){
                workshops();
            }
           else if (eventchoice1==3){
                guestlectures();
            }

        }
    } while (loop);
}

int eventchoice(int loop){
       LOOP3:do{
        system("cls");
        events();
       int choice4;
       cout<<"enter your choice";
       cin>>choice4;
       system("cls");
       if(choice4==1){
       competitions();
       eventchoice1(loop,1);
        loop=0;
        return choice4;
        //system("cls")
       }
       else if(choice4==2){
            workshops();
        eventchoice1(loop,2);
        return choice4;
        loop=0;
        //system("cls")
       }
       else if(choice4==3){
            guestlectures();
        eventchoice1(loop,3);
        loop=0;
        return choice4;
        //system("cls")
       }
    else if (choice4==0){             //backoption
        //   frontpagechoice(loop);
        //   break;
        //   loop=8;

       }
        else if(choice4==99){            //menuoption
     menu();
     cin.ignore();
     system("pause");
     system("cls");
     events();
     goto LOOP3;
   }
    else if (choice4==404){
         string finalchoice;
          cout<<"                         "<<
        endl<<"                         "<<
        endl<<"                         "<<
        endl<<"                         "<<
        endl<<"                         "<<
        endl<<"     DO YOU WANT TO EXIT: ";
        cin>>finalchoice;
     if (finalchoice=="yes"||finalchoice=="YES"){
         exit();                                    //for exiting
     }
     else{
          continue;
     }
    }
         else {
        cout<<"ERROR!  only choice between 1 and 3!!!!"<<endl;
        system("pause");
        goto LOOP3;
         }
   }
    while(loop);
}
//file handling for hubs
int hubchoice1(int loop, int hubchoice1){
    string GDSCfiles[4] = {"GDSC_1.txt", "GDSC_2.txt", "GDSC_3.txt", "GDSC_4.txt"};
    string JIITOPTICAfiles[4] = {"JIITOPTICA_1.txt", "JIITOPTICA_2.txt", "JIITOPTICA_3.txt", "JIITOPTICA_4.txt"};
    string CICEfiles[4] = {"CICE_1.txt", "CICE_2.txt", "CICE_3.txt", "CICE_4.txt"};
    string IICfiles[4] = {"IIC_1.txt", "IIC_2.txt", "IIC_3.txt", "IIC_4.txt"};
    string NSSRfiles[4] = {"NSSR_1.txt", "NSSR_2.txt", "NSSR_3.txt", "NSSR_4.txt"};
    string ucrfiles[4] = {"UCR_1.txt", "UCR_2.txt", "UCR_3.txt", "UCR_4.txt"};
    string *filenames;
    int numFiles;

    if (hubchoice1 == 1) {
        filenames = GDSCfiles;
        numFiles = 4;
    } else if (hubchoice1 == 2) {
        filenames = JIITOPTICAfiles;
        numFiles = 4;
    } else if (hubchoice1 == 3) {
        filenames = CICEfiles;
        numFiles = 4;
    } else if (hubchoice1 == 4) {
        filenames = IICfiles;
        numFiles = 4;
    } else if (hubchoice1 == 5) {
        filenames = NSSRfiles;
        numFiles = 4;
    } else if (hubchoice1 == 6) {
        filenames = ucrfiles;
        numFiles = 4;
    } else {
        cout << "ERROR! Invalid hub choice!" << endl;
        system("pause");
        return 0;
    }

    LOOP5:do {

        int choice4;
        cout << "Enter your choice for more details: ";
        cin >> choice4;
        system("cls");
        if (choice4 >= 1 && choice4 <= numFiles) {
            string line;
            ifstream fin(filenames[choice4 - 1]);
            while (getline(fin, line)) {
                cout << line << endl;
            }
            fin.close();
           string choice;
           cout<<endl;
            cout<<"Do you want to register YES or NO :";
            cin>>choice;
            if (choice=="yes"||choice=="YES"){
           studentregistry();
           system("cls");
           exit();
            loop = 0;                                //for student registry
     }
     else{
            system("cls");
            exit();
            loop = 0;

     }
        } else if(choice4==99){
     menu();                                     //menuoption
     cin.ignore();
     system("pause");
     system("cls");
     goto LOOP5;
   }
   else if (choice4==0){
     }
      else if (choice4==404){
        string finalchoice;
        cout<<"                         "<<
        endl<<"                         "<<
        endl<<"                         "<<
        endl<<"                         "<<
        endl<<"                         "<<
        endl<<"     DO YOU WANT TO EXIT: ";
        cin>>finalchoice;
     if (finalchoice=="yes"||finalchoice=="YES"){
         exit();                                    //for exiting
     }
     else{
          continue;
     }
     }
      else {
            cout << "ERROR! Only choices between 1 and " << numFiles << " are allowed!" << endl;
             system("pause");
            system("cls");
            if(hubchoice1==1)
                GDSC();
            else if(hubchoice1==2)
                JIITOPTICA();
            else if(hubchoice1==3)
                CICE();
            else if(hubchoice1==4)
                IIC();
            else if(hubchoice1==5)
                NSSR();
            else if(hubchoice1==6)
                ucr();
        }
    } while (loop);

    return 0;
}

int hubchoice(int loop){
LOOP2:do{
       int choice3;
       system("cls");
       hubs();
       cout<<"enter the choice :";
       cin>>choice3;
        system("cls");
       if(choice3==1){
        GDSC();
        hubchoice1(loop,1);
        loop=0;
        return choice3;
        //system("cls");
       }
       else if(choice3==2){
        JIITOPTICA();
        hubchoice1(loop,2);
        loop=0;
         return choice3;
        //system("cls");
       }
       else if(choice3==3){
        CICE();
        hubchoice1(loop,3);
        loop=0;
         return choice3;
        //system("cls");
       }
       else if(choice3==4){
        IIC();
        hubchoice1(loop,4);
        loop=0;
         return choice3;
        //system("cls");
       }
       else if(choice3==5){
        NSSR();
        hubchoice1(loop,5);
        loop=0;
         return choice3;
        //system("cls");
       }
       else if(choice3==6){
         ucr();
        hubchoice1(loop,6);
        loop=0;
         return choice3;
        //system("cls");
       } else if(choice3==99){
     menu();
     cin.ignore();                                    //menuoption
     system("pause");
     system("cls");
     goto LOOP2;
   }
    else if(choice3==404){
     string finalchoice;
     cout<<"                         "<<
        endl<<"                         "<<
        endl<<"                         "<<
        endl<<"                         "<<
        endl<<"                         "<<
        endl<<"     DO YOU WANT TO EXIT: ";
        cin>>finalchoice;
     if (finalchoice=="yes"||finalchoice=="YES"){
         exit();                                    //for exiting
     }
     else{
          continue;
     }
    }
   else if (choice3==0){
          system("xdotool key alt+Left");
       }
       else {
        cout<<"ERROR!  only choice between 1 and 6!!!!"<<endl;
        system("pause");
        goto LOOP2;
   }
   }
   while(loop);
}
//speakers

void speakerdata(int loop) {
    string speakerfilehandling[]={"speaker1.txt","speaker2.txt","speaker3.txt","speaker4.txt"};
    string *filenames;
    filenames=speakerfilehandling;
     LOOP5:do {
        int choice4;
        speakers();
        cout << "Enter your choice for more details: ";
        cin >> choice4;

        system("cls");
        if (choice4 >= 1 && choice4 <= 4) {
            string line;
            ifstream fin(filenames[choice4 - 1]);
            while (getline(fin, line)) {
                cout << line << endl;
            }
            fin.close();
            string choice;
            cout<<endl;
            cout<<"Do you want to enroll for the speaker's event YES or NO :";
            cin>>choice;
            if (choice=="yes"||choice=="YES"){
           studentregistry();
           system("cls");
           exit();
            loop = 0;                                //for student registry
     }
     else{
            system("cls");
            exit();
            loop = 0;

     }

        }else if(choice4==99){
     menu();                                     //menuoption
     cin.ignore();
     system("pause");
     system("cls");
     goto LOOP5;
   }
   else if (choice4==0){
     }
      else if (choice4==404){
        string finalchoice;

        cout<<"                         "<<
        endl<<"                         "<<
        endl<<"                         "<<
        endl<<"                         "<<
        endl<<"                         "<<
        endl<<"     DO YOU WANT TO EXIT: ";
        cin>>finalchoice;
     if (finalchoice=="yes"||finalchoice=="YES"){
         exit();                                    //for exiting
     }
     else{
          continue;
     }
     }
      else {
            cout << "ERROR! Only choices between 1 and 4 are allowed!" << endl;
            system("pause");
            system("cls");
        }
    } while (loop);
}


// file handling for seminar

void seminar1(int loop, int seminarschoice) {
    string technical[4] =  {"technical1.txt", "technical2.txt", "technical3.txt", "technical4.txt"};
    string industry[4] = {"industry1.txt", "industry2.txt", "industry3.txt", "industry4.txt"};
    string project[4] = {"project1.txt", "project2.txt", "project3.txt", "project4.txt"};
    string career[4] = {"career1.txt", "career2.txt", "career3.txt", "career4.txt"};

    string *filenames;
    int numFiles;

    if (seminarschoice == 1) {
        filenames = technical;
        numFiles = 4;
    } else if (seminarschoice == 2) {
        filenames = industry;
        numFiles = 4;
    }
     else if (seminarschoice == 3) {
        filenames = project;
        numFiles = 4;
    }
     else if (seminarschoice == 4) {
        filenames = career;
        numFiles = 4;
    }
    else {
        cout << "ERROR! Invalid seminar choice!" << endl;
        system("pause");



    }

    LOOP5:do {
        int choice4;
        cout << "Enter your choice for more details: ";
        cin >> choice4;
        system("cls");
        if (choice4 >= 1 && choice4 <= numFiles) {
            string line;
            ifstream fin(filenames[choice4 - 1]);
            while (getline(fin, line)) {
                cout << line << endl;
            }
            fin.close();
            string choice;
            cout<<endl;
            cout<<"Do you want to register YES or NO :";
            cin>>choice;
            if (choice=="yes"||choice=="YES"){
           studentregistry();
           system("cls");
           exit();
            loop = 0;                                  //for student registry
     }
     else{
            system("cls");
           exit();
            loop = 0;

     }
        }else if(choice4==99){
     menu();                                     //menu option
     cin.ignore();
     system("pause");
     system("cls");
     goto LOOP5;
   }
   else if (choice4==0){
     }
      else if (choice4==404){
        string finalchoice;

        cout<<"                         "<<
        endl<<"                         "<<
        endl<<"                         "<<
        endl<<"                         "<<
        endl<<"                         "<<
        endl<<"     DO YOU WANT TO EXIT: ";
        cin>>finalchoice;
     if (finalchoice=="yes"||finalchoice=="YES"){
         exit();                                    //for exiting
     }
     else{
          continue;
     }
     }
      else {
            cout << "ERROR! Only choices between 1 and " << numFiles << " are allowed!" << endl;
            system("pause");
            system("cls");
            if (seminarschoice==1)
            {
                technical_seminar();
            }
            else if (seminarschoice==2)
            {
                industry_seminar();
            }
            else if (seminarschoice==3)
            {
                project_seminar();
            }
            else if (seminarschoice==4)
            {
                career_seminar();
            }
        }
    } while (loop);
}

// seminarchoice
int seminarchoice(int loop)
{
    LOOP5:do{
    system("cls");
    seminars();
    int choiceseminar;
   cout<<"enter you choice:";
   cin>>choiceseminar;
   system("cls");
   if (choiceseminar==1){
         technical_seminar();
         seminar1(loop,1);
        loop=0;
        return choiceseminar;              //technical seminar
        //system("cls");
   }
   else if(choiceseminar==2){
        industry_seminar();
        seminar1(loop,2);
        loop=0;
         return choiceseminar;                 //industry seminar
        //system("cls");
   }
   else if(choiceseminar==3){
         project_seminar();
         seminar1(loop,3);
        loop=0;
         return choiceseminar;                  //project seminar
        //system("cls");
   }
   else if(choiceseminar==4){
         career_seminar();
         seminar1(loop,4);
        loop=0;
         return choiceseminar;                   //career seminar
        //system("cls");
   }
      else if(choiceseminar==99){
     menu();                                     //menuoption
     cin.ignore();
     system("pause");
     system("cls");
     goto LOOP5;
   }
   else if (choiceseminar==0){
     }
      else if (choiceseminar==404){
        string finalchoice;

        cout<<"                         "<<
        endl<<"                         "<<
        endl<<"                         "<<
        endl<<"                         "<<
        endl<<"                         "<<
        endl<<"     DO YOU WANT TO EXIT: ";
        cin>>finalchoice;
     if (finalchoice=="yes"||finalchoice=="YES"){
         exit();                                    //for exiting
     }
     else{
          continue;
     }
     }
   else{
        cout<<"ERROR! CHOOSE BETWEEN 1 TO 4"<<endl;
        system("pause");
        goto LOOP5;

   }

   }
      while (loop);

}



int main(){
int eventdatachoice,seminardatachoice,speakerdatachoice,hubdatachoice;
    //page 1
    int loop=1;
    start();
    system("pause");
    //campuschoice(loop);
   //system("cls");
   system("cls");
    menu();
    cin.ignore();
    //campuschoice(loop);
   //system("cls");
   system("cls");
    int controlflow=frontpagechoice(loop);

    if (controlflow==1){
      eventdatachoice=eventchoice(loop);
    }
     else if (controlflow==2){
      hubdatachoice=hubchoice(loop);
    }
    else if (controlflow==3){
      speakerdata(loop);
    }
     else if (controlflow==4){
      seminardatachoice=seminarchoice(loop);
    }
}
