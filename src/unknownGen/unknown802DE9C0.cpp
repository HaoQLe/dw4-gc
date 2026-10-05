#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void fn_802B86E0();
void *fn_802DE8B8();
void fn_802DE904();
void fn_802DEA84();
void fn_802DEA94();
void *fn_802DEB14();
extern char lbl_804207E4[];
extern char lbl_805354E4[];
void fn_802DE9E8();
void *fn_802DEA64();
}
extern "C" {
void fn_802DE9C0(){
 fn_80066188((int)fn_802DE9E8);
}
void fn_802DE9E8(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_805354E4,(int)fn_802B86E0,(int)fn_802DEA84,(int)fn_802DEA64,(int)lbl_804207E4,40,(int)fn_802DE904,(int)fn_802DEA94,(int)fn_802DEB14,0);
}
void *fn_802DEA64(){return fn_802DE8B8();}
}
#pragma pop
