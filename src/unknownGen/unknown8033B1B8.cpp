#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void *fn_80339484();
void fn_80339814();
void *fn_8033B080();
void fn_8033B0CC();
void fn_8033B470();
extern char lbl_80454754[];
extern char lbl_8053622C[];
extern void *lbl_80536230;
extern void *lbl_805621F4;
void fn_8033B1E0();
void *fn_8033B24C();
}
extern "C" {
void fn_8033B1B8(){
 fn_80066188((int)fn_8033B1E0);
}
void fn_8033B1E0(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_8053622C,(int)fn_80339814,(int)fn_80339484,(int)fn_8033B24C,(int)lbl_80454754,276,(int)fn_8033B0CC,0,0,0);
}
void *fn_8033B24C(){return fn_8033B080();}
void *fn_8033B26C(void *object){
 fn_8033B470();
 return fn_8006546C(lbl_80536230,object);
}
void *fn_8033B2AC(){
 if(!lbl_80536230) lbl_80536230=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80536230;
}
void *fn_8033B300(){
 if(!lbl_80536230 || !(reinterpret_cast<unsigned int *>(lbl_80536230)[0x24/4]&4)) fn_8033B470();
 return lbl_80536230;
}
}
#pragma pop
