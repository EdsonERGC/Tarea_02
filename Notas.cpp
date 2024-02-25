#include <iostream>

using namespace std;

int main(){
    
    int n1=0,n2=0,n3=0,promedio=0;
    cout <<"ingrese nota 1"<<endl;
    cin>>n1;
    cout <<"ingrese nota 2"<<endl;
    cin>>n2;
    cout <<"ingrese nota 3"<<endl;
    cin>>n3;
    promedio = (n1+n2+n3)/ 3;
    
    if (promedio>=61){
        cout<<"el estudainte aprobo"<<endl;
    }else {
        cout<<"reprobo"<<endl;
        
    }
    
    system("Pause");
}