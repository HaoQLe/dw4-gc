#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8012FC48();
void *fn_80148640();
void *fn_80148648();
void fn_80148684();
void fn_80148988();
void fn_80148A9C();
extern char lbl_8049EDDC[];
extern void *lbl_80564254;
extern void *lbl_80564258;
void fn_801487B8();
void *fn_80148820();
}
extern "C" {
void fn_80148790(){
 fn_80066188((int)fn_801487B8);
}
void fn_801487B8(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80564254,(int)fn_80148A9C,(int)fn_80148640,(int)fn_80148820,(int)lbl_8049EDDC,44,(int)fn_80148684,0,0,0);
}
void *fn_80148820(){return fn_80148648();}
void *fn_80148840(){
 if(!lbl_80564258 || !(reinterpret_cast<unsigned int *>(lbl_80564258)[0x24/4]&4)) fn_80148988();
 return lbl_80564258;
}
}
#pragma pop
