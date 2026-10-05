#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void fn_80030A3C();
void fn_80037510();
void *fn_800607F4(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_800CE2F8();
void *fn_800D031C();
void *fn_800D48D4();
void fn_800D4910();
void fn_800D4D54();
extern char lbl_8048A1DC[];
extern char lbl_8048A3F4[];
extern char lbl_8048A404[];
extern void *lbl_80561B8C;
extern void *lbl_805621F4;
extern void *lbl_8056306C;
extern void *lbl_80563074;
extern void *lbl_80563078;
void fn_800D4AB0();
void *fn_800D4B18();
void *fn_800D4B38();
void *fn_800D4B7C();
void fn_800D4BB8();
void fn_800D4BE0();
void *fn_800D4C44();
void *fn_800D4C64();
void fn_800D4CA0();
void fn_800D4CC8();
void *fn_800D4D34();
}
extern "C" {
void fn_800D4A88(){
 fn_80066188((int)fn_800D4AB0);
}
void fn_800D4AB0(){
 fn_800CE2F8();
 fn_80066204(0,(int)&lbl_8056306C,(int)fn_80030A3C,(int)fn_800D4B38,(int)fn_800D4B18,(int)lbl_8048A1DC,44,(int)fn_800D4910,0,0,0);
}
void *fn_800D4B18(){return fn_800D48D4();}
void *fn_800D4B38(){return lbl_80561B8C;}
void *fn_800D4B40(){
 if(!lbl_80563074) lbl_80563074=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80563074;
}
void *fn_800D4B7C(){
 if(!lbl_80563074 || !(reinterpret_cast<unsigned int *>(lbl_80563074)[0x24/4]&4)) fn_800D4BB8();
 return lbl_80563074;
}
void fn_800D4BB8(){
 fn_80066188((int)fn_800D4BE0);
}
void fn_800D4BE0(){
 fn_800CE2F8();
 fn_80066204(1,(int)&lbl_80563074,(int)fn_80037510,(int)fn_800D031C,(int)fn_800D4C44,(int)lbl_8048A3F4,20,0,0,0,0);
}
void *fn_800D4C44(){return fn_800D4B7C();}
void *fn_800D4C64(){
 if(!lbl_80563078 || !(reinterpret_cast<unsigned int *>(lbl_80563078)[0x24/4]&4)) fn_800D4CA0();
 return lbl_80563078;
}
void fn_800D4CA0(){
 fn_80066188((int)fn_800D4CC8);
}
void fn_800D4CC8(){
 fn_800CE2F8();
 fn_80066204(1,(int)&lbl_80563078,(int)fn_80037510,(int)fn_800D031C,(int)fn_800D4D34,(int)lbl_8048A404,24,0,(int)fn_800D4D54,0,0);
}
void *fn_800D4D34(){return fn_800D4C64();}
}
#pragma pop
