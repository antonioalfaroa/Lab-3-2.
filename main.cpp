#include <iostream>

using namespace std;

class Student{

private:
int studentnumber;
string studentname;
double studentaverage;



public:
Student(){
  studentnumber = 0;
  studentname = " ";
  studentaverage = 0.0;
}

void setNumber(int num){
studentnumber = num;
}
void setName(string na){
studentname = na;
}
void setAverage(double ave){
studentaverage = ave;
}

int getNumber(){
return studentnumber;
}
string getName(){
return studentname;
}
double getAverage(){
return studentaverage;
}

void print(){
  cout<<"Student number : "<<getNumber()<<endl;
  cout<<"Student name : "<<getName()<<endl;
  cout<<"Student average : "<<getAverage()<<endl;
}
};

class graduatestudent: public Student{
private:
int level;
int year;

public:
graduatestudent(){
  level = 0;
  year = 0;
}
void setLevel(int lev){
  level = lev;
}
void setYear(int yea){
  year = yea;
}
int getLevel(){
  return level;
}
int getYear(){
  return year;
}
void printGrad(){
  cout<<"Student year : "<<getYear()<<endl;
  cout<<"Student level : "<<getLevel()<<endl;
}
};

class master: public graduatestudent{
private: 
int newid;


public:
master(){
  newid = 0;
}
void setId(int id){
  newid = id;
}
int getId(){
  return newid;

}
void printMaster(){
  cout<<"newId : "<<getId()<<endl;
}

};

int main(){
Student stud;
  stud.setNumber(2);
  stud.setName("Mother's Milk");
  stud.setAverage(97.4);
  stud.print();
graduatestudent grad;
  grad.setYear(2001);
  grad.setLevel(2);
  grad.printGrad();
master mast;
  mast.setId(10);
  mast.printMaster();



  
}

