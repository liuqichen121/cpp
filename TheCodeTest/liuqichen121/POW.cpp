#include"../include/liuqichen121.h"

ll POW(ll _x,ll _y){
    int _Res=1;
    while(_y){
        if(_y&1)
        _Res*=_x;
        _x*=_x;
        _y>>=1;
    }
    return _Res;
}