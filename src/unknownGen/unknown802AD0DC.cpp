#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void *fn_8010DF8C();
void fn_8010E2EC();
void fn_802AA788();
void *fn_802ACFAC();
void fn_802ACFF8();
void fn_802AD1A0();
extern char lbl_8041BF84[];
extern char lbl_804CDD5C[];
extern char lbl_8053446C[];
void fn_802AD104();
void *fn_802AD180();
}
extern "C" {
void fn_802AD0DC(){
 fn_80066188((int)fn_802AD104);
}
void fn_802AD104(){
 fn_802AA788();
 fn_80066204(0,(int)lbl_8053446C,(int)fn_8010E2EC,(int)fn_8010DF8C,(int)fn_802AD180,(int)lbl_8041BF84,16,(int)fn_802ACFF8,(int)fn_802AD1A0,0,(int)lbl_804CDD5C);
}
void *fn_802AD180(){return fn_802ACFAC();}
}
#pragma pop
