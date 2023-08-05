#include <iostream>
#include <string>
using namespace std;
// int main()
// {
//     string a,b;
//     getline(cin,a);
//     getline(cin,b);
//     int i,j;
//     for(i=0;a[i]!='\0';i++);
//     for(j=0;b[j]!='\0';j++);
//     cout<<i<<" "<<j;
//     string c,a1,b1;
//     c=a+b;
//     cout<<endl<<c;
//     char temp;
//     temp=a[0];
//     a[0]=b[0];
//     b[0]=temp;
//     cout<<endl<<a<<" "<<b;

// }




// class Student
// {
//     private:
//     int age,std;
//     string fname,lname;
//     public:
    
//     void set_age(int ag)
//     {
//         age=ag;
//     }
//     void set_standard(int st)
//     {
//         std=st;
//     }
//     void set_first_name(string fn)
//     {
//         fname=fn;
//     }
//     void set_last_name(string ln)
//     {
//         lname=ln;
//     }
//     int get_age()
//     {
//         return age;
//     }
//     string get_last_name()
//     {
//         return lname;
//     }
//     int get_standard()
//     {
//         return std;
//     }
//     string get_first_name()
//     {
//         return fname;
//     }
//     int to_string()
//     {
//         cout<<age<<","<<fname<<","<<lname<<","<<std;
//     }
// };

// int main() {
//     int age, standard;
//     string first_name, last_name;
    
//     cin >> age >> first_name >> last_name >> standard;
    
//     Student st;
//     st.set_age(age);
//     st.set_standard(standard);
//     st.set_first_name(first_name);
//     st.set_last_name(last_name);
    
//     cout << st.get_age() << "\n";
//     cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
//     cout << st.get_standard() << "\n";
//     cout << "\n";
//     cout << st.to_string();
    
//     return 0;
// }



class Student
{
    private:
    int score1,score2,score3,score4,score5;
    public:
    void input()
    {
        cin>>score1>>score2>>score3>>score4>>score5;
    }
    int calculateTotalScore()
    {
        int total;
        total=score1+score2+score3+score4+score5;
        return total;
    }
};

int main() {
    int n; // number of students
    cin >> n;
    Student *s = new Student[n]; // an array of n students
    
    for(int i = 0; i < n; i++){
        s[i].input();
    }

    // calculate kristen's score
    int kristen_score = s[0].calculateTotalScore();

    // determine how many students scored higher than kristen
    int count = 0; 
    for(int i = 1; i < n; i++){
        int total = s[i].calculateTotalScore();
        if(total > kristen_score){
            count++;
        }
    }

    // print result
    cout << count;
    
    return 0;
}

