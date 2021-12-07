#include <iostream>
#include <string>
#include <vector>

int operation(int & a,int & b,std::string & c){
    if(c == "+"){
        return a+b; }
    else if(c == "-"){
        return a-b; }
    else if(c == "x"){
        return a*b; }
    else if(c == "/"){
        return a/b;
} return 0 ;}


int main(int argc, char** argv){
int counter = 3;
int res;
std::vector<int> pile;
pile.push_back(std::stoi(argv[1]));
pile.push_back(std::stoi(argv[2]));
int lenpile= 2;
for(counter = 3; counter < (argc); counter++)
{
    std::string c = argv[counter];
    if( (c == "+")||(c == "-")||(c == "x")||(c == "/") )
    {
        res = operation(pile[lenpile-2], pile[lenpile-1], c);
    pile.pop_back();
            pile.pop_back();
pile.push_back(res);
lenpile = lenpile - 1 ;
    }
    else{ pile.push_back(std::stoi(argv[counter])); lenpile = lesnpile + 1 ;} }

std::cout << pile[0] << std::endl ;
return 0;}
