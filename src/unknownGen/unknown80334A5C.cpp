#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void *fn_802B381C();
void fn_802E3908();
void fn_803250AC();
void *fn_80334900();
void fn_8033494C();
void fn_80334B18();
extern char lbl_80453E5C[];
extern char lbl_80535FD4[];
void fn_80334A84();
void *fn_80334AF8();
}
extern "C" {
void fn_80334A5C(){
 fn_80066188((int)fn_80334A84);
}
void fn_80334A84(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_80535FD4,(int)fn_802E3908,(int)fn_802B381C,(int)fn_80334AF8,(int)lbl_80453E5C,40,(int)fn_8033494C,(int)fn_80334B18,0,0);
}
void *fn_80334AF8(){return fn_80334900();}
}
#pragma pop
