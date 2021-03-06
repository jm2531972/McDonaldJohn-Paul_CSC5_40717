/* 
 * File:   main.cpp
 * Author: jaymc_000
 *
 * Created on January 26, 2015, 7:23 PM
 */

#include <iostream>
#include <string>

using namespace std;

float hatSize(float,float);
float jackSize(float,float,int);
float wstSize(float,int);

int main(int argc, char** argv) {
    float height;
    float weight;
    int age;
    float hatsize;
    float jcksize;
    float wtsize;
    string clothconv;
    do{
        cout<<"I can compute your clothing sizes based on your\n"
                "height, weight, and age. Please input those now.\n"
                "Height(in inches): ";
        cin>>height;
        cout<<endl<<"Weight(in pounds): ";
        cin>>weight;
        cout<<endl<<"And age: ";
        cin>>age;
        cout<<endl;
        hatsize=hatSize(weight,height);
        jcksize=jackSize(height,weight,age);
        wtsize=wstSize(weight,age);
        cout<<"Your hat size is : "<<hatsize<<endl;
        cout<<"Your jacket size is : "<<jcksize<<endl;
        cout<<"And your waist size is : "<<wtsize<<endl;
        cout<<"Would you like to try again? (Y/N) ";
        cin>>clothconv;
               
        
    }while(clothconv!="N");
        

    return 0;
}

float hatSize(float wei,float hei){
    return wei/hei*2.9;
}

float jackSize(float heig, float weig, int agee){
    if(agee>39){
        return heig*weig/288+(((agee % 30) /10) % 1 )/8;
    }else {
        return heig*weig/288;
    }

}

float wstSize(float weigh,int ageee){
    if(ageee>29){
        return weigh/5.7+((ageee-28)%2)/10;
    }else{
        return weigh/5.7;
    }
}