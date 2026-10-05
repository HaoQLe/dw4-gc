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
void fn_800CE2F8();
void fn_800D1B98();
extern char lbl_8048981C[];
extern char lbl_8055EB6C[8];
extern void *lbl_805621F4;
extern void *lbl_80562F40;
void *fn_800D1AA4();
void fn_800D1AE0();
void fn_800D1B08();
void *fn_800D1B78();
}
extern "C" {
void *fn_800D1A30(void *object){
 fn_800D1AE0();
 return fn_8006546C(lbl_80562F40,object);
}
void *fn_800D1A68(){
 if(!lbl_80562F40) lbl_80562F40=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80562F40;
}
void *fn_800D1AA4(){
 if(!lbl_80562F40 || !(reinterpret_cast<unsigned int *>(lbl_80562F40)[0x24/4]&4)) fn_800D1AE0();
 return lbl_80562F40;
}
void fn_800D1AE0(){
 fn_80066188((int)fn_800D1B08);
}
void fn_800D1B08(){
 fn_800CE2F8();
 fn_80066204(1,(int)&lbl_80562F40,(int)fn_80066B08,(int)fn_800237D0,(int)fn_800D1B78,(int)lbl_8048981C,28,0,(int)fn_800D1B98,0,(int)lbl_8055EB6C);
}
void *fn_800D1B78(){return fn_800D1AA4();}
}
#pragma pop
