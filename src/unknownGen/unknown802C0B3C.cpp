#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void *fn_8011148C();
void fn_801BF938();
void fn_802B1AC8();
void *fn_802C0960();
void fn_802C09AC();
void fn_802C0C00();
void *fn_802C0C80();
extern char lbl_8041E3CC[];
extern char lbl_80534A50[];
void fn_802C0B64();
void *fn_802C0BE0();
}
extern "C" {
void fn_802C0B3C(){
 fn_80066188((int)fn_802C0B64);
}
void fn_802C0B64(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80534A50,(int)fn_801BF938,(int)fn_8011148C,(int)fn_802C0BE0,(int)lbl_8041E3CC,36,(int)fn_802C09AC,(int)fn_802C0C00,(int)fn_802C0C80,0);
}
void *fn_802C0BE0(){return fn_802C0960();}
}
#pragma pop
