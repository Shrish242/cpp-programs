#include<iostream>
using namespace std;

class animal
{
    private:
        string Name;
        string food;
    public:
        int legs;
        int lifespan;

        void setData(string a,string f);
        void getData(){
        cout<<"The name of the animal is "<<Name<<endl;
        cout<<Name<<" Loves to eat "<<food<<endl;
        cout<<Name<<" has "<<legs<<" legs"<<endl;
        cout<<"The lifespan of "<<Name<<" is "<<lifespan<<" Years"<<endl;
    }
};
void animal :: setData(string a,string f){
    Name = a;
    food = f;
}
int main(){
    int leg,lspan;
    string n;
    cout<<"Enter the name of the animal"<<endl;
    cin>>n;
    string f;
    cout<<"Enter the Favourite Food of "<<n<<endl;
    cin>>f;
    cout<<"How many legs they have "<<endl;
    cin>>leg;
    cout<<"What is the lifespan of "<<n<<endl;
    cin>>lspan;
    animal a;
    a.legs = leg;
    a.lifespan = lspan;
    a.setData(n,f);
    a.getData();
    return 0;
}