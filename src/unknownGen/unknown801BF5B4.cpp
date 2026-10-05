#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_801AA6DC();
void fn_801AA950();
void *fn_801B0404();
void *fn_801BF368();
void fn_801BF3A4();
void fn_801BF670();
extern char lbl_804AF4E0[];
extern char lbl_805605F0[8];
extern void *lbl_80564EC8;
void fn_801BF5DC();
void *fn_801BF650();
}
extern "C" {
void fn_801BF5B4(){
 fn_80066188((int)fn_801BF5DC);
}
void fn_801BF5DC(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_80564EC8,(int)fn_801AA950,(int)fn_801B0404,(int)fn_801BF650,(int)lbl_804AF4E0,40,(int)fn_801BF3A4,(int)fn_801BF670,0,(int)lbl_805605F0);
}
void *fn_801BF650(){return fn_801BF368();}
}
#pragma pop
