#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *fn_80029E64(void *);
void fn_8004D4BC(void *,float);
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_80066B08();
void fn_802B1AC8();
void fn_802C6198();
extern char lbl_8041E6AC[];
extern char lbl_8041EA3C[];
extern char lbl_804D06B8[];
extern char lbl_804D06C4[];
extern char lbl_804D06D0[];
extern char lbl_804D06DC[];
extern void *lbl_80534C40;
extern void *lbl_80534C50;
extern void *lbl_805621F4;
void *fn_802C5C6C();
void fn_802C5CB8();
void fn_802C5CE0();
void *fn_802C5D50();
void fn_802C5D70();
}
extern "C" {
void *fn_802C5C6C(){
 if(!lbl_80534C40 || !(reinterpret_cast<unsigned int *>(lbl_80534C40)[0x24/4]&4)) fn_802C5CB8();
 return lbl_80534C40;
}
void fn_802C5CB8(){
 fn_80066188((int)fn_802C5CE0);
}
void fn_802C5CE0(){
 fn_802B1AC8();
 fn_80066204(1,(int)&lbl_80534C40,(int)fn_80066B08,(int)fn_800237D0,(int)fn_802C5D50,(int)lbl_8041EA3C,20,0,(int)fn_802C5D70,0,0);
}
void *fn_802C5D50(){return fn_802C5C6C();}
void fn_802C5D70(){
 void *value0=lbl_80534C40;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_804D06B8,3);
 void *value2=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+1));
 fn_8004D4BC(value2,*reinterpret_cast<float *>((lbl_8041E6AC+0)));
 fn_800659C0(value0,lbl_804D06C4,lbl_804D06D0,lbl_804D06DC,value1);
}
void *fn_802C5E08(void *object){
 fn_802C6198();
 return fn_8006546C(lbl_80534C50,object);
}
void *fn_802C5E48(){
 if(!lbl_80534C50) lbl_80534C50=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80534C50;
}
void *fn_802C5E9C(){
 if(!lbl_80534C50 || !(reinterpret_cast<unsigned int *>(lbl_80534C50)[0x24/4]&4)) fn_802C6198();
 return lbl_80534C50;
}
}
#pragma pop
