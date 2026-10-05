#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_800CE2F8();
void fn_800D1ED4();
void fn_800D1F6C();
void *fn_800D8568();
extern char lbl_80489894[];
extern char lbl_804898A4[];
extern void *lbl_80562F58;
extern void *lbl_80562F5C;
extern void *lbl_80562F60;
void *fn_800D1CBC();
void fn_800D1CF8();
void fn_800D1D20();
void *fn_800D1D84();
void *fn_800D1DA4();
void *fn_800D1DE4();
void fn_800D1E20();
void fn_800D1E48();
void *fn_800D1EB4();
}
extern "C" {
void *fn_800D1C9C(){return fn_800D8568();}
void *fn_800D1CBC(){
 if(!lbl_80562F58 || !(reinterpret_cast<unsigned int *>(lbl_80562F58)[0x24/4]&4)) fn_800D1CF8();
 return lbl_80562F58;
}
void fn_800D1CF8(){
 fn_80066188((int)fn_800D1D20);
}
void fn_800D1D20(){
 fn_800CE2F8();
 fn_80066204(1,(int)&lbl_80562F58,(int)fn_800D1F6C,(int)fn_800D1DA4,(int)fn_800D1D84,(int)lbl_80489894,8,0,0,0,0);
}
void *fn_800D1D84(){return fn_800D1CBC();}
void *fn_800D1DA4(){return lbl_80562F60;}
void *fn_800D1DAC(void *object){
 fn_800D1E20();
 return fn_8006546C(lbl_80562F5C,object);
}
void *fn_800D1DE4(){
 if(!lbl_80562F5C || !(reinterpret_cast<unsigned int *>(lbl_80562F5C)[0x24/4]&4)) fn_800D1E20();
 return lbl_80562F5C;
}
void fn_800D1E20(){
 fn_80066188((int)fn_800D1E48);
}
void fn_800D1E48(){
 fn_800CE2F8();
 fn_80066204(1,(int)&lbl_80562F5C,(int)fn_800D1F6C,(int)fn_800D1DA4,(int)fn_800D1EB4,(int)lbl_804898A4,8,0,(int)fn_800D1ED4,0,0);
}
void *fn_800D1EB4(){return fn_800D1DE4();}
}
#pragma pop
