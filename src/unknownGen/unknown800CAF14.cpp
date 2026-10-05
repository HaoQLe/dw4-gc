#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_800CAEE0();
void fn_800CB080();
void fn_800CB4AC();
extern char lbl_8047EC24[];
extern void *lbl_805621F4;
extern void *lbl_80562B74;
extern void *lbl_80562BB0;
void *fn_800CAF88();
void fn_800CAFC4();
void fn_800CAFEC();
void *fn_800CB058();
void *fn_800CB078();
}
extern "C" {
void *fn_800CAF14(void *object){
 fn_800CAFC4();
 return fn_8006546C(lbl_80562B74,object);
}
void *fn_800CAF4C(){
 if(!lbl_80562B74) lbl_80562B74=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80562B74;
}
void *fn_800CAF88(){
 if(!lbl_80562B74 || !(reinterpret_cast<unsigned int *>(lbl_80562B74)[0x24/4]&4)) fn_800CAFC4();
 return lbl_80562B74;
}
void fn_800CAFC4(){
 fn_80066188((int)fn_800CAFEC);
}
void fn_800CAFEC(){
 fn_800CAEE0();
 fn_80066204(1,(int)&lbl_80562B74,(int)fn_800CB4AC,(int)fn_800CB078,(int)fn_800CB058,(int)lbl_8047EC24,8,0,(int)fn_800CB080,0,0);
}
void *fn_800CB058(){return fn_800CAF88();}
void *fn_800CB078(){return lbl_80562BB0;}
}
#pragma pop
