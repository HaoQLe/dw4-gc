#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_800635C8(void *,void *,void *,int);
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void *fn_802B2E3C();
void fn_802E3D20();
void fn_803250AC();
void *fn_803345BC();
void fn_80334608();
void fn_80334A5C();
extern char lbl_80453438[];
extern char lbl_80453E20[];
extern char lbl_804E2124[];
extern char lbl_804E2130[];
extern char lbl_80535FCC[];
extern void *lbl_80535FD0;
extern void *lbl_80535FD4;
extern void *lbl_805621F4;
void fn_80334780();
void *fn_803347EC();
}
extern "C" {
void fn_80334758(){
 fn_80066188((int)fn_80334780);
}
void fn_80334780(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_80535FCC,(int)fn_802E3D20,(int)fn_802B2E3C,(int)fn_803347EC,(int)lbl_80453E20,28,(int)fn_80334608,0,0,0);
}
void *fn_803347EC(){return fn_803345BC();}
void *fn_8033480C(){
 if(!lbl_80535FD0) lbl_80535FD0=fn_800635C8(lbl_80453438,lbl_804E2124,lbl_804E2130,0x3);
 return lbl_80535FD0;
}
void *fn_8033486C(void *object){
 fn_80334A5C();
 return fn_8006546C(lbl_80535FD4,object);
}
void *fn_803348AC(){
 if(!lbl_80535FD4) lbl_80535FD4=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80535FD4;
}
void *fn_80334900(){
 if(!lbl_80535FD4 || !(reinterpret_cast<unsigned int *>(lbl_80535FD4)[0x24/4]&4)) fn_80334A5C();
 return lbl_80535FD4;
}
}
#pragma pop
