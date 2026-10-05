#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802AA788();
void fn_802ABC5C();
void *fn_802ABCE8();
void fn_802ABD34();
void fn_802ABF38();
void fn_802ABF48();
extern char lbl_8041BD14[];
extern char lbl_804CDB08[];
extern char lbl_805343DC[];
void fn_802ABE9C();
void *fn_802ABF18();
}
extern "C" {
void fn_802ABE74(){
 fn_80066188((int)fn_802ABE9C);
}
void fn_802ABE9C(){
 fn_802AA788();
 fn_80066204(0,(int)lbl_805343DC,(int)fn_802ABC5C,(int)fn_802ABF38,(int)fn_802ABF18,(int)lbl_8041BD14,24,(int)fn_802ABD34,(int)fn_802ABF48,0,(int)lbl_804CDB08);
}
void *fn_802ABF18(){return fn_802ABCE8();}
}
#pragma pop
