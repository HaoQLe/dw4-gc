#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void fn_80339484();
void fn_80339814();
void *fn_8033B080();
void fn_8033B0CC();
extern char lbl_80454754[];
extern char lbl_8053622C[];
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
}
#pragma pop
