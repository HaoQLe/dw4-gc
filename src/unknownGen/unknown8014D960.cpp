#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8012FC48();
void *fn_8012FEB0();
void fn_8013A878();
void *fn_8014D7E4();
void fn_8014D820();
void fn_8014DBEC();
extern char lbl_8049F91C[];
extern void *lbl_80564400;
extern void *lbl_80564404;
void fn_8014D988();
void *fn_8014D9F0();
}
extern "C" {
void fn_8014D960(){
 fn_80066188((int)fn_8014D988);
}
void fn_8014D988(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80564400,(int)fn_8013A878,(int)fn_8012FEB0,(int)fn_8014D9F0,(int)lbl_8049F91C,44,(int)fn_8014D820,0,0,0);
}
void *fn_8014D9F0(){return fn_8014D7E4();}
void *fn_8014DA10(){
 if(!lbl_80564404 || !(reinterpret_cast<unsigned int *>(lbl_80564404)[0x24/4]&4)) fn_8014DBEC();
 return lbl_80564404;
}
}
#pragma pop
