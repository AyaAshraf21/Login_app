#include "loginproject.h"
#include <bits/stdc++.h>
#include <QMessageBox>
#include <QFile>
#include <QTextStream>

using namespace std;

LoginProject::LoginProject(){}

map<string , LoginProject> LoginProject :: getmp(){
    return mp;
}
void LoginProject::setname(string n){
    name = n;
}

void LoginProject::setpassword(string p){
    password = p;
}

void LoginProject::setemail(string e){
    email = e;
}

void LoginProject::setid(string i){
    id = i;
}

void LoginProject::setphone(string ph){
    phone_number = ph;
}

string LoginProject::getname (){
    return name;
}

string LoginProject::getpassword(){
    return password;
}

string LoginProject::getemail(){
    return email;
}

string LoginProject::getid(){
    return id;
}

string LoginProject::getphone(){
    return phone_number;
}


bool LoginProject::valid_username(string name)
{
    regex valid_username("[a-zA-Z]*[_]*[a-zA-Z]*");
    return regex_match(name, valid_username);
}



bool LoginProject::valid_phone_number(string phone_number)
{
    regex valid_phone_number("(01)[0,1,2,5][0-9][0-9][0-9][0-9][0-9][0-9][0-9][0-9]");
    return regex_match(phone_number, valid_phone_number);
}



bool LoginProject::valid_email(string email)
{
    regex valid_email("[[:w:]]+@[[:w:]]+\\.com");
    return regex_match(email, valid_email);
}


void LoginProject::copy_file_contents_to_text(string& text, string filename)
{

    fstream File;
    filename += ".txt";
    File.open(filename, ios::in);
    string tmp;
    while(File >> tmp){
        text += tmp + ' ';
    }

    File.close();

}



bool LoginProject::isFound(string filename, string searched_word)
{
    string text = "";
    copy_file_contents_to_text(text, filename);
    string scanned_text = "";

    for (int i = 0; i < text.size(); i++)
    {
        if (text[i] == ' ')
        {
            if (scanned_text == searched_word)
                return true;

            scanned_text = "";
            continue;
        }

        else
            scanned_text += text[i];

    }

    return false;
}



bool LoginProject::checked_password(string password)
{

    regex upper_case{ "[A-Z]+" };
    regex lower_case{ "[a-z]+" };
    regex number{ "[0-9]+" };
    regex special_char{ "[@!$%^&?*#]+" };
    int sum = 0;
    bool done = true;

    if (password.length() < 8 || password.length() > 32){
        done = false;
    }
    else
    {
        if (regex_search(password, upper_case))
            sum += 1;
        if (regex_search(password, lower_case))
            sum += 1;
        if (regex_search(password, number))
            sum += 1;
        if (regex_search(password, special_char))
            sum += 1;


        if (sum == 4)
            done = true;

        else{
            done = false;
          }
    }
    return done;
}




void LoginProject::check_ascii(int ascii_before, int& ascii_after)
{
    if (isupper(ascii_before))
    {
        //if it exceeds Z it returns to A
        if (ascii_after > 90)
            ascii_after = 64 + (ascii_after - 90);

        //if it is lower than A, it continues from Z
        //at shifting in the left direction
        if (ascii_after < 65)
            ascii_after = 91 - (65 - ascii_after);
    }


    if (islower(ascii_before))
    {
        //if it exceeds z it returns to a
        if (ascii_after > 122)
            ascii_after = 96 + (ascii_after - 122);

        //if it is lower than a, it continues from z
        //at shifting in the left direction
        if (ascii_after < 97)
            ascii_after = 123 - (97 - ascii_after);


    }
}


string LoginProject::Encryption(string pass)
{
    string encrypted;

    for (char ch : pass)
    {
        // 2 shifts forward to encrypt

        int ascii_after = int(ch) + 2;

        //check_ascii(int(ch), ascii_after);

        ch = char(ascii_after);
        encrypted += ch;
    }

    pass = encrypted;
    return pass;
}



