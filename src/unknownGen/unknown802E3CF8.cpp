#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800284EC();
void fn_8002EABC();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802E3CAC();
void fn_802E3DB8();
extern char lbl_80420DC8[];
extern char lbl_804D2E20[];
extern char lbl_8053570C[];
void fn_802E3D20();
void *fn_802E3D98();
}
extern "C" {
void fn_802E3CF8(){
 fn_80066188((int)fn_802E3D20);
}
void fn_802E3D20(){
 fn_802B1AC8();
 fn_80066204(1,(int)lbl_8053570C,(int)fn_8002EABC,(int)fn_800284EC,(int)fn_802E3D98,(int)lbl_80420DC8,28,0,(int)fn_802E3DB8,0,(int)lbl_804D2E20);
}
void *fn_802E3D98(){return fn_802E3CAC();}
}
#pragma pop
