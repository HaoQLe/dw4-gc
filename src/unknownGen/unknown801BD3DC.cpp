#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_801AA6DC();
void *fn_801BD1CC();
void fn_801BD208();
void fn_801BD4A4();
void fn_801CC7C0();
extern char lbl_804AEFAC[];
extern char lbl_804AEFB8[];
extern void *lbl_80564E0C;
extern void *lbl_80565510;
void fn_801BD404();
void *fn_801BD47C();
void *fn_801BD49C();
}
extern "C" {
void fn_801BD3DC(){
 fn_80066188((int)fn_801BD404);
}
void fn_801BD404(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_80564E0C,(int)fn_801CC7C0,(int)fn_801BD49C,(int)fn_801BD47C,(int)lbl_804AEFB8,176,(int)fn_801BD208,(int)fn_801BD4A4,0,(int)lbl_804AEFAC);
}
void *fn_801BD47C(){return fn_801BD1CC();}
void *fn_801BD49C(){return lbl_80565510;}
}
#pragma pop
