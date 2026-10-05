#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B381C();
void fn_802E3908();
void fn_803250AC();
void *fn_8033E5F8();
void fn_8033E644();
void fn_8033E860();
extern char lbl_80454BF8[];
extern char lbl_804E3554[];
extern char lbl_80536504[];
void fn_8033E7C4();
void *fn_8033E840();
}
extern "C" {
void fn_8033E79C(){
 fn_80066188((int)fn_8033E7C4);
}
void fn_8033E7C4(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_80536504,(int)fn_802E3908,(int)fn_802B381C,(int)fn_8033E840,(int)lbl_80454BF8,48,(int)fn_8033E644,(int)fn_8033E860,0,(int)lbl_804E3554);
}
void *fn_8033E840(){return fn_8033E5F8();}
}
#pragma pop
