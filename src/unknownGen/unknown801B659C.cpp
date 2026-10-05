#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_801AA6DC();
void *fn_801AD7BC();
void fn_801B09E4();
void *fn_801B6454();
void fn_801B6490();
void fn_801B665C();
extern char lbl_804ADBC4[];
extern char lbl_804ADBD4[];
extern void *lbl_80564B74;
void fn_801B65C4();
void *fn_801B663C();
}
extern "C" {
void fn_801B659C(){
 fn_80066188((int)fn_801B65C4);
}
void fn_801B65C4(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_80564B74,(int)fn_801B09E4,(int)fn_801AD7BC,(int)fn_801B663C,(int)lbl_804ADBD4,64,(int)fn_801B6490,(int)fn_801B665C,0,(int)lbl_804ADBC4);
}
void *fn_801B663C(){return fn_801B6454();}
}
#pragma pop
