#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80024180();
void fn_8002907C();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802C8460();
void fn_802C84AC();
extern char lbl_8041EF08[];
extern char lbl_804D0C50[];
extern char lbl_80534DC0[];
void fn_802C8548();
void *fn_802C85BC();
}
extern "C" {
void fn_802C8520(){
 fn_80066188((int)fn_802C8548);
}
void fn_802C8548(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80534DC0,(int)fn_8002907C,(int)fn_80024180,(int)fn_802C85BC,(int)lbl_8041EF08,20,(int)fn_802C84AC,0,0,(int)lbl_804D0C50);
}
void *fn_802C85BC(){return fn_802C8460();}
}
#pragma pop
