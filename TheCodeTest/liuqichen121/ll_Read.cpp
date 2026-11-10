#include"../include/liuqichen121.h"

ll ll_Read(){
    ll _Sum=0,_Flag=1;
    char _z=getchar();
    while(_z<'0'||_z>'9'){
        if(_z=='-')
        _Flag=-1;
        _z=getchar();
    }
    while(_z>='0'&&_z<='9'){
        _Sum=_Sum*10+_z-'0';
        _z=getchar();
    }
    return _Sum*_Flag;
}