#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8012FC48();
void *fn_80148448();
void fn_80148484();
void fn_80148790();
void fn_80148A9C();
extern char lbl_8049EDC0[];
extern void *lbl_80564250;
extern void *lbl_80564254;
extern void *lbl_8056425C;
void fn_801485B8();
void *fn_80148620();
void *fn_80148640();
}
extern "C" {
void fn_80148590(){
 fn_80066188((int)fn_801485B8);
}
void fn_801485B8(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80564250,(int)fn_80148A9C,(int)fn_80148640,(int)fn_80148620,(int)lbl_8049EDC0,44,(int)fn_80148484,0,0,0);
}
void *fn_80148620(){return fn_80148448();}
void *fn_80148640(){return lbl_8056425C;}
void *fn_80148648(){
 if(!lbl_80564254 || !(reinterpret_cast<unsigned int *>(lbl_80564254)[0x24/4]&4)) fn_80148790();
 return lbl_80564254;
}
}
#pragma pop
