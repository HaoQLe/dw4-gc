#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8012FC48();
void *fn_80135250();
void fn_80151F88();
void fn_8015207C();
extern char lbl_804A0104[];
extern char lbl_8055FD0C[8];
extern void *lbl_80564530;
void *fn_80151E94();
void fn_80151ED0();
void fn_80151EF8();
void *fn_80151F68();
}
extern "C" {
void *fn_80151E94(){
 if(!lbl_80564530 || !(reinterpret_cast<unsigned int *>(lbl_80564530)[0x24/4]&4)) fn_80151ED0();
 return lbl_80564530;
}
void fn_80151ED0(){
 fn_80066188((int)fn_80151EF8);
}
void fn_80151EF8(){
 fn_8012FC48();
 fn_80066204(1,(int)&lbl_80564530,(int)fn_8015207C,(int)fn_80135250,(int)fn_80151F68,(int)lbl_804A0104,40,0,(int)fn_80151F88,0,(int)lbl_8055FD0C);
}
void *fn_80151F68(){return fn_80151E94();}
}
#pragma pop
