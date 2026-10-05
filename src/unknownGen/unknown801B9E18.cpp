#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_801AA6DC();
void *fn_801B8D70();
void *fn_801B9A7C();
void fn_801B9AB8();
void fn_801B9ED8();
void fn_801C03BC();
extern char lbl_804AE900[];
extern char lbl_804AE914[];
extern void *lbl_80564D0C;
void fn_801B9E40();
void *fn_801B9EB8();
}
extern "C" {
void fn_801B9E18(){
 fn_80066188((int)fn_801B9E40);
}
void fn_801B9E40(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_80564D0C,(int)fn_801C03BC,(int)fn_801B8D70,(int)fn_801B9EB8,(int)lbl_804AE914,60,(int)fn_801B9AB8,(int)fn_801B9ED8,0,(int)lbl_804AE900);
}
void *fn_801B9EB8(){return fn_801B9A7C();}
}
#pragma pop
