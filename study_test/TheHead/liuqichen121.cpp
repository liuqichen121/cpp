#include "liuqichen121.h"
int read_int(){
    int flag=1,sum=0;
    char _z=getchar();
    while(_z<'0'||_z>'9'){
        if(_z=='-')
        flag=-1;
        _z=getchar();
    }
    while(_z>='0'&&_z<='9'){
        sum*=10;
        sum+=_z-'0';
        _z=getchar();
    }
    return sum*flag;
}