string LoginProject::Decryption(string pass)
{
    string decrypted;

    for (char ch : pass)
    {
        // 2 shifts backward to decrypt

        int ascii_after = int(ch) - 2;

        //check_ascii(int(ch), ascii_after);

        ch = char(ascii_after);
        decrypted += ch;
    }

    pass = decrypted;
    return pass;
}




bool LoginProject::get_Username(string username)

{
    bool valid = false;


    if (valid_username(username) && !isFound("Data", username))
        valid = true;

    else
       valid = false;

    return valid;
}



bool LoginProject::get_Email(string email)
{
    bool valid = false;
    if (valid_email(email) && !isFound("Data", email))
        valid = true;

    else
        valid = false;
    return valid;
}



bool LoginProject::get_Phone_number(string phone)
{
    bool valid = false;


    if (valid_phone_number(phone) && !isFound("Data", phone))
        valid = true;

    else
        valid = false;

    return valid;
}



bool LoginProject::repeated_password(string password , string repeat)
{
    bool valid = false;
    if (password != repeat)
        valid = false;
    else
       valid = true;

    return valid;
}


ostream& operator<<(ostream& out, LoginProject& user1)
{

    out << user1.getname() << ' ' << user1.getemail() << ' ' << user1.getphone() << ' ' << user1.getpassword() << '\n';
    return out;
}




void LoginProject::input(LoginProject& user1 , string name , string email , string phone , string password)
{
    user1.setname(name) ;
    user1.setemail(email) ;
    user1.setphone(phone);
    user1.setpassword(Encryption(password)) ;
}

bool LoginProject::get_id(string id)
{
    bool valid = false;
    int checked = 0;

    for (char num : id)
    {
        if (isdigit(num))
            checked++;
    }

    if (checked == id.length())
        valid = true;

    else
        valid = false;

    return valid;
}



bool LoginProject::registeration1(string id)
{
    bool done = false ;
    fstream datafile;
    datafile.open("Data.txt", ios::app);
    map<string, LoginProject> mp;
    map<string, LoginProject>::iterator it;
    LoginProject user1;

    if (isFound("Data", id))
        done = true;
    else
        done = false;

    return done;
}


void LoginProject::registeration2 (string name , string email , string phone , string password , string id){
     fstream datafile;
     datafile.open("Data.txt", ios::app);
     map<string, LoginProject> mp;
     map<string, LoginProject>::iterator it;
     LoginProject user1;
     input(user1,name , email , phone , password );
     mp[id] = user1;


    for (it = mp.begin(); it != mp.end(); it++)
    {
        datafile << it->first << " "<<it->second;
    }

    datafile.close();

}






void LoginProject::read_file()
{
    ifstream datafile;
    datafile.open("Data.txt", ios::in);
    LoginProject user1;
    while (!datafile.eof())
    {
        datafile >> user1.id >> user1.name>> user1.email>>user1.phone_number>>user1.password;
        user1.password = Decryption(user1.password);
        mp.insert({ user1.id, user1 });
    }

    datafile.close();
}








void LoginProject::copy_text_content_to_file(string text, string filename)
{
    ofstream File;
    filename += ".txt";
    File.open(filename, ios::out);
    File << text;
    File.close();
}



bool LoginProject::check_login(string ID , string password)
{
    read_file();
    bool pass_found = false;
    LoginProject user1;
    map<string, LoginProject>::iterator it;


    for (it = mp.find(ID); it != mp.end(); it++)
    {
            if (password == it->second.password)
            {
                pass_found = true;
            }

        }
    return pass_found;

}



void LoginProject::update_data_file (string ID, string new_password)
{
    auto it = mp.find(ID);
    if(it != mp.end()){
        it->second.password = new_password;
    }
    QTextStream out (stdout);
    ofstream outFile ("Data.txt");
    for(auto it = mp.begin() ; it!= mp.end() ; it++){
        outFile<<it->first <<" "<<it->second.name<<" "<<it->second.email<<" "<<it->second.phone_number<<" "<<Encryption(it->second.password)<<endl;
    }
    outFile.close();

}



bool LoginProject::change_password(string new_password , string repeated)
{
    read_file();
    bool done = false;
    if(checked_password(new_password) and repeated_password(new_password , repeated)){
        done = true;
    }
    else
        done = false ;
    return done;

}















