#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
        char  name[106];
        int cls;
        char section;
        int id;
        int m_marks;
        int e_marks;
        
};
bool compare_bool(Student one,Student two){
    if(one.m_marks+one.e_marks>two.m_marks+two.e_marks){
        return true;
    }
    else if(one.m_marks+one.e_marks<two.m_marks+two.e_marks){
        return false;
    }
    else{
        if(one.id<two.id){
            return true;
        }
        else{
            return false;
        }
    }
}

int main(){
    int obj_s;
    cin>>obj_s;
    
    Student arr[obj_s];
    for(int i=0;i<obj_s;i++){
        cin>>arr[i].name>>arr[i].cls>>arr[i].section>>arr[i].id>>arr[i].m_marks>>arr[i].e_marks;
    }
    sort(arr,arr+obj_s,compare_bool);
    for(int i=0;i<obj_s;i++){
        cout<<arr[i].name<<" "<<arr[i].cls<<" "<<arr[i].section<<" "<<arr[i].id<<" "<<arr[i].m_marks<<" "<<arr[i].e_marks<<endl;
    }
    
    
    return 0;
}