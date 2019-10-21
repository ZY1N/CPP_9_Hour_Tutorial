#include <iostream>
#include <string>

using namespace std;

//constructer automatically runs, never have return type

class BuckysClass{
    public:
    //constructor uses the name first
    //    BuckysClass(){
     //       cout << "this will get printed automatically";
      //  }

        BuckysClass(string z){
            setName(z);
        }

        //setter function
        void setName(string x){
            name = x;
        }
        string getName(){
            return name;
        }

    //public variables bad
    private:
        string name;
    //access it with a public function
};

int main()
{
    BuckysClass bo("lucky bucky roberts");
    cout << bo.getName();
//    bo.setName("YINENG");
//    cout << bo.getName();
    return 0;
}