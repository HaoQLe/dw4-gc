#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8010CBD4();
void fn_8010D60C();
void *fn_8010DB34();
void fn_8010DB70();
void fn_8010DD38();
extern char lbl_80494850[];
extern void *lbl_80563598;
extern void *lbl_805635C8;
void fn_8010DCA0();
void *fn_8010DD10();
void *fn_8010DD30();
}
extern "C" {
void fn_8010DC78(){
 fn_80066188((int)fn_8010DCA0);
}
void fn_8010DCA0(){
 fn_8010CBD4();
 fn_80066204(0,(int)&lbl_805635C8,(int)fn_8010D60C,(int)fn_8010DD30,(int)fn_8010DD10,(int)lbl_80494850,64,(int)fn_8010DB70,(int)fn_8010DD38,0,0);
}
void *fn_8010DD10(){return fn_8010DB34();}
void *fn_8010DD30(){return lbl_80563598;}
}
#pragma pop
