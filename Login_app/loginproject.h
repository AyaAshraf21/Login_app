#ifndef LOGINPROJECT_H
#define LOGINPROJECT_H
#include<bits/stdc++.h>
#include <conio.h>
#include <QDataStream>
#include <QString>

using namespace std;


class LoginProject
{
private:
    string name;
    string password;
    string email;
    string id;
    string phone_number;
    map<string, LoginProject>mp;

public:
    LoginProject();
    map<string , LoginProject> getmp();
    bool valid_email(string email);
    bool valid_phone_number(string phone_number);
    bool valid_username(string name);
    void copy_file_contents_to_text(string& text, string filename);
    bool isFound(string filename, string searched_word);
    bool checked_password(string password);
    void check_ascii(int ascii_before, int& ascii_after);
    string Encryption(string pass);
    string Decryption(string pass);
    bool get_id(string id);
    bool get_Username(string username);
    bool get_Email(string email);
    bool get_Phone_number(string phone);
    bool repeated_password(string password , string repeat);
    void input(LoginProject& user1 , string name , string email , string phone , string password);
    bool registeration1(string id);
    void registeration2 (string name , string email , string phone , string password , string id);
    void read_file();
    void copy_text_content_to_file(string text, string filename);
    bool check_login( string ID , string password);
    void update_data_file(string ID, string new_password);
    bool change_password(string new_password , string repeated);
    friend ostream& operator<<(ostream& out, LoginProject& user1);
    friend QDataStream &operator>>(QDataStream &in , LoginProject &user1);
    string getname ();
    string getpassword();
    string getemail();
    string getid();
    string getphone();
    void setname(string n);
    void setpassword(string p);
    void setemail(string e);
    void setid(string i);
    void setphone(string ph);
};

#endif // LOGINPROJECT_H
