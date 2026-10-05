#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802CCE38();
void fn_803250AC();
void fn_803386E8();
void *fn_8033B5B8();
void fn_8033B604();
extern char lbl_8045477C[];
extern char lbl_80536234[];
void fn_8033B750();
void *fn_8033B7BC();
}
extern "C" {
void fn_8033B728(){
 fn_80066188((int)fn_8033B750);
}
void fn_8033B750(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_80536234,(int)fn_802CCE38,(int)fn_803386E8,(int)fn_8033B7BC,(int)lbl_8045477C,44,(int)fn_8033B604,0,0,0);
}
void *fn_8033B7BC(){return fn_8033B5B8();}
}
#pragma pop
