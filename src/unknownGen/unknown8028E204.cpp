#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_80066B08();
void fn_8028C93C();
void *fn_8028E140();
void fn_8028E17C();
void fn_8028E2C0();
extern char lbl_804CCB50[];
extern char lbl_805613C8[8];
extern void *lbl_80566178;
void fn_8028E22C();
void *fn_8028E2A0();
}
extern "C" {
void fn_8028E204(){
 fn_80066188((int)fn_8028E22C);
}
void fn_8028E22C(){
 fn_8028C93C();
 fn_80066204(0,(int)&lbl_80566178,(int)fn_80066B08,(int)fn_800237D0,(int)fn_8028E2A0,(int)lbl_804CCB50,12,(int)fn_8028E17C,(int)fn_8028E2C0,0,(int)lbl_805613C8);
}
void *fn_8028E2A0(){return fn_8028E140();}
}
#pragma pop
