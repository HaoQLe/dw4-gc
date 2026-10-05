#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_801AA6DC();
void *fn_801B623C();
void *fn_801B67EC();
void fn_801B6828();
void fn_801B6CBC();
void fn_801C8C48();
extern char lbl_804ADC84[];
extern void *lbl_80564B94;
extern void *lbl_80564B98;
void fn_801B6A20();
void *fn_801B6A88();
}
extern "C" {
void fn_801B69F8(){
 fn_80066188((int)fn_801B6A20);
}
void fn_801B6A20(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_80564B94,(int)fn_801C8C48,(int)fn_801B623C,(int)fn_801B6A88,(int)lbl_804ADC84,40,(int)fn_801B6828,0,0,0);
}
void *fn_801B6A88(){return fn_801B67EC();}
void *fn_801B6AA8(){
 if(!lbl_80564B98 || !(reinterpret_cast<unsigned int *>(lbl_80564B98)[0x24/4]&4)) fn_801B6CBC();
 return lbl_80564B98;
}
}
#pragma pop
