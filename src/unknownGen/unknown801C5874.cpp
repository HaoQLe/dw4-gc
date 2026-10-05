#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void *fn_8011148C();
void fn_801AA6DC();
void fn_801BF938();
void *fn_801C5440();
void fn_801C547C();
void fn_801C5934();
extern char lbl_804B0CCC[];
extern char lbl_804B0CF0[];
extern void *lbl_805651C0;
void fn_801C589C();
void *fn_801C5914();
}
extern "C" {
void fn_801C5874(){
 fn_80066188((int)fn_801C589C);
}
void fn_801C589C(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_805651C0,(int)fn_801BF938,(int)fn_8011148C,(int)fn_801C5914,(int)lbl_804B0CF0,160,(int)fn_801C547C,(int)fn_801C5934,0,(int)lbl_804B0CCC);
}
void *fn_801C5914(){return fn_801C5440();}
}
#pragma pop
