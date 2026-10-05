#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void *fn_8011148C();
void fn_801AA6DC();
void *fn_801B1878();
void fn_801B18B4();
void fn_801B1C24();
void fn_801BF938();
extern char lbl_804ACC04[];
extern char lbl_804ACC18[];
extern void *lbl_8056491C;
void fn_801B1B8C();
void *fn_801B1C04();
}
extern "C" {
void fn_801B1B64(){
 fn_80066188((int)fn_801B1B8C);
}
void fn_801B1B8C(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_8056491C,(int)fn_801BF938,(int)fn_8011148C,(int)fn_801B1C04,(int)lbl_804ACC18,60,(int)fn_801B18B4,(int)fn_801B1C24,0,(int)lbl_804ACC04);
}
void *fn_801B1C04(){return fn_801B1878();}
}
#pragma pop
