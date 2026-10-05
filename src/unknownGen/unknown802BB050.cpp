#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void fn_802B8770();
void *fn_802BAF04();
void fn_802BAF50();
void fn_802BB114();
void fn_802E40FC();
extern char lbl_8041D9FC[];
extern char lbl_804CF7C8[];
extern char lbl_805347FC[];
void fn_802BB078();
void *fn_802BB0F4();
}
extern "C" {
void fn_802BB050(){
 fn_80066188((int)fn_802BB078);
}
void fn_802BB078(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_805347FC,(int)fn_802E40FC,(int)fn_802B8770,(int)fn_802BB0F4,(int)lbl_8041D9FC,20,(int)fn_802BAF50,(int)fn_802BB114,0,(int)lbl_804CF7C8);
}
void *fn_802BB0F4(){return fn_802BAF04();}
}
#pragma pop
