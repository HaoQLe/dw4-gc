#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void *fn_8011148C();
void fn_801AA6DC();
void *fn_801AC680();
void fn_801AC6BC();
void fn_801AC968();
void fn_801BF938();
extern char lbl_804ABB08[];
extern char lbl_804ABB14[];
extern void *lbl_80564714;
void fn_801AC8D0();
void *fn_801AC948();
}
extern "C" {
void fn_801AC8A8(){
 fn_80066188((int)fn_801AC8D0);
}
void fn_801AC8D0(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_80564714,(int)fn_801BF938,(int)fn_8011148C,(int)fn_801AC948,(int)lbl_804ABB14,108,(int)fn_801AC6BC,(int)fn_801AC968,0,(int)lbl_804ABB08);
}
void *fn_801AC948(){return fn_801AC680();}
}
#pragma pop
