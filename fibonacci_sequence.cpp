#include <stdio.h>
#include <iostream>
using namespace std;


int teste (int serie)
{
    int ser_first,ser_second,z;
    if(serie>1){
        ser_first = 0;
        ser_second = 1;
        for(int a=2;a<=serie;a++){
            z = ser_first+ser_second;
            ser_first = ser_second;
            ser_second = z;
        }
        return z;
    }
    else if(serie==1){
        return 1;
    }
    else{
        return 0;
    }
    

}
int main()
{
    
    int serie;
    scanf("%d",&serie);
    cout << "serie =" << teste(serie);

}
