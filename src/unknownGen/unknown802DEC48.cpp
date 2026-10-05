#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80024180();
void fn_8002907C();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802DEB88();
void fn_802DEBD4();
extern char lbl_80420820[];
extern char lbl_804D2668[];
extern char lbl_805354F8[];
void fn_802DEC70();
void *fn_802DECE4();
}
extern "C" {
void fn_802DEC48(){
 fn_80066188((int)fn_802DEC70);
}
void fn_802DEC70(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_805354F8,(int)fn_8002907C,(int)fn_80024180,(int)fn_802DECE4,(int)lbl_80420820,20,(int)fn_802DEBD4,0,0,(int)lbl_804D2668);
}
void *fn_802DECE4(){return fn_802DEB88();}
}
#pragma pop
