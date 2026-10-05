#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void *fn_802B8770();
void fn_802E40FC();
void fn_803250AC();
void *fn_80335620();
void fn_8033566C();
void fn_803357D8();
extern char lbl_80453F24[];
extern char lbl_8053600C[];
void fn_80335744();
void *fn_803357B8();
}
extern "C" {
void fn_8033571C(){
 fn_80066188((int)fn_80335744);
}
void fn_80335744(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_8053600C,(int)fn_802E40FC,(int)fn_802B8770,(int)fn_803357B8,(int)lbl_80453F24,52,(int)fn_8033566C,(int)fn_803357D8,0,0);
}
void *fn_803357B8(){return fn_80335620();}
}
#pragma pop
