#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80023CF4();
void fn_80029D58();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_800CE2F8();
void *fn_800CEC64();
void fn_800CECA0();
void fn_800CEE3C();
extern char lbl_804883CC[];
extern char lbl_8055EA74[8];
extern void *lbl_80562D78;
void fn_800CEDA8();
void *fn_800CEE1C();
}
extern "C" {
void fn_800CED80(){
 fn_80066188((int)fn_800CEDA8);
}
void fn_800CEDA8(){
 fn_800CE2F8();
 fn_80066204(0,(int)&lbl_80562D78,(int)fn_80029D58,(int)fn_80023CF4,(int)fn_800CEE1C,(int)lbl_804883CC,16,(int)fn_800CECA0,(int)fn_800CEE3C,0,(int)lbl_8055EA74);
}
void *fn_800CEE1C(){return fn_800CEC64();}
}
#pragma pop
