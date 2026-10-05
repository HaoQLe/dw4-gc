#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8010CBD4();
void *fn_8010D6A0();
void *fn_8010EEF0();
void fn_8010EF2C();
void fn_8010F08C();
void fn_80111654();
extern char lbl_80494A34[];
extern void *lbl_80563628;
void fn_8010EFFC();
void *fn_8010F06C();
}
extern "C" {
void fn_8010EFD4(){
 fn_80066188((int)fn_8010EFFC);
}
void fn_8010EFFC(){
 fn_8010CBD4();
 fn_80066204(0,(int)&lbl_80563628,(int)fn_80111654,(int)fn_8010D6A0,(int)fn_8010F06C,(int)lbl_80494A34,40,(int)fn_8010EF2C,(int)fn_8010F08C,0,0);
}
void *fn_8010F06C(){return fn_8010EEF0();}
}
#pragma pop
