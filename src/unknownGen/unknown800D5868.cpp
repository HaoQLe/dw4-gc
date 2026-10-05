#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *fn_80029E64(void *);
void fn_80037510();
void *fn_800607F4(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_80066B08();
void fn_800CE2F8();
void *fn_800D031C();
void fn_800D5AB8();
extern char lbl_8048A51C[];
extern char lbl_8048A5B4[];
extern void *lbl_805621F4;
extern void *lbl_805630B8;
extern void *lbl_805630BC;
void *fn_800D58A4();
void fn_800D58E0();
void fn_800D5908();
void *fn_800D596C();
void *fn_800D59C8();
void fn_800D5A04();
void fn_800D5A2C();
void *fn_800D5A98();
}
extern "C" {
void *fn_800D5868(){
 if(!lbl_805630B8) lbl_805630B8=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_805630B8;
}
void *fn_800D58A4(){
 if(!lbl_805630B8 || !(reinterpret_cast<unsigned int *>(lbl_805630B8)[0x24/4]&4)) fn_800D58E0();
 return lbl_805630B8;
}
void fn_800D58E0(){
 fn_80066188((int)fn_800D5908);
}
void fn_800D5908(){
 fn_800CE2F8();
 fn_80066204(1,(int)&lbl_805630B8,(int)fn_80066B08,(int)fn_800237D0,(int)fn_800D596C,(int)lbl_8048A51C,8,0,0,0,0);
}
void *fn_800D596C(){return fn_800D58A4();}
void *fn_800D598C(){
 if(!lbl_805630BC) lbl_805630BC=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_805630BC;
}
void *fn_800D59C8(){
 if(!lbl_805630BC || !(reinterpret_cast<unsigned int *>(lbl_805630BC)[0x24/4]&4)) fn_800D5A04();
 return lbl_805630BC;
}
void fn_800D5A04(){
 fn_80066188((int)fn_800D5A2C);
}
void fn_800D5A2C(){
 fn_800CE2F8();
 fn_80066204(1,(int)&lbl_805630BC,(int)fn_80037510,(int)fn_800D031C,(int)fn_800D5A98,(int)lbl_8048A5B4,24,0,(int)fn_800D5AB8,0,0);
}
void *fn_800D5A98(){return fn_800D59C8();}
}
#pragma pop
