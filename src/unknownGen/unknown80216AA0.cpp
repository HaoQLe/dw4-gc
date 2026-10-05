#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_80066B08();
void fn_80216620();
void fn_80216BCC();
extern char lbl_804BA328[];
extern void *lbl_805621F4;
extern void *lbl_805659E4;
void *fn_80216ADC();
void fn_80216B18();
void fn_80216B40();
void *fn_80216BAC();
}
extern "C" {
void *fn_80216AA0(){
 if(!lbl_805659E4) lbl_805659E4=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_805659E4;
}
void *fn_80216ADC(){
 if(!lbl_805659E4 || !(reinterpret_cast<unsigned int *>(lbl_805659E4)[0x24/4]&4)) fn_80216B18();
 return lbl_805659E4;
}
void fn_80216B18(){
 fn_80066188((int)fn_80216B40);
}
void fn_80216B40(){
 fn_80216620();
 fn_80066204(1,(int)&lbl_805659E4,(int)fn_80066B08,(int)fn_800237D0,(int)fn_80216BAC,(int)lbl_804BA328,8,0,(int)fn_80216BCC,0,0);
}
void *fn_80216BAC(){return fn_80216ADC();}
}
#pragma pop
