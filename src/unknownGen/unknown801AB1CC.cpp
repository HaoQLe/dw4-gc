#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_80066B08();
void fn_801AA6DC();
void fn_801AB6FC();
extern char lbl_804AB4E0[];
extern char lbl_804AB4FC[];
extern void *lbl_805621F4;
extern void *lbl_80564694;
extern void *lbl_80564698;
extern void *lbl_8056469C;
void *fn_801AB1CC();
void fn_801AB208();
void fn_801AB230();
void *fn_801AB294();
void *fn_801AB2F0();
void fn_801AB32C();
void fn_801AB354();
void *fn_801AB3B8();
}
extern "C" {
void *fn_801AB1CC(){
 if(!lbl_80564694 || !(reinterpret_cast<unsigned int *>(lbl_80564694)[0x24/4]&4)) fn_801AB208();
 return lbl_80564694;
}
void fn_801AB208(){
 fn_80066188((int)fn_801AB230);
}
void fn_801AB230(){
 fn_801AA6DC();
 fn_80066204(1,(int)&lbl_80564694,(int)fn_80066B08,(int)fn_800237D0,(int)fn_801AB294,(int)lbl_804AB4E0,8,0,0,0,0);
}
void *fn_801AB294(){return fn_801AB1CC();}
void *fn_801AB2B4(){
 if(!lbl_80564698) lbl_80564698=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80564698;
}
void *fn_801AB2F0(){
 if(!lbl_80564698 || !(reinterpret_cast<unsigned int *>(lbl_80564698)[0x24/4]&4)) fn_801AB32C();
 return lbl_80564698;
}
void fn_801AB32C(){
 fn_80066188((int)fn_801AB354);
}
void fn_801AB354(){
 fn_801AA6DC();
 fn_80066204(1,(int)&lbl_80564698,(int)fn_80066B08,(int)fn_800237D0,(int)fn_801AB3B8,(int)lbl_804AB4FC,8,0,0,0,0);
}
void *fn_801AB3B8(){return fn_801AB2F0();}
void *fn_801AB3D8(void *object){
 fn_801AB6FC();
 return fn_8006546C(lbl_8056469C,object);
}
void *fn_801AB410(){
 if(!lbl_8056469C || !(reinterpret_cast<unsigned int *>(lbl_8056469C)[0x24/4]&4)) fn_801AB6FC();
 return lbl_8056469C;
}
}
#pragma pop
