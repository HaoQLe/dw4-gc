#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8010CBD4();
void *fn_8010D4B0();
void fn_8010D4EC();
void fn_8010D6A8();
void fn_80111654();
extern char lbl_804946C4[];
extern char lbl_8055EEFC[8];
extern void *lbl_80563598;
extern void *lbl_80563718;
void fn_8010D60C();
void *fn_8010D680();
void *fn_8010D6A0();
}
extern "C" {
void fn_8010D5E4(){
 fn_80066188((int)fn_8010D60C);
}
void fn_8010D60C(){
 fn_8010CBD4();
 fn_80066204(0,(int)&lbl_80563598,(int)fn_80111654,(int)fn_8010D6A0,(int)fn_8010D680,(int)lbl_804946C4,52,(int)fn_8010D4EC,(int)fn_8010D6A8,0,(int)lbl_8055EEFC);
}
void *fn_8010D680(){return fn_8010D4B0();}
void *fn_8010D6A0(){return lbl_80563718;}
}
#pragma pop
