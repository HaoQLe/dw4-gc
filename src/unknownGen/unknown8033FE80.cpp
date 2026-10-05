#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void *fn_8033FD10();
void *fn_8033FDE0();
void fn_8033FE2C();
void fn_8033FF3C();
void fn_803401C4();
extern char lbl_80454E34[];
extern char lbl_805365F4[];
void fn_8033FEA8();
void *fn_8033FF1C();
}
extern "C" {
void fn_8033FE80(){
 fn_80066188((int)fn_8033FEA8);
}
void fn_8033FEA8(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_805365F4,(int)fn_803401C4,(int)fn_8033FD10,(int)fn_8033FF1C,(int)lbl_80454E34,32,(int)fn_8033FE2C,(int)fn_8033FF3C,0,0);
}
void *fn_8033FF1C(){return fn_8033FDE0();}
}
#pragma pop
