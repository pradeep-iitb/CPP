#include<iostream>

using namespace std;

int main()
{
    cout<<"Pradeep\nKumawat"<< endl ;
    int age = 18 ; // integer occupy 4 byte
    char lett = 'A' ; // char has a single letter with 1 byte namespace
    float PI = 3.14f ; // if f is not there PI is considered as double 4 byte space
    bool back = true ;// memory 1 byte but when printed gives 0 or 1 
    double price = 100.999 ;// memory 8 byte
    
    char grade = 'A' ;
    int value = grade ; // typecasting > conversion (implicit) small in big
    int isPrice = (int)price ;
    
    cout<< age <<" " << lett <<" " << PI <<endl;
    cout << value << " " << isPrice << endl ;
    
    // int Age ;
    // cout << "Enter your Age :" ;
    // cin >> Age ;
    // cout << "Your Age is "<< Age << endl;
    
    int a=10 , b=5 ;
    cout << (a+b) <<endl;
    //if int divide by int result is always int and if two diff like int divide by float 
    //result is bigger preciser type like float or double
    cout << (2<5) << endl ;
    
    //logical operator or || , and ampersand && , not !
    cout << (2<6 || 3>4) << endl;
    
    int c = 10 ;
    int d = c++ ;
    int e = ++c ;
    cout << d << endl ; //10
    cout << e << endl ; //12
    int f = 10 ;
    int h = ++f ;
    int g = f++ ;
    cout << g << endl ; //11
    cout << h << endl ; //11
    return 0;
}